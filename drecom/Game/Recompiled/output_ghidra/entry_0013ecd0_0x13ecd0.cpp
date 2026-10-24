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

// Function: entry_0013ecd0
// Address: 0x13ecd0 - 0x13ece8
void entry_0013ecd0_0x13ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ecd0_0x13ecd0");
#endif

    ctx->pc = 0x13ecd0u;

    // 0x13ecd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ecd4: 0x8fa41688  lw          $a0, 0x1688($sp)
    ctx->pc = 0x13ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ecd8: 0x448823  subu        $s1, $v0, $a0
    ctx->pc = 0x13ecd8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ecdc: 0x8fb01688  lw          $s0, 0x1688($sp)
    ctx->pc = 0x13ecdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ece0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x13ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13ece4: 0xafa41688  sw          $a0, 0x1688($sp)
    ctx->pc = 0x13ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5768), GPR_U32(ctx, 4));
    ctx->pc = 0x13ece8u;
}
