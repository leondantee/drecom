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

// Function: entry_00214f70
// Address: 0x214f70 - 0x214f78
void entry_00214f70_0x214f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214f70_0x214f70");
#endif

    ctx->pc = 0x214f70u;

    // 0x214f70: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x214f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x214f74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x214F74u;
    {
        const bool branch_taken_0x214f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f74) {
            ctx->pc = 0x214F84u;
            return;
        }
    }
    ctx->pc = 0x214F7Cu;
}
