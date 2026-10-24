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

// Function: entry_0021d818
// Address: 0x21d818 - 0x21d820
void entry_0021d818_0x21d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d818_0x21d818");
#endif

    ctx->pc = 0x21d818u;

    // 0x21d818: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d81c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x21d81cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x21d820u;
}
