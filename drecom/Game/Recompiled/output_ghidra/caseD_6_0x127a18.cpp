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

// Function: caseD_6
// Address: 0x127a18 - 0x127a20
void caseD_6_0x127a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x127a18");
#endif

    ctx->pc = 0x127a18u;

    // 0x127a18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x127A18u;
    {
        const bool branch_taken_0x127a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a18) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x127A20u;
}
