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

// Function: entry_0010e940
// Address: 0x10e940 - 0x10e948
void entry_0010e940_0x10e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e940_0x10e940");
#endif

    ctx->pc = 0x10e940u;

    // 0x10e940: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x10e940u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x10e944: 0x0  nop
    ctx->pc = 0x10e944u;
    // NOP
    ctx->pc = 0x10e948u;
}
