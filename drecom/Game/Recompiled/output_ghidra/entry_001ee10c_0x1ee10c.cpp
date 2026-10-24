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

// Function: entry_001ee10c
// Address: 0x1ee10c - 0x1ee11c
void entry_001ee10c_0x1ee10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee10c_0x1ee10c");
#endif

    ctx->pc = 0x1ee10cu;

    // 0x1ee10c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee110: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ee110u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee114: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ee114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ee118: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ee118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x1ee11cu;
}
