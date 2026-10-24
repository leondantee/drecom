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

// Function: entry_003630d4
// Address: 0x3630d4 - 0x3630e0
void entry_003630d4_0x3630d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003630d4_0x3630d4");
#endif

    ctx->pc = 0x3630d4u;

    // 0x3630d4: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x3630d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3630d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3630D8u;
    {
        const bool branch_taken_0x3630d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630d8) {
            ctx->pc = 0x3630F0u;
            return;
        }
    }
    ctx->pc = 0x3630E0u;
}
