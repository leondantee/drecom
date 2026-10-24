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

// Function: entry_00333218
// Address: 0x333218 - 0x333228
void entry_00333218_0x333218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333218_0x333218");
#endif

    ctx->pc = 0x333218u;

    // 0x333218: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33321c: 0xac202788  sw          $zero, 0x2788($at)
    ctx->pc = 0x33321cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892788u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892788u, _value); } while (0);
    // 0x333220: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x333220u;
    {
        const bool branch_taken_0x333220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333220) {
            ctx->pc = 0x3332DCu;
            return;
        }
    }
    ctx->pc = 0x333228u;
}
