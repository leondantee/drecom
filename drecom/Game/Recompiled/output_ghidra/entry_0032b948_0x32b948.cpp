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

// Function: entry_0032b948
// Address: 0x32b948 - 0x32b958
void entry_0032b948_0x32b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b948_0x32b948");
#endif

    ctx->pc = 0x32b948u;

    // 0x32b948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b94c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32b94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32b950: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32B950u;
    {
        const bool branch_taken_0x32b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b950) {
            ctx->pc = 0x32B980u;
            return;
        }
    }
    ctx->pc = 0x32B958u;
}
