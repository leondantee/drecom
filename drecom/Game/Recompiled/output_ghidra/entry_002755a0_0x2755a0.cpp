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

// Function: entry_002755a0
// Address: 0x2755a0 - 0x2755a8
void entry_002755a0_0x2755a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002755a0_0x2755a0");
#endif

    ctx->pc = 0x2755a0u;

    // 0x2755a0: 0x2417001e  addiu       $s7, $zero, 0x1E
    ctx->pc = 0x2755a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2755a4: 0x0  nop
    ctx->pc = 0x2755a4u;
    // NOP
    ctx->pc = 0x2755a8u;
}
