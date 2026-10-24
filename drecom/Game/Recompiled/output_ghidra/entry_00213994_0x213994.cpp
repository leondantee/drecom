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

// Function: entry_00213994
// Address: 0x213994 - 0x21399c
void entry_00213994_0x213994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213994_0x213994");
#endif

    ctx->pc = 0x213994u;

    // 0x213994: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213994u;
    {
        const bool branch_taken_0x213994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213994u;
        // 0x213998: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213994) {
            ctx->pc = 0x2139B8u;
            return;
        }
    }
    ctx->pc = 0x21399Cu;
}
