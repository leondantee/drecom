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

// Function: entry_0033c618
// Address: 0x33c618 - 0x33c624
void entry_0033c618_0x33c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c618_0x33c618");
#endif

    ctx->pc = 0x33c618u;

    // 0x33c618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c61c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33C61Cu;
    {
        const bool branch_taken_0x33c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c61c) {
            ctx->pc = 0x33C64Cu;
            return;
        }
    }
    ctx->pc = 0x33C624u;
}
