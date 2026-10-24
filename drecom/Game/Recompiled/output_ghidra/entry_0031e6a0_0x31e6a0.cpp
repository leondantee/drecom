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

// Function: entry_0031e6a0
// Address: 0x31e6a0 - 0x31e6ac
void entry_0031e6a0_0x31e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e6a0_0x31e6a0");
#endif

    ctx->pc = 0x31e6a0u;

    // 0x31e6a0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e6a4: 0xa420af64  sh          $zero, -0x509C($at)
    ctx->pc = 0x31e6a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AF64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AF64u, _value); } while (0);
    // 0x31e6a8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    ctx->pc = 0x31e6acu;
}
