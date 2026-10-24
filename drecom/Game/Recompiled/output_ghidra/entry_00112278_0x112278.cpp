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

// Function: entry_00112278
// Address: 0x112278 - 0x112298
void entry_00112278_0x112278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112278_0x112278");
#endif

    ctx->pc = 0x112278u;

    // 0x112278: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x112278u;
    {
        const bool branch_taken_0x112278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112278u;
        // 0x11227c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112278) {
            ctx->pc = 0x1122A8u;
            return;
        }
    }
    ctx->pc = 0x112280u;
    // 0x112280: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x112280u;
    {
        const bool branch_taken_0x112280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112280) {
            ctx->pc = 0x112284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112280u;
            // 0x112284: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112298u;
            return;
        }
    }
    ctx->pc = 0x112288u;
    // 0x112288: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x112288u;
    {
        const bool branch_taken_0x112288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112288) {
            ctx->pc = 0x1122B0u;
            return;
        }
    }
    ctx->pc = 0x112290u;
    // 0x112290: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112290u;
    {
        const bool branch_taken_0x112290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112290) {
            ctx->pc = 0x1122E4u;
            return;
        }
    }
    ctx->pc = 0x112298u;
}
