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

// Function: entry_0011bc54
// Address: 0x11bc54 - 0x11bc58
void entry_0011bc54_0x11bc54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc54_0x11bc54");
#endif

    ctx->pc = 0x11bc54u;

    // 0x11bc54: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x11bc54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x11bc58u;
}
