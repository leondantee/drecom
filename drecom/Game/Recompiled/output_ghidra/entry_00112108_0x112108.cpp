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

// Function: entry_00112108
// Address: 0x112108 - 0x112138
void entry_00112108_0x112108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112108_0x112108");
#endif

    ctx->pc = 0x112108u;

    // 0x112108: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x112108u;
    {
        const bool branch_taken_0x112108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112108u;
        // 0x11210c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112108) {
            ctx->pc = 0x112218u;
            return;
        }
    }
    ctx->pc = 0x112110u;
    // 0x112110: 0x14850023  bne         $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x112110u;
    {
        const bool branch_taken_0x112110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x112114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112110u;
        // 0x112114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112110) {
            ctx->pc = 0x1121A0u;
            return;
        }
    }
    ctx->pc = 0x112118u;
    // 0x112118: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x112118u;
    {
        const bool branch_taken_0x112118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112118u;
        // 0x11211c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112118) {
            ctx->pc = 0x112164u;
            return;
        }
    }
    ctx->pc = 0x112120u;
    // 0x112120: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112120u;
    {
        const bool branch_taken_0x112120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112120u;
        // 0x112124: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112120) {
            ctx->pc = 0x112138u;
            return;
        }
    }
    ctx->pc = 0x112128u;
    // 0x112128: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x112128u;
    {
        const bool branch_taken_0x112128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112128u;
        // 0x11212c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112128) {
            ctx->pc = 0x112150u;
            return;
        }
    }
    ctx->pc = 0x112130u;
    // 0x112130: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x112130u;
    {
        const bool branch_taken_0x112130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112130) {
            ctx->pc = 0x112218u;
            return;
        }
    }
    ctx->pc = 0x112138u;
}
