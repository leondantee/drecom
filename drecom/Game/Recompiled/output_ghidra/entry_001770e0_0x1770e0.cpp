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

// Function: entry_001770e0
// Address: 0x1770e0 - 0x1770f0
void entry_001770e0_0x1770e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001770e0_0x1770e0");
#endif

    ctx->pc = 0x1770e0u;

    // 0x1770e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1770e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1770e4: 0x8c23fdf0  lw          $v1, -0x210($at)
    ctx->pc = 0x1770e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFDF0u));
    // 0x1770e8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1770e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1770ec: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x1770ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x1770f0u;
}
