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

// Function: entry_00278688
// Address: 0x278688 - 0x278698
void entry_00278688_0x278688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278688_0x278688");
#endif

    ctx->pc = 0x278688u;

    // 0x278688: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27868c: 0xa0200e04  sb          $zero, 0xE04($at)
    ctx->pc = 0x27868cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
    // 0x278690: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x278690u;
    {
        const bool branch_taken_0x278690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278690) {
            ctx->pc = 0x2786ACu;
            return;
        }
    }
    ctx->pc = 0x278698u;
}
