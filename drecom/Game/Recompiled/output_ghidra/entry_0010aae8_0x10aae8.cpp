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

// Function: entry_0010aae8
// Address: 0x10aae8 - 0x10aaec
void entry_0010aae8_0x10aae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aae8_0x10aae8");
#endif

    ctx->pc = 0x10aae8u;

    // 0x10aae8: 0x804169e  j           func_105A78
    ctx->pc = 0x10AAE8u;
    ctx->pc = 0x105A78u;
    _ipuSetMPEG1_0x105a78(rdram, ctx, runtime); return;
    ctx->pc = 0x10AAF0u;
}
