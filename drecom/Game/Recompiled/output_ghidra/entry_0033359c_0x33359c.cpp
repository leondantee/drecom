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

// Function: entry_0033359c
// Address: 0x33359c - 0x3335b0
void entry_0033359c_0x33359c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033359c_0x33359c");
#endif

    ctx->pc = 0x33359cu;

    // 0x33359c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3335a0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3335a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3335a4: 0xac222798  sw          $v0, 0x2798($at)
    ctx->pc = 0x3335a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892798u, _value); } while (0);
    // 0x3335a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3335A8u;
    {
        const bool branch_taken_0x3335a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3335a8) {
            ctx->pc = 0x3335C0u;
            return;
        }
    }
    ctx->pc = 0x3335B0u;
}
