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

// Function: entry_0029cd08
// Address: 0x29cd08 - 0x29cd64
void entry_0029cd08_0x29cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cd08_0x29cd08");
#endif

    ctx->pc = 0x29cd08u;

    // 0x29cd08: 0x240201eb  addiu       $v0, $zero, 0x1EB
    ctx->pc = 0x29cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
    // 0x29cd0c: 0x12020045  beq         $s0, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x29CD0Cu;
    {
        const bool branch_taken_0x29cd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd0c) {
            ctx->pc = 0x29CE24u;
            return;
        }
    }
    ctx->pc = 0x29CD14u;
    // 0x29cd14: 0x240201ea  addiu       $v0, $zero, 0x1EA
    ctx->pc = 0x29cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
    // 0x29cd18: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x29CD18u;
    {
        const bool branch_taken_0x29cd18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd18) {
            ctx->pc = 0x29CE04u;
            return;
        }
    }
    ctx->pc = 0x29CD20u;
    // 0x29cd20: 0x24020222  addiu       $v0, $zero, 0x222
    ctx->pc = 0x29cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x29cd24: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x29CD24u;
    {
        const bool branch_taken_0x29cd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd24) {
            ctx->pc = 0x29CDE4u;
            return;
        }
    }
    ctx->pc = 0x29CD2Cu;
    // 0x29cd2c: 0x24020127  addiu       $v0, $zero, 0x127
    ctx->pc = 0x29cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x29cd30: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29CD30u;
    {
        const bool branch_taken_0x29cd30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd30) {
            ctx->pc = 0x29CDC4u;
            return;
        }
    }
    ctx->pc = 0x29CD38u;
    // 0x29cd38: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x29cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x29cd3c: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29CD3Cu;
    {
        const bool branch_taken_0x29cd3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd3c) {
            ctx->pc = 0x29CDA4u;
            return;
        }
    }
    ctx->pc = 0x29CD44u;
    // 0x29cd44: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x29cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x29cd48: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29CD48u;
    {
        const bool branch_taken_0x29cd48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd48) {
            ctx->pc = 0x29CD84u;
            return;
        }
    }
    ctx->pc = 0x29CD50u;
    // 0x29cd50: 0x240200eb  addiu       $v0, $zero, 0xEB
    ctx->pc = 0x29cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x29cd54: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CD54u;
    {
        const bool branch_taken_0x29cd54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd54) {
            ctx->pc = 0x29CD64u;
            return;
        }
    }
    ctx->pc = 0x29CD5Cu;
    // 0x29cd5c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x29CD5Cu;
    {
        const bool branch_taken_0x29cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd5c) {
            ctx->pc = 0x29CE40u;
            return;
        }
    }
    ctx->pc = 0x29CD64u;
}
