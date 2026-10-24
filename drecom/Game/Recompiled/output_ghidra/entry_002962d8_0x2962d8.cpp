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

// Function: entry_002962d8
// Address: 0x2962d8 - 0x29632c
void entry_002962d8_0x2962d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002962d8_0x2962d8");
#endif

    switch (ctx->pc) {
        case 0x296314u: goto label_296314;
        default: break;
    }

    ctx->pc = 0x2962d8u;

    // 0x2962d8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2962d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2962dc: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x2962DCu;
    {
        const bool branch_taken_0x2962dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2962dc) {
            ctx->pc = 0x2960F8u;
            return;
        }
    }
    ctx->pc = 0x2962E4u;
    // 0x2962e4: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x2962e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2962e8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2962e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2962ec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2962ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2962f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2962f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2962f4: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x2962f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x2962f8: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x2962f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2962fc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2962fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x296300: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x296300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x296304: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x296304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x296308: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x296308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x29630c: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x29630Cu;
    SET_GPR_U32(ctx, 31, 0x296314u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x29630Cu, 0x296314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296314u;
label_296314:
    // 0x296314: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x296314u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x296318: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x296318u;
    {
        const bool branch_taken_0x296318 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x296318) {
            ctx->pc = 0x29632Cu;
            return;
        }
    }
    ctx->pc = 0x296320u;
    // 0x296320: 0x8e430a68  lw          $v1, 0xA68($s2)
    ctx->pc = 0x296320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x296324: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x296324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x296328: 0xae430a68  sw          $v1, 0xA68($s2)
    ctx->pc = 0x296328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 3));
    ctx->pc = 0x29632cu;
}
