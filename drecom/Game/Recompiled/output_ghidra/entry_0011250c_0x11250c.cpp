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

// Function: entry_0011250c
// Address: 0x11250c - 0x112510
void entry_0011250c_0x11250c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011250c_0x11250c");
#endif

    ctx->pc = 0x11250cu;

    // 0x11250c: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x11250cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    ctx->pc = 0x112510u;
}
