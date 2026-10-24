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

// Function: entry_0010c6b8
// Address: 0x10c6b8 - 0x10c6d8
void entry_0010c6b8_0x10c6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c6b8_0x10c6b8");
#endif

    ctx->pc = 0x10c6b8u;

    // 0x10c6b8: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C6B8u;
    {
        const bool branch_taken_0x10c6b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6B8u;
        // 0x10c6bc: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6b8) {
            ctx->pc = 0x10C700u;
            return;
        }
    }
    ctx->pc = 0x10C6C0u;
    // 0x10c6c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C6C0u;
    {
        const bool branch_taken_0x10c6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6C0u;
        // 0x10c6c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6c0) {
            ctx->pc = 0x10C6D8u;
            return;
        }
    }
    ctx->pc = 0x10C6C8u;
    // 0x10c6c8: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C6C8u;
    {
        const bool branch_taken_0x10c6c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x10C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6C8u;
        // 0x10c6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6c8) {
            ctx->pc = 0x10C6F0u;
            return;
        }
    }
    ctx->pc = 0x10C6D0u;
    // 0x10c6d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x10C6D0u;
    {
        const bool branch_taken_0x10c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6D0u;
        // 0x10c6d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6d0) {
            ctx->pc = 0x10C738u;
            return;
        }
    }
    ctx->pc = 0x10C6D8u;
}
