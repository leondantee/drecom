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

// Function: entry_00359088
// Address: 0x359088 - 0x3590d8
void entry_00359088_0x359088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359088_0x359088");
#endif

    switch (ctx->pc) {
        case 0x3590b4u: goto label_3590b4;
        case 0x3590c0u: goto label_3590c0;
        default: break;
    }

    ctx->pc = 0x359088u;

    // 0x359088: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x359088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x35908c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35908cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359094: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x359094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x359098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35909c: 0x24044802  addiu       $a0, $zero, 0x4802
    ctx->pc = 0x35909cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18434));
    // 0x3590a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3590a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3590a4: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x3590a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3590a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3590a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3590ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3590ACu;
    SET_GPR_U32(ctx, 31, 0x3590B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3590ACu, 0x3590B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590B4u;
label_3590b4:
    // 0x3590b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3590b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3590b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3590B8u;
    SET_GPR_U32(ctx, 31, 0x3590C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3590B8u, 0x3590C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590C0u;
label_3590c0:
    // 0x3590c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3590c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3590c4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3590c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3590c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3590c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3590cc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3590ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3590d0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3590D0u;
    {
        const bool branch_taken_0x3590d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3590d0) {
            ctx->pc = 0x3591A4u;
            return;
        }
    }
    ctx->pc = 0x3590D8u;
}
