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

// Function: entry_001d89f8
// Address: 0x1d89f8 - 0x1d8a04
void entry_001d89f8_0x1d89f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d89f8_0x1d89f8");
#endif

    ctx->pc = 0x1d89f8u;

    // 0x1d89f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d89fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1d89fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1d8a00: 0xac225a00  sw          $v0, 0x5A00($at)
    ctx->pc = 0x1d8a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A00u, _value); } while (0);
    ctx->pc = 0x1d8a04u;
}
