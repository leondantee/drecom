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

// Function: entry_00117274
// Address: 0x117274 - 0x117278
void entry_00117274_0x117274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117274_0x117274");
#endif

    ctx->pc = 0x117274u;

    // 0x117274: 0x8045c98  j           func_117260
    ctx->pc = 0x117274u;
    ctx->pc = 0x117260u;
    _cleanup_r_0x117260(rdram, ctx, runtime); return;
    ctx->pc = 0x11727Cu;
}
