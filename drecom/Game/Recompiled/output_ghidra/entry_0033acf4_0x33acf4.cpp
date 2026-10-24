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

// Function: entry_0033acf4
// Address: 0x33acf4 - 0x33ad30
void entry_0033acf4_0x33acf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033acf4_0x33acf4");
#endif

    ctx->pc = 0x33acf4u;

    // 0x33acf4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x33acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x33acf8: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33ACF8u;
    {
        const bool branch_taken_0x33acf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33acf8) {
            ctx->pc = 0x33AD30u;
            return;
        }
    }
    ctx->pc = 0x33AD00u;
    // 0x33ad00: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x33ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x33ad04: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AD04u;
    {
        const bool branch_taken_0x33ad04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad04) {
            ctx->pc = 0x33AD30u;
            return;
        }
    }
    ctx->pc = 0x33AD0Cu;
    // 0x33ad0c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x33ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33ad10: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AD10u;
    {
        const bool branch_taken_0x33ad10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad10) {
            ctx->pc = 0x33AD30u;
            return;
        }
    }
    ctx->pc = 0x33AD18u;
    // 0x33ad18: 0x24020071  addiu       $v0, $zero, 0x71
    ctx->pc = 0x33ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x33ad1c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AD1Cu;
    {
        const bool branch_taken_0x33ad1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad1c) {
            ctx->pc = 0x33AD30u;
            return;
        }
    }
    ctx->pc = 0x33AD24u;
    // 0x33ad24: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x33ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x33ad28: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AD28u;
    {
        const bool branch_taken_0x33ad28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ad28) {
            ctx->pc = 0x33AD4Cu;
            return;
        }
    }
    ctx->pc = 0x33AD30u;
}
