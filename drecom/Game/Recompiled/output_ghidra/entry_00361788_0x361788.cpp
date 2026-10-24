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

// Function: entry_00361788
// Address: 0x361788 - 0x36179c
void entry_00361788_0x361788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361788_0x361788");
#endif

    ctx->pc = 0x361788u;

    // 0x361788: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x361788u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x36178c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36178Cu;
    {
        const bool branch_taken_0x36178c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36178c) {
            ctx->pc = 0x361778u;
            return;
        }
    }
    ctx->pc = 0x361794u;
    // 0x361794: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x361794u;
    {
        const bool branch_taken_0x361794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361794) {
            ctx->pc = 0x361804u;
            return;
        }
    }
    ctx->pc = 0x36179Cu;
}
