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

// Function: entry_0012ada4
// Address: 0x12ada4 - 0x12ade8
void entry_0012ada4_0x12ada4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ada4_0x12ada4");
#endif

    ctx->pc = 0x12ada4u;

    // 0x12ada4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ada8: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12ada8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12adac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12adb0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12adb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12adb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12adb8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12ADB8u;
    {
        const bool branch_taken_0x12adb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12adb8) {
            ctx->pc = 0x12AE60u;
            return;
        }
    }
    ctx->pc = 0x12ADC0u;
    // 0x12adc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12adc4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12ADC4u;
    {
        const bool branch_taken_0x12adc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12adc4) {
            ctx->pc = 0x12AE38u;
            return;
        }
    }
    ctx->pc = 0x12ADCCu;
    // 0x12adcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12adccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12add0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12ADD0u;
    {
        const bool branch_taken_0x12add0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12add0) {
            ctx->pc = 0x12AE10u;
            return;
        }
    }
    ctx->pc = 0x12ADD8u;
    // 0x12add8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ADD8u;
    {
        const bool branch_taken_0x12add8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12add8) {
            ctx->pc = 0x12ADE8u;
            return;
        }
    }
    ctx->pc = 0x12ADE0u;
    // 0x12ade0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12ADE0u;
    {
        const bool branch_taken_0x12ade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ade0) {
            ctx->pc = 0x12ADE8u;
            return;
        }
    }
    ctx->pc = 0x12ADE8u;
}
