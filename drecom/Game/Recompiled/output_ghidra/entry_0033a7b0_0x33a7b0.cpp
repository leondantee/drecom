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

// Function: entry_0033a7b0
// Address: 0x33a7b0 - 0x33a7c0
void entry_0033a7b0_0x33a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a7b0_0x33a7b0");
#endif

    ctx->pc = 0x33a7b0u;

    // 0x33a7b0: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x33a7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33a7b4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x33a7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33a7b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33A7B8u;
    {
        const bool branch_taken_0x33a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a7b8) {
            ctx->pc = 0x33A808u;
            return;
        }
    }
    ctx->pc = 0x33A7C0u;
}
