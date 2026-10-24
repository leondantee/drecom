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

// Function: entry_002787c8
// Address: 0x2787c8 - 0x2787d0
void entry_002787c8_0x2787c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002787c8_0x2787c8");
#endif

    ctx->pc = 0x2787c8u;

    // 0x2787c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2787c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2787cc: 0x0  nop
    ctx->pc = 0x2787ccu;
    // NOP
    ctx->pc = 0x2787d0u;
}
