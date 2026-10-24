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

// Function: entry_0010aca4
// Address: 0x10aca4 - 0x10aca8
void entry_0010aca4_0x10aca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aca4_0x10aca4");
#endif

    ctx->pc = 0x10aca4u;

    // 0x10aca4: 0x2484c968  addiu       $a0, $a0, -0x3698
    ctx->pc = 0x10aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953320));
    ctx->pc = 0x10aca8u;
}
