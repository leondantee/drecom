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

// Function: entry_0032b7c4
// Address: 0x32b7c4 - 0x32b7d4
void entry_0032b7c4_0x32b7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b7c4_0x32b7c4");
#endif

    ctx->pc = 0x32b7c4u;

    // 0x32b7c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b7c8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x32b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x32b7cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32B7CCu;
    {
        const bool branch_taken_0x32b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7cc) {
            ctx->pc = 0x32B800u;
            return;
        }
    }
    ctx->pc = 0x32B7D4u;
}
