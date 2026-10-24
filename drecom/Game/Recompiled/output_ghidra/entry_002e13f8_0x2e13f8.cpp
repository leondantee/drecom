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

// Function: entry_002e13f8
// Address: 0x2e13f8 - 0x2e1408
void entry_002e13f8_0x2e13f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e13f8_0x2e13f8");
#endif

    ctx->pc = 0x2e13f8u;

    // 0x2e13f8: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2e13f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e13fc: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2E13FCu;
    {
        const bool branch_taken_0x2e13fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e13fc) {
            ctx->pc = 0x2E133Cu;
            return;
        }
    }
    ctx->pc = 0x2E1404u;
    // 0x2e1404: 0x0  nop
    ctx->pc = 0x2e1404u;
    // NOP
    ctx->pc = 0x2e1408u;
}
