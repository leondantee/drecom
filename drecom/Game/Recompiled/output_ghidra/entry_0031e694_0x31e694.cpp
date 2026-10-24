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

// Function: entry_0031e694
// Address: 0x31e694 - 0x31e6a0
void entry_0031e694_0x31e694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e694_0x31e694");
#endif

    ctx->pc = 0x31e694u;

    // 0x31e694: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x31e694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x31e698: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e69c: 0xac23af60  sw          $v1, -0x50A0($at)
    ctx->pc = 0x31e69cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF60u, _value); } while (0);
    ctx->pc = 0x31e6a0u;
}
