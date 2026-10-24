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

// Function: entry_0029b904
// Address: 0x29b904 - 0x29b908
void entry_0029b904_0x29b904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b904_0x29b904");
#endif

    ctx->pc = 0x29b904u;

    // 0x29b904: 0xffa001e8  sd          $zero, 0x1E8($sp)
    ctx->pc = 0x29b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 0));
    ctx->pc = 0x29b908u;
}
