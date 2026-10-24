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

// Function: entry_0031b2b8
// Address: 0x31b2b8 - 0x31b2c8
void entry_0031b2b8_0x31b2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b2b8_0x31b2b8");
#endif

    ctx->pc = 0x31b2b8u;

    // 0x31b2b8: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x31b2b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b2bc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x31B2BCu;
    {
        const bool branch_taken_0x31b2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b2bc) {
            ctx->pc = 0x31B27Cu;
            return;
        }
    }
    ctx->pc = 0x31B2C4u;
    // 0x31b2c4: 0x0  nop
    ctx->pc = 0x31b2c4u;
    // NOP
    ctx->pc = 0x31b2c8u;
}
