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

// Function: entry_00113a0c
// Address: 0x113a0c - 0x113a28
void entry_00113a0c_0x113a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113a0c_0x113a0c");
#endif

    ctx->pc = 0x113a0cu;

    // 0x113a0c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x113a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x113a10: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x113a10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x113a14: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x113a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x113a18: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113a18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x113a1c: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x113a1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x113a20: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x113a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x113a24: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x113a24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    ctx->pc = 0x113a28u;
}
