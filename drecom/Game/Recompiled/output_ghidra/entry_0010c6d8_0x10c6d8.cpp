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

// Function: entry_0010c6d8
// Address: 0x10c6d8 - 0x10c6f0
void entry_0010c6d8_0x10c6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c6d8_0x10c6d8");
#endif

    ctx->pc = 0x10c6d8u;

    // 0x10c6d8: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10C6D8u;
    {
        const bool branch_taken_0x10c6d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6D8u;
        // 0x10c6dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6d8) {
            ctx->pc = 0x10C710u;
            return;
        }
    }
    ctx->pc = 0x10C6E0u;
    // 0x10c6e0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10C6E0u;
    {
        const bool branch_taken_0x10c6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6E0u;
        // 0x10c6e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6e0) {
            ctx->pc = 0x10C720u;
            return;
        }
    }
    ctx->pc = 0x10C6E8u;
    // 0x10c6e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10C6E8u;
    {
        const bool branch_taken_0x10c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6E8u;
        // 0x10c6ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6e8) {
            ctx->pc = 0x10C738u;
            return;
        }
    }
    ctx->pc = 0x10C6F0u;
}
