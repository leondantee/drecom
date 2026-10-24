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

// Function: entry_0010e854
// Address: 0x10e854 - 0x10e858
void entry_0010e854_0x10e854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e854_0x10e854");
#endif

    ctx->pc = 0x10e854u;

    // 0x10e854: 0x8c4445b8  lw          $a0, 0x45B8($v0)
    ctx->pc = 0x10e854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->pc = 0x10e858u;
}
