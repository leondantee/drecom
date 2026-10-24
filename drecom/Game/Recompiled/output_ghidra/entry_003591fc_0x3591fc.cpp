#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_003591fc
// Address: 0x3591fc - 0x35924c
void entry_003591fc_0x3591fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003591fc_0x3591fc");
#endif

    switch (ctx->pc) {
        case 0x359228u: goto label_359228;
        case 0x359234u: goto label_359234;
        default: break;
    }

    ctx->pc = 0x3591fcu;

    // 0x3591fc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3591fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x359200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359204: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359208: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x359208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x35920c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359210: 0x24044806  addiu       $a0, $zero, 0x4806
    ctx->pc = 0x359210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18438));
    // 0x359214: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359218: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x359218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x35921c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35921cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359220: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x359220u;
    SET_GPR_U32(ctx, 31, 0x359228u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x359220u, 0x359228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359228u;
label_359228:
    // 0x359228: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x359228u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35922c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35922Cu;
    SET_GPR_U32(ctx, 31, 0x359234u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35922Cu, 0x359234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359234u;
label_359234:
    // 0x359234: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359238: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x359238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x35923c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x359240: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x359240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359244: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x359244u;
    {
        const bool branch_taken_0x359244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359244) {
            ctx->pc = 0x3592F0u;
            return;
        }
    }
    ctx->pc = 0x35924Cu;
}
