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

// Function: entry_00185a54
// Address: 0x185a54 - 0x185a64
void entry_00185a54_0x185a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185a54_0x185a54");
#endif

    ctx->pc = 0x185a54u;

    // 0x185a54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185a58: 0xa0200345  sb          $zero, 0x345($at)
    ctx->pc = 0x185a58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480345u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480345u, _value); } while (0);
    // 0x185a5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x185A5Cu;
    {
        const bool branch_taken_0x185a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a5c) {
            ctx->pc = 0x185AD0u;
            return;
        }
    }
    ctx->pc = 0x185A64u;
}
