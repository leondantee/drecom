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

// Function: entry_00158438
// Address: 0x158438 - 0x158440
void entry_00158438_0x158438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158438_0x158438");
#endif

    ctx->pc = 0x158438u;

    // 0x158438: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x158438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x15843c: 0x245eec58  addiu       $fp, $v0, -0x13A8
    ctx->pc = 0x15843cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    ctx->pc = 0x158440u;
}
