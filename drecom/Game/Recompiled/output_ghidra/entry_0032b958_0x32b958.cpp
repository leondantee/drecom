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

// Function: entry_0032b958
// Address: 0x32b958 - 0x32b968
void entry_0032b958_0x32b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b958_0x32b958");
#endif

    ctx->pc = 0x32b958u;

    // 0x32b958: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b95c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32b960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B960u;
    {
        const bool branch_taken_0x32b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b960) {
            ctx->pc = 0x32B980u;
            return;
        }
    }
    ctx->pc = 0x32B968u;
}
