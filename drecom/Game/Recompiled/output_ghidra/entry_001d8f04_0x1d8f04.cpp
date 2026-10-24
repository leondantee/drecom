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

// Function: entry_001d8f04
// Address: 0x1d8f04 - 0x1d8f20
void entry_001d8f04_0x1d8f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8f04_0x1d8f04");
#endif

    ctx->pc = 0x1d8f04u;

    // 0x1d8f04: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f08: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d8f0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8f10: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f14: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8f14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d8f18: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1D8F18u;
    {
        const bool branch_taken_0x1d8f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f18) {
            ctx->pc = 0x1D91E4u;
            return;
        }
    }
    ctx->pc = 0x1D8F20u;
}
