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

// Function: entry_0011209c
// Address: 0x11209c - 0x1120d0
void entry_0011209c_0x11209c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011209c_0x11209c");
#endif

    ctx->pc = 0x11209cu;

    // 0x11209c: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x11209cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1120a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1120a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1120a4: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1120A4u;
    {
        const bool branch_taken_0x1120a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1120A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120A4u;
        // 0x1120a8: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120a4) {
            ctx->pc = 0x1120D8u;
            return;
        }
    }
    ctx->pc = 0x1120ACu;
    // 0x1120ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1120acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1120b0: 0x1202004f  beq         $s0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1120B0u;
    {
        const bool branch_taken_0x1120b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1120B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120B0u;
        // 0x1120b4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120b0) {
            ctx->pc = 0x1121F0u;
            return;
        }
    }
    ctx->pc = 0x1120B8u;
    // 0x1120b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1120B8u;
    {
        const bool branch_taken_0x1120b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1120BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120B8u;
        // 0x1120bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120b8) {
            ctx->pc = 0x1120D0u;
            return;
        }
    }
    ctx->pc = 0x1120C0u;
    // 0x1120c0: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1120C0u;
    {
        const bool branch_taken_0x1120c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1120c0) {
            ctx->pc = 0x112204u;
            return;
        }
    }
    ctx->pc = 0x1120C8u;
    // 0x1120c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1120C8u;
    {
        const bool branch_taken_0x1120c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1120c8) {
            ctx->pc = 0x1120D8u;
            return;
        }
    }
    ctx->pc = 0x1120D0u;
}
