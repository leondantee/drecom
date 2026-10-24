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

// Function: entry_00378424
// Address: 0x378424 - 0x378434
void entry_00378424_0x378424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378424_0x378424");
#endif

    ctx->pc = 0x378424u;

    // 0x378424: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x378424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x378428: 0xac20efb4  sw          $zero, -0x104C($at)
    ctx->pc = 0x378428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFB4u, _value); } while (0);
    // 0x37842c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x37842Cu;
    {
        const bool branch_taken_0x37842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37842c) {
            ctx->pc = 0x3784B0u;
            return;
        }
    }
    ctx->pc = 0x378434u;
}
