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

// Function: entry_0027f488
// Address: 0x27f488 - 0x27f49c
void entry_0027f488_0x27f488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f488_0x27f488");
#endif

    ctx->pc = 0x27f488u;

    // 0x27f488: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27f488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27f48c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f490: 0xa023d4b1  sb          $v1, -0x2B4F($at)
    ctx->pc = 0x27f490u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x27f494: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27f494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f498: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x27f49cu;
}
