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

// Function: entry_001a2a10
// Address: 0x1a2a10 - 0x1a2a20
void entry_001a2a10_0x1a2a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2a10_0x1a2a10");
#endif

    ctx->pc = 0x1a2a10u;

    // 0x1a2a10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a14: 0x2451010c  addiu       $s1, $v0, 0x10C
    ctx->pc = 0x1a2a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1a2a18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2A18u;
    {
        const bool branch_taken_0x1a2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a18) {
            ctx->pc = 0x1A2A28u;
            return;
        }
    }
    ctx->pc = 0x1A2A20u;
}
