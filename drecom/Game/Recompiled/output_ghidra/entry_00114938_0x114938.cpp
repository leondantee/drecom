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

// Function: entry_00114938
// Address: 0x114938 - 0x114944
void entry_00114938_0x114938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114938_0x114938");
#endif

    ctx->pc = 0x114938u;

    // 0x114938: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x114938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11493c: 0x10a03c  dsll32      $s4, $s0, 0
    ctx->pc = 0x11493cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << (32 + 0));
    // 0x114940: 0x2822825  or          $a1, $s4, $v0
    ctx->pc = 0x114940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    ctx->pc = 0x114944u;
}
