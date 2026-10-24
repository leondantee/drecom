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

// Function: entry_0011e268
// Address: 0x11e268 - 0x11e27c
void entry_0011e268_0x11e268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e268_0x11e268");
#endif

    ctx->pc = 0x11e268u;

    // 0x11e268: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E268u;
    {
        const bool branch_taken_0x11e268 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E268u;
        // 0x11e26c: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e268) {
            ctx->pc = 0x11E290u;
            return;
        }
    }
    ctx->pc = 0x11E270u;
    // 0x11e270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e274: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E274u;
    {
        const bool branch_taken_0x11e274 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e274) {
            ctx->pc = 0x11E278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E274u;
            // 0x11e278: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E27Cu;
            return;
        }
    }
    ctx->pc = 0x11E27Cu;
}
