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

// Function: entry_002632c0
// Address: 0x2632c0 - 0x2632c8
void entry_002632c0_0x2632c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002632c0_0x2632c0");
#endif

    ctx->pc = 0x2632c0u;

    // 0x2632c0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2632c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2632c4: 0x0  nop
    ctx->pc = 0x2632c4u;
    // NOP
    ctx->pc = 0x2632c8u;
}
