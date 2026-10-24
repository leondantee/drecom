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

// Function: entry_00141b78
// Address: 0x141b78 - 0x141b80
void entry_00141b78_0x141b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b78_0x141b78");
#endif

    ctx->pc = 0x141b78u;

    // 0x141b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x141b7c: 0x0  nop
    ctx->pc = 0x141b7cu;
    // NOP
    ctx->pc = 0x141b80u;
}
