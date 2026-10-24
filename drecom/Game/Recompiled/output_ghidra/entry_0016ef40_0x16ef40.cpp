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

// Function: entry_0016ef40
// Address: 0x16ef40 - 0x16ef60
void entry_0016ef40_0x16ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ef40_0x16ef40");
#endif

    switch (ctx->pc) {
        case 0x16ef5cu: goto label_16ef5c;
        default: break;
    }

    ctx->pc = 0x16ef40u;

    // 0x16ef40: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x16ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ef44: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x16ef44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x16ef48: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x16ef48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16ef4c: 0x73c03e28  paddub      $a3, $fp, $zero
    ctx->pc = 0x16ef4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x16ef50: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x16ef50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ef54: 0xc05e858  jal         func_17A160
    ctx->pc = 0x16EF54u;
    SET_GPR_U32(ctx, 31, 0x16EF5Cu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x16EF54u, 0x16EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF5Cu;
label_16ef5c:
    // 0x16ef5c: 0x0  nop
    ctx->pc = 0x16ef5cu;
    // NOP
    ctx->pc = 0x16ef60u;
}
