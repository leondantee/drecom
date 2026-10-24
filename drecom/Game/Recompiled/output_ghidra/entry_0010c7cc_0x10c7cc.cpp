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

// Function: entry_0010c7cc
// Address: 0x10c7cc - 0x10c7f8
void entry_0010c7cc_0x10c7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c7cc_0x10c7cc");
#endif

    ctx->pc = 0x10c7ccu;

    // 0x10c7cc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x10c7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10c7d0: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x10C7D0u;
    {
        const bool branch_taken_0x10c7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c7d0) {
            ctx->pc = 0x10C7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C7D0u;
            // 0x10c7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C850u;
            return;
        }
    }
    ctx->pc = 0x10C7D8u;
    // 0x10c7d8: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C7D8u;
    {
        const bool branch_taken_0x10c7d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c7d8) {
            ctx->pc = 0x10C7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C7D8u;
            // 0x10c7dc: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C820u;
            return;
        }
    }
    ctx->pc = 0x10C7E0u;
    // 0x10c7e0: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C7E0u;
    {
        const bool branch_taken_0x10c7e0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x10c7e0) {
            ctx->pc = 0x10C7F8u;
            return;
        }
    }
    ctx->pc = 0x10C7E8u;
    // 0x10c7e8: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C7E8u;
    {
        const bool branch_taken_0x10c7e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x10C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7E8u;
        // 0x10c7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7e8) {
            ctx->pc = 0x10C810u;
            return;
        }
    }
    ctx->pc = 0x10C7F0u;
    // 0x10c7f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10C7F0u;
    {
        const bool branch_taken_0x10c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7F0u;
        // 0x10c7f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7f0) {
            ctx->pc = 0x10C854u;
            return;
        }
    }
    ctx->pc = 0x10C7F8u;
}
