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

// Function: entry_0033a240
// Address: 0x33a240 - 0x33a250
void entry_0033a240_0x33a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a240_0x33a240");
#endif

    ctx->pc = 0x33a240u;

    // 0x33a240: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a244: 0xac205440  sw          $zero, 0x5440($at)
    ctx->pc = 0x33a244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a248: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33A248u;
    {
        const bool branch_taken_0x33a248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a248) {
            ctx->pc = 0x33A260u;
            return;
        }
    }
    ctx->pc = 0x33A250u;
}
