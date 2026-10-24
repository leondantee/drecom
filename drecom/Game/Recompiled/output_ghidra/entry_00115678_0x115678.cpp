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

// Function: entry_00115678
// Address: 0x115678 - 0x11567c
void entry_00115678_0x115678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115678_0x115678");
#endif

    ctx->pc = 0x115678u;

    // 0x115678: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x115678u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11567cu;
}
