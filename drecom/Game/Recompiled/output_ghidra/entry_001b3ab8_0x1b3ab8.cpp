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

// Function: entry_001b3ab8
// Address: 0x1b3ab8 - 0x1b3ac4
void entry_001b3ab8_0x1b3ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ab8_0x1b3ab8");
#endif

    ctx->pc = 0x1b3ab8u;

    // 0x1b3ab8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1b3ab8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3abc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B3ABCu;
    {
        const bool branch_taken_0x1b3abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3abc) {
            ctx->pc = 0x1B3B80u;
            return;
        }
    }
    ctx->pc = 0x1B3AC4u;
}
