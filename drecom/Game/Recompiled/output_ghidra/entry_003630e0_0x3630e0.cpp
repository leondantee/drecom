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

// Function: entry_003630e0
// Address: 0x3630e0 - 0x3630ec
void entry_003630e0_0x3630e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003630e0_0x3630e0");
#endif

    ctx->pc = 0x3630e0u;

    // 0x3630e0: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x3630e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3630e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3630E4u;
    {
        const bool branch_taken_0x3630e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630e4) {
            ctx->pc = 0x3630F0u;
            return;
        }
    }
    ctx->pc = 0x3630ECu;
}
