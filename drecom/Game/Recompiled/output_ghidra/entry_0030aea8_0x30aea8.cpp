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

// Function: entry_0030aea8
// Address: 0x30aea8 - 0x30aeb8
void entry_0030aea8_0x30aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030aea8_0x30aea8");
#endif

    ctx->pc = 0x30aea8u;

    // 0x30aea8: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x30aea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30aeac: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x30AEACu;
    {
        const bool branch_taken_0x30aeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aeac) {
            ctx->pc = 0x30ADFCu;
            return;
        }
    }
    ctx->pc = 0x30AEB4u;
    // 0x30aeb4: 0x0  nop
    ctx->pc = 0x30aeb4u;
    // NOP
    ctx->pc = 0x30aeb8u;
}
