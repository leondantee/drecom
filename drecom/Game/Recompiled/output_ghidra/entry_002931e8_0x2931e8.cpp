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

// Function: entry_002931e8
// Address: 0x2931e8 - 0x2931f4
void entry_002931e8_0x2931e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002931e8_0x2931e8");
#endif

    ctx->pc = 0x2931e8u;

    // 0x2931e8: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x2931e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2931ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2931ECu;
    {
        const bool branch_taken_0x2931ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931ec) {
            ctx->pc = 0x293210u;
            return;
        }
    }
    ctx->pc = 0x2931F4u;
}
