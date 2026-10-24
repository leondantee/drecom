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

// Function: entry_00217180
// Address: 0x217180 - 0x217184
void entry_00217180_0x217180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217180_0x217180");
#endif

    ctx->pc = 0x217180u;

    // 0x217180: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x217180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->pc = 0x217184u;
}
