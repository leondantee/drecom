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

// Function: entry_00138c18
// Address: 0x138c18 - 0x138c48
void entry_00138c18_0x138c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c18_0x138c18");
#endif

    ctx->pc = 0x138c18u;

    // 0x138c18: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138c1c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x138c20: 0xa0600f30  sb          $zero, 0xF30($v1)
    ctx->pc = 0x138c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3888), (uint8_t)GPR_U32(ctx, 0));
    // 0x138c24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138c28: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x138c2c: 0xa0600ea0  sb          $zero, 0xEA0($v1)
    ctx->pc = 0x138c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3744), (uint8_t)GPR_U32(ctx, 0));
    // 0x138c30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138c34: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x138c38: 0xa0601170  sb          $zero, 0x1170($v1)
    ctx->pc = 0x138c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4464), (uint8_t)GPR_U32(ctx, 0));
    // 0x138c3c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138c3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138c40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138C40u;
    {
        const bool branch_taken_0x138c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c40) {
            ctx->pc = 0x138C70u;
            return;
        }
    }
    ctx->pc = 0x138C48u;
}
