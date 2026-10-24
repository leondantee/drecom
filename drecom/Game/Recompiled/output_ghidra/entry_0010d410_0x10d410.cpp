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

// Function: entry_0010d410
// Address: 0x10d410 - 0x10d414
void entry_0010d410_0x10d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d410_0x10d410");
#endif

    ctx->pc = 0x10d410u;

    // 0x10d410: 0x804344a  j           func_10D128
    ctx->pc = 0x10D410u;
    ctx->pc = 0x10D128u;
    cd_callback_0x10d128(rdram, ctx, runtime); return;
    ctx->pc = 0x10D418u;
}
