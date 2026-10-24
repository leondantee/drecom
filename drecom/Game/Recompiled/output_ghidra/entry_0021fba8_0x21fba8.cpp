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

// Function: entry_0021fba8
// Address: 0x21fba8 - 0x21fbb4
void entry_0021fba8_0x21fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fba8_0x21fba8");
#endif

    ctx->pc = 0x21fba8u;

    // 0x21fba8: 0x24170006  addiu       $s7, $zero, 0x6
    ctx->pc = 0x21fba8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21fbac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21FBACu;
    {
        const bool branch_taken_0x21fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fbac) {
            ctx->pc = 0x21FBB8u;
            return;
        }
    }
    ctx->pc = 0x21FBB4u;
}
