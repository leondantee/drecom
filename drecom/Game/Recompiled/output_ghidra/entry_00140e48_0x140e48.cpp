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

// Function: entry_00140e48
// Address: 0x140e48 - 0x140e50
void entry_00140e48_0x140e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140e48_0x140e48");
#endif

    ctx->pc = 0x140e48u;

    // 0x140e48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e4c: 0xac208ef0  sw          $zero, -0x7110($at)
    ctx->pc = 0x140e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E8EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EF0u, _value); } while (0);
    ctx->pc = 0x140e50u;
}
