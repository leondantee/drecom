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

// Function: entry_0033a9b8
// Address: 0x33a9b8 - 0x33a9c4
void entry_0033a9b8_0x33a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a9b8_0x33a9b8");
#endif

    ctx->pc = 0x33a9b8u;

    // 0x33a9b8: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x33a9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33a9bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33A9BCu;
    {
        const bool branch_taken_0x33a9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a9bc) {
            ctx->pc = 0x33AA08u;
            return;
        }
    }
    ctx->pc = 0x33A9C4u;
}
