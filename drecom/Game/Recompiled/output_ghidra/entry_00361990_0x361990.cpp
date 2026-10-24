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

// Function: entry_00361990
// Address: 0x361990 - 0x3619a4
void entry_00361990_0x361990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361990_0x361990");
#endif

    ctx->pc = 0x361990u;

    // 0x361990: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x361990u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x361994: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x361994u;
    {
        const bool branch_taken_0x361994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x361994) {
            ctx->pc = 0x361984u;
            return;
        }
    }
    ctx->pc = 0x36199Cu;
    // 0x36199c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x36199Cu;
    {
        const bool branch_taken_0x36199c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36199c) {
            ctx->pc = 0x361A0Cu;
            return;
        }
    }
    ctx->pc = 0x3619A4u;
}
