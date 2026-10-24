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

// Function: entry_0021e7a0
// Address: 0x21e7a0 - 0x21e7b0
void entry_0021e7a0_0x21e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e7a0_0x21e7a0");
#endif

    ctx->pc = 0x21e7a0u;

    // 0x21e7a0: 0x2e03000a  sltiu       $v1, $s0, 0xA
    ctx->pc = 0x21e7a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x21e7a4: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21E7A4u;
    {
        const bool branch_taken_0x21e7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e7a4) {
            ctx->pc = 0x21E794u;
            return;
        }
    }
    ctx->pc = 0x21E7ACu;
    // 0x21e7ac: 0x0  nop
    ctx->pc = 0x21e7acu;
    // NOP
    ctx->pc = 0x21e7b0u;
}
