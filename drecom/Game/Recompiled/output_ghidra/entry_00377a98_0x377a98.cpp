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

// Function: entry_00377a98
// Address: 0x377a98 - 0x377a9c
void entry_00377a98_0x377a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377a98_0x377a98");
#endif

    ctx->pc = 0x377a98u;

    // 0x377a98: 0xac30032c  sw          $s0, 0x32C($at)
    ctx->pc = 0x377a98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 16));
    ctx->pc = 0x377a9cu;
}
