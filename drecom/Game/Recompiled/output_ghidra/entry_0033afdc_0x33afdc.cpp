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

// Function: entry_0033afdc
// Address: 0x33afdc - 0x33aff4
void entry_0033afdc_0x33afdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033afdc_0x33afdc");
#endif

    ctx->pc = 0x33afdcu;

    // 0x33afdc: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x33afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x33afe0: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AFE0u;
    {
        const bool branch_taken_0x33afe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33afe0) {
            ctx->pc = 0x33AFF4u;
            return;
        }
    }
    ctx->pc = 0x33AFE8u;
    // 0x33afe8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x33afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x33afec: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33AFECu;
    {
        const bool branch_taken_0x33afec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33afec) {
            ctx->pc = 0x33B014u;
            return;
        }
    }
    ctx->pc = 0x33AFF4u;
}
