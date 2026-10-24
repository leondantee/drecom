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

// Function: entry_00195cd4
// Address: 0x195cd4 - 0x195ce4
void entry_00195cd4_0x195cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195cd4_0x195cd4");
#endif

    ctx->pc = 0x195cd4u;

    // 0x195cd4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x195cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x195cd8: 0xac32ee30  sw          $s2, -0x11D0($at)
    ctx->pc = 0x195cd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3EEE30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEE30u, _value); } while (0);
    // 0x195cdc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x195CDCu;
    {
        const bool branch_taken_0x195cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cdc) {
            ctx->pc = 0x195D04u;
            return;
        }
    }
    ctx->pc = 0x195CE4u;
}
