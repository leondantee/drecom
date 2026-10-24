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

// Function: entry_0033adc8
// Address: 0x33adc8 - 0x33ade0
void entry_0033adc8_0x33adc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033adc8_0x33adc8");
#endif

    ctx->pc = 0x33adc8u;

    // 0x33adc8: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x33adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x33adcc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33ADCCu;
    {
        const bool branch_taken_0x33adcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33adcc) {
            ctx->pc = 0x33ADE0u;
            return;
        }
    }
    ctx->pc = 0x33ADD4u;
    // 0x33add4: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x33add4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x33add8: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33ADD8u;
    {
        const bool branch_taken_0x33add8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33add8) {
            ctx->pc = 0x33ADFCu;
            return;
        }
    }
    ctx->pc = 0x33ADE0u;
}
