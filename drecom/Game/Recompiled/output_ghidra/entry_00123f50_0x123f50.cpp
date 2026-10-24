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

// Function: entry_00123f50
// Address: 0x123f50 - 0x123f78
void entry_00123f50_0x123f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123f50_0x123f50");
#endif

    ctx->pc = 0x123f50u;

    // 0x123f50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x123f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123f54: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123f58: 0x1098c0  sll         $s3, $s0, 3
    ctx->pc = 0x123f58u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x123f5c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x123f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x123f60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x123f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x123f64: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x123f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x123f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x123f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123f6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x123f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x123f70: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x123f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x123f74: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x123f74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x123f78u;
}
