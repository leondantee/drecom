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

// Function: entry_0011319c
// Address: 0x11319c - 0x1131a0
void entry_0011319c_0x11319c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011319c_0x11319c");
#endif

    ctx->pc = 0x11319cu;

    // 0x11319c: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x11319cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    ctx->pc = 0x1131a0u;
}
