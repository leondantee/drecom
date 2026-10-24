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

// Function: entry_0026f80c
// Address: 0x26f80c - 0x26f81c
void entry_0026f80c_0x26f80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f80c_0x26f80c");
#endif

    ctx->pc = 0x26f80cu;

    // 0x26f80c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26f810: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x26f810u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x26f814: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x26f814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x26f818: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26f818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->pc = 0x26f81cu;
}
