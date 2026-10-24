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

// Function: entry_0010f7a0
// Address: 0x10f7a0 - 0x10f7a8
void entry_0010f7a0_0x10f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f7a0_0x10f7a0");
#endif

    ctx->pc = 0x10f7a0u;

    // 0x10f7a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10f7a4: 0x0  nop
    ctx->pc = 0x10f7a4u;
    // NOP
    ctx->pc = 0x10f7a8u;
}
