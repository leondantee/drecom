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

// Function: entry_001cc164
// Address: 0x1cc164 - 0x1cc16c
void entry_001cc164_0x1cc164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc164_0x1cc164");
#endif

    ctx->pc = 0x1cc164u;

    // 0x1cc164: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc168: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1cc168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x1cc16cu;
}
