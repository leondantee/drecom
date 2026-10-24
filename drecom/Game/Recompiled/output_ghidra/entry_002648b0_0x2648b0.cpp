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

// Function: entry_002648b0
// Address: 0x2648b0 - 0x2648c0
void entry_002648b0_0x2648b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002648b0_0x2648b0");
#endif

    ctx->pc = 0x2648b0u;

    // 0x2648b0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x2648b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2648b4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2648B4u;
    {
        const bool branch_taken_0x2648b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2648b4) {
            ctx->pc = 0x264884u;
            return;
        }
    }
    ctx->pc = 0x2648BCu;
    // 0x2648bc: 0x0  nop
    ctx->pc = 0x2648bcu;
    // NOP
    ctx->pc = 0x2648c0u;
}
