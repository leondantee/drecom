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

// Function: entry_00112138
// Address: 0x112138 - 0x112150
void entry_00112138_0x112138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112138_0x112138");
#endif

    ctx->pc = 0x112138u;

    // 0x112138: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x112138u;
    {
        const bool branch_taken_0x112138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112138u;
        // 0x11213c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112138) {
            ctx->pc = 0x112178u;
            return;
        }
    }
    ctx->pc = 0x112140u;
    // 0x112140: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x112140u;
    {
        const bool branch_taken_0x112140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x112144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112140u;
        // 0x112144: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112140) {
            ctx->pc = 0x11218Cu;
            return;
        }
    }
    ctx->pc = 0x112148u;
    // 0x112148: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x112148u;
    {
        const bool branch_taken_0x112148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112148) {
            ctx->pc = 0x112218u;
            return;
        }
    }
    ctx->pc = 0x112150u;
}
