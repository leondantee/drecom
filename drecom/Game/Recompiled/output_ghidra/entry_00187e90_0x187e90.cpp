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

// Function: entry_00187e90
// Address: 0x187e90 - 0x187f1c
void entry_00187e90_0x187e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e90_0x187e90");
#endif

    ctx->pc = 0x187e90u;

    // 0x187e90: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x187e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x187e94: 0x12420053  beq         $s2, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x187E94u;
    {
        const bool branch_taken_0x187e94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187e94) {
            ctx->pc = 0x187FE4u;
            return;
        }
    }
    ctx->pc = 0x187E9Cu;
    // 0x187e9c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x187e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x187ea0: 0x1242004b  beq         $s2, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x187EA0u;
    {
        const bool branch_taken_0x187ea0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ea0) {
            ctx->pc = 0x187FD0u;
            return;
        }
    }
    ctx->pc = 0x187EA8u;
    // 0x187ea8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x187ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187eac: 0x12420043  beq         $s2, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x187EACu;
    {
        const bool branch_taken_0x187eac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187eac) {
            ctx->pc = 0x187FBCu;
            return;
        }
    }
    ctx->pc = 0x187EB4u;
    // 0x187eb4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x187eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x187eb8: 0x1242003b  beq         $s2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x187EB8u;
    {
        const bool branch_taken_0x187eb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187eb8) {
            ctx->pc = 0x187FA8u;
            return;
        }
    }
    ctx->pc = 0x187EC0u;
    // 0x187ec0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x187ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x187ec4: 0x12420033  beq         $s2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x187EC4u;
    {
        const bool branch_taken_0x187ec4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ec4) {
            ctx->pc = 0x187F94u;
            return;
        }
    }
    ctx->pc = 0x187ECCu;
    // 0x187ecc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x187eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x187ed0: 0x1242002b  beq         $s2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x187ED0u;
    {
        const bool branch_taken_0x187ed0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ed0) {
            ctx->pc = 0x187F80u;
            return;
        }
    }
    ctx->pc = 0x187ED8u;
    // 0x187ed8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x187ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187edc: 0x12420023  beq         $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x187EDCu;
    {
        const bool branch_taken_0x187edc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187edc) {
            ctx->pc = 0x187F6Cu;
            return;
        }
    }
    ctx->pc = 0x187EE4u;
    // 0x187ee4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x187ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x187ee8: 0x1242001b  beq         $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x187EE8u;
    {
        const bool branch_taken_0x187ee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ee8) {
            ctx->pc = 0x187F58u;
            return;
        }
    }
    ctx->pc = 0x187EF0u;
    // 0x187ef0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x187ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187ef4: 0x12420013  beq         $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x187EF4u;
    {
        const bool branch_taken_0x187ef4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ef4) {
            ctx->pc = 0x187F44u;
            return;
        }
    }
    ctx->pc = 0x187EFCu;
    // 0x187efc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x187efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187f00: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x187F00u;
    {
        const bool branch_taken_0x187f00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187f00) {
            ctx->pc = 0x187F30u;
            return;
        }
    }
    ctx->pc = 0x187F08u;
    // 0x187f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187f0c: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187F0Cu;
    {
        const bool branch_taken_0x187f0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187f0c) {
            ctx->pc = 0x187F1Cu;
            return;
        }
    }
    ctx->pc = 0x187F14u;
    // 0x187f14: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x187F14u;
    {
        const bool branch_taken_0x187f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f14) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187F1Cu;
}
