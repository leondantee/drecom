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

// Function: entry_0032b7e4
// Address: 0x32b7e4 - 0x32b7f4
void entry_0032b7e4_0x32b7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b7e4_0x32b7e4");
#endif

    ctx->pc = 0x32b7e4u;

    // 0x32b7e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b7e8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x32b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x32b7ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32B7ECu;
    {
        const bool branch_taken_0x32b7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7ec) {
            ctx->pc = 0x32B800u;
            return;
        }
    }
    ctx->pc = 0x32B7F4u;
}
