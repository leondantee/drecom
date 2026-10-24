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

// Function: entry_0036adc4
// Address: 0x36adc4 - 0x36ae10
void entry_0036adc4_0x36adc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036adc4_0x36adc4");
#endif

    switch (ctx->pc) {
        case 0x36adecu: goto label_36adec;
        case 0x36adf8u: goto label_36adf8;
        case 0x36ae04u: goto label_36ae04;
        default: break;
    }

    ctx->pc = 0x36adc4u;

    // 0x36adc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36adc8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36adcc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x36adccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x36add0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36add4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36add4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36add8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36addc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36addcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36ade0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x36ade0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36ade4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36ADE4u;
    SET_GPR_U32(ctx, 31, 0x36ADECu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36ADE4u, 0x36ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADECu;
label_36adec:
    // 0x36adec: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x36adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x36adf0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36ADF0u;
    SET_GPR_U32(ctx, 31, 0x36ADF8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36ADF0u, 0x36ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADF8u;
label_36adf8:
    // 0x36adf8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x36adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x36adfc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36ADFCu;
    SET_GPR_U32(ctx, 31, 0x36AE04u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36ADFCu, 0x36AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE04u;
label_36ae04:
    // 0x36ae04: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x36ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x36ae08: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x36ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x36ae0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ae0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x36ae10u;
}
