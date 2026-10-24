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

// Function: entry_00116238
// Address: 0x116238 - 0x116248
void entry_00116238_0x116238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116238_0x116238");
#endif

    ctx->pc = 0x116238u;

    // 0x116238: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x116238u;
    {
        const bool branch_taken_0x116238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116238u;
        // 0x11623c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116238) {
            ctx->pc = 0x116270u;
            return;
        }
    }
    ctx->pc = 0x116240u;
    // 0x116240: 0x2451dad0  addiu       $s1, $v0, -0x2530
    ctx->pc = 0x116240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957776));
    // 0x116244: 0x0  nop
    ctx->pc = 0x116244u;
    // NOP
    ctx->pc = 0x116248u;
}
