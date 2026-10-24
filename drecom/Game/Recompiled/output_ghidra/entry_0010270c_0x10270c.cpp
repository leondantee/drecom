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

// Function: entry_0010270c
// Address: 0x10270c - 0x102710
void entry_0010270c_0x10270c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010270c_0x10270c");
#endif

    ctx->pc = 0x10270cu;

    // 0x10270c: 0x8046760  j           func_119D80
    ctx->pc = 0x10270Cu;
    ctx->pc = 0x119D80u;
    printf_0x119d80(rdram, ctx, runtime); return;
    ctx->pc = 0x102714u;
}
