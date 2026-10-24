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

// Function: entry_0018a288
// Address: 0x18a288 - 0x18a298
void entry_0018a288_0x18a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a288_0x18a288");
#endif

    ctx->pc = 0x18a288u;

    // 0x18a288: 0x2e0200a8  sltiu       $v0, $s0, 0xA8
    ctx->pc = 0x18a288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)168) ? 1 : 0);
    // 0x18a28c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x18A28Cu;
    {
        const bool branch_taken_0x18a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a28c) {
            ctx->pc = 0x18A200u;
            return;
        }
    }
    ctx->pc = 0x18A294u;
    // 0x18a294: 0x0  nop
    ctx->pc = 0x18a294u;
    // NOP
    ctx->pc = 0x18a298u;
}
