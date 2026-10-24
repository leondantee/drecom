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

// Function: entry_0033ad4c
// Address: 0x33ad4c - 0x33adac
void entry_0033ad4c_0x33ad4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ad4c_0x33ad4c");
#endif

    ctx->pc = 0x33ad4cu;

    // 0x33ad4c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x33ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x33ad50: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x33AD50u;
    {
        const bool branch_taken_0x33ad50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad50) {
            ctx->pc = 0x33ADACu;
            return;
        }
    }
    ctx->pc = 0x33AD58u;
    // 0x33ad58: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x33ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x33ad5c: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33AD5Cu;
    {
        const bool branch_taken_0x33ad5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad5c) {
            ctx->pc = 0x33ADACu;
            return;
        }
    }
    ctx->pc = 0x33AD64u;
    // 0x33ad64: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x33ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x33ad68: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33AD68u;
    {
        const bool branch_taken_0x33ad68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad68) {
            ctx->pc = 0x33ADACu;
            return;
        }
    }
    ctx->pc = 0x33AD70u;
    // 0x33ad70: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x33ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x33ad74: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33AD74u;
    {
        const bool branch_taken_0x33ad74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad74) {
            ctx->pc = 0x33ADACu;
            return;
        }
    }
    ctx->pc = 0x33AD7Cu;
    // 0x33ad7c: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x33ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x33ad80: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AD80u;
    {
        const bool branch_taken_0x33ad80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad80) {
            ctx->pc = 0x33ADACu;
            return;
        }
    }
    ctx->pc = 0x33AD88u;
    // 0x33ad88: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x33ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x33ad8c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AD8Cu;
    {
        const bool branch_taken_0x33ad8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad8c) {
            ctx->pc = 0x33ADACu;
            return;
        }
    }
    ctx->pc = 0x33AD94u;
    // 0x33ad94: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x33ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x33ad98: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AD98u;
    {
        const bool branch_taken_0x33ad98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad98) {
            ctx->pc = 0x33ADACu;
            return;
        }
    }
    ctx->pc = 0x33ADA0u;
    // 0x33ada0: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x33ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x33ada4: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33ADA4u;
    {
        const bool branch_taken_0x33ada4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ada4) {
            ctx->pc = 0x33ADC8u;
            return;
        }
    }
    ctx->pc = 0x33ADACu;
}
