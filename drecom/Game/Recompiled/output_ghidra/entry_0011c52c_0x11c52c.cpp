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

// Function: entry_0011c52c
// Address: 0x11c52c - 0x11c540
void entry_0011c52c_0x11c52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c52c_0x11c52c");
#endif

    ctx->pc = 0x11c52cu;

    // 0x11c52c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x11c52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C530u;
    {
        const bool branch_taken_0x11c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C530u;
        // 0x11c534: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c530) {
            ctx->pc = 0x11C540u;
            return;
        }
    }
    ctx->pc = 0x11C538u;
    // 0x11c538: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x11C538u;
    {
        const bool branch_taken_0x11c538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C538u;
        // 0x11c53c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c538) {
            ctx->pc = 0x11C698u;
            return;
        }
    }
    ctx->pc = 0x11C540u;
}
