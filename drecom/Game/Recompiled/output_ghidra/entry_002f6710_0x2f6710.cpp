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

// Function: entry_002f6710
// Address: 0x2f6710 - 0x2f6720
void entry_002f6710_0x2f6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6710_0x2f6710");
#endif

    ctx->pc = 0x2f6710u;

    // 0x2f6710: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x2f6710u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f6714: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2F6714u;
    {
        const bool branch_taken_0x2f6714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6714) {
            ctx->pc = 0x2F6614u;
            return;
        }
    }
    ctx->pc = 0x2F671Cu;
    // 0x2f671c: 0x0  nop
    ctx->pc = 0x2f671cu;
    // NOP
    ctx->pc = 0x2f6720u;
}
