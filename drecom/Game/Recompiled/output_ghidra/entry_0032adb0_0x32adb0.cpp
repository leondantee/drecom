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

// Function: entry_0032adb0
// Address: 0x32adb0 - 0x32ae18
void entry_0032adb0_0x32adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032adb0_0x32adb0");
#endif

    switch (ctx->pc) {
        case 0x32ae14u: goto label_32ae14;
        default: break;
    }

    ctx->pc = 0x32adb0u;

    // 0x32adb0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32adb4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32adb8: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32adbc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32adc0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32adc4: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32adc8: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x32ADC8u;
    {
        const bool branch_taken_0x32adc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32adc8) {
            ctx->pc = 0x32AF30u;
            return;
        }
    }
    ctx->pc = 0x32ADD0u;
    // 0x32add0: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x32ADD0u;
    {
        const bool branch_taken_0x32add0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32add0) {
            ctx->pc = 0x32AE18u;
            return;
        }
    }
    ctx->pc = 0x32ADD8u;
    // 0x32add8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32add8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32addc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32ade0: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32ade4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32ade8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32adec: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32adf0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x32adf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32adf4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x32ADF4u;
    {
        const bool branch_taken_0x32adf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32adf4) {
            ctx->pc = 0x32AE18u;
            return;
        }
    }
    ctx->pc = 0x32ADFCu;
    // 0x32adfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32adfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32ae00: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x32ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x32ae04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32ae04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ae08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32ae08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ae0c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32AE0Cu;
    SET_GPR_U32(ctx, 31, 0x32AE14u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32AE0Cu, 0x32AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE14u;
label_32ae14:
    // 0x32ae14: 0x0  nop
    ctx->pc = 0x32ae14u;
    // NOP
    ctx->pc = 0x32ae18u;
}
