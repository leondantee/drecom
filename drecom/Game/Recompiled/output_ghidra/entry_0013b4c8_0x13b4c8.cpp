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

// Function: entry_0013b4c8
// Address: 0x13b4c8 - 0x13b4d4
void entry_0013b4c8_0x13b4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b4c8_0x13b4c8");
#endif

    ctx->pc = 0x13b4c8u;

    // 0x13b4c8: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x13b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
    // 0x13b4cc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x13b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x13b4d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13b4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->pc = 0x13b4d4u;
}
