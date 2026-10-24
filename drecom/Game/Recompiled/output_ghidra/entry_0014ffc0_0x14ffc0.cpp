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

// Function: entry_0014ffc0
// Address: 0x14ffc0 - 0x14ffe8
void entry_0014ffc0_0x14ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ffc0_0x14ffc0");
#endif

    switch (ctx->pc) {
        case 0x14ffdcu: goto label_14ffdc;
        default: break;
    }

    ctx->pc = 0x14ffc0u;

    // 0x14ffc0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14ffc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14ffc4: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x14ffc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14ffc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ffcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14ffccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ffd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14ffd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14ffd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14FFD4u;
    SET_GPR_U32(ctx, 31, 0x14FFDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14FFD4u, 0x14FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFDCu;
label_14ffdc:
    // 0x14ffdc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x14ffdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x14ffe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ffe4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x14ffe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14ffe8u;
}
