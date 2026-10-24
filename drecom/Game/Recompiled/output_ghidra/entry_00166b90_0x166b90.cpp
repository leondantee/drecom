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

// Function: entry_00166b90
// Address: 0x166b90 - 0x166ba4
void entry_00166b90_0x166b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166b90_0x166b90");
#endif

    ctx->pc = 0x166b90u;

    // 0x166b90: 0x3c0200a2  lui         $v0, 0xA2
    ctx->pc = 0x166b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)162 << 16));
    // 0x166b94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x166b98: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x166b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x166b9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x166ba0: 0xac220adc  sw          $v0, 0xADC($at)
    ctx->pc = 0x166ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0ADCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0ADCu, _value); } while (0);
    ctx->pc = 0x166ba4u;
}
