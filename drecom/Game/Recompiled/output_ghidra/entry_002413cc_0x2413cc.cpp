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

// Function: entry_002413cc
// Address: 0x2413cc - 0x241420
void entry_002413cc_0x2413cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002413cc_0x2413cc");
#endif

    switch (ctx->pc) {
        case 0x2413fcu: goto label_2413fc;
        default: break;
    }

    ctx->pc = 0x2413ccu;

    // 0x2413cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2413ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2413d0: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x2413d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x2413d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2413d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2413d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2413d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2413dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2413dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2413e0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2413e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2413e4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2413e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2413e8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2413e8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2413ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2413ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2413f0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2413f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2413f4: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2413F4u;
    SET_GPR_U32(ctx, 31, 0x2413FCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2413F4u, 0x2413FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413FCu;
label_2413fc:
    // 0x2413fc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241400: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x241400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x241404: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x241404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x241408: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x241408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x24140c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24140Cu;
    {
        const bool branch_taken_0x24140c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24140c) {
            ctx->pc = 0x241420u;
            return;
        }
    }
    ctx->pc = 0x241414u;
    // 0x241414: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241418: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24141c: 0xa440005e  sh          $zero, 0x5E($v0)
    ctx->pc = 0x24141cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x241420u;
}
