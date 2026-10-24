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

// Function: entry_00139098
// Address: 0x139098 - 0x1390a0
void entry_00139098_0x139098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139098_0x139098");
#endif

    ctx->pc = 0x139098u;

    // 0x139098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x139098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13909c: 0x0  nop
    ctx->pc = 0x13909cu;
    // NOP
    ctx->pc = 0x1390a0u;
}
