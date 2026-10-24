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

// Function: entry_001d10d8
// Address: 0x1d10d8 - 0x1d10e8
void entry_001d10d8_0x1d10d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d10d8_0x1d10d8");
#endif

    ctx->pc = 0x1d10d8u;

    // 0x1d10d8: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x1d10d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d10dc: 0x1460fed7  bnez        $v1, . + 4 + (-0x129 << 2)
    ctx->pc = 0x1D10DCu;
    {
        const bool branch_taken_0x1d10dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d10dc) {
            ctx->pc = 0x1D0C3Cu;
            return;
        }
    }
    ctx->pc = 0x1D10E4u;
    // 0x1d10e4: 0x0  nop
    ctx->pc = 0x1d10e4u;
    // NOP
    ctx->pc = 0x1d10e8u;
}
