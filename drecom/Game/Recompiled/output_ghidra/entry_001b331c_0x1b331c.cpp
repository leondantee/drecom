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

// Function: entry_001b331c
// Address: 0x1b331c - 0x1b332c
void entry_001b331c_0x1b331c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b331c_0x1b331c");
#endif

    ctx->pc = 0x1b331cu;

    // 0x1b331c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3320: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b3320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3324: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3324u;
    {
        const bool branch_taken_0x1b3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3324) {
            ctx->pc = 0x1B3338u;
            return;
        }
    }
    ctx->pc = 0x1B332Cu;
}
