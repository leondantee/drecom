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

// Function: entry_0031fad0
// Address: 0x31fad0 - 0x31fad8
void entry_0031fad0_0x31fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fad0_0x31fad0");
#endif

    ctx->pc = 0x31fad0u;

    // 0x31fad0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x31fad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fad4: 0x0  nop
    ctx->pc = 0x31fad4u;
    // NOP
    ctx->pc = 0x31fad8u;
}
