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

// Function: entry_00338bc4
// Address: 0x338bc4 - 0x338bcc
void entry_00338bc4_0x338bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338bc4_0x338bc4");
#endif

    ctx->pc = 0x338bc4u;

    // 0x338bc4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338bc8: 0xac309a10  sw          $s0, -0x65F0($at)
    ctx->pc = 0x338bc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3A9A10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A9A10u, _value); } while (0);
    ctx->pc = 0x338bccu;
}
