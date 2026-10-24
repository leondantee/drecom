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

// Function: entry_0011b934
// Address: 0x11b934 - 0x11b938
void entry_0011b934_0x11b934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b934_0x11b934");
#endif

    ctx->pc = 0x11b934u;

    // 0x11b934: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x11b934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
    ctx->pc = 0x11b938u;
}
