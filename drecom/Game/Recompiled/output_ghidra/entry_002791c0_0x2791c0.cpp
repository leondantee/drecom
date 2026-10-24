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

// Function: entry_002791c0
// Address: 0x2791c0 - 0x2791cc
void entry_002791c0_0x2791c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002791c0_0x2791c0");
#endif

    ctx->pc = 0x2791c0u;

    // 0x2791c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2791c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2791c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2791c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2791c8: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x2791c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
    ctx->pc = 0x2791ccu;
}
