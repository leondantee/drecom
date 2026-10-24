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

// Function: entry_00338c10
// Address: 0x338c10 - 0x338c18
void entry_00338c10_0x338c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338c10_0x338c10");
#endif

    ctx->pc = 0x338c10u;

    // 0x338c10: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338c14: 0xac309a18  sw          $s0, -0x65E8($at)
    ctx->pc = 0x338c14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3A9A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A9A18u, _value); } while (0);
    ctx->pc = 0x338c18u;
}
