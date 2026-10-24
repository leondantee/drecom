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

// Function: entry_003334ac
// Address: 0x3334ac - 0x3334b8
void entry_003334ac_0x3334ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003334ac_0x3334ac");
#endif

    ctx->pc = 0x3334acu;

    // 0x3334ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3334acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3334b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3334b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3334b4: 0xac222798  sw          $v0, 0x2798($at)
    ctx->pc = 0x3334b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892798u, _value); } while (0);
    ctx->pc = 0x3334b8u;
}
