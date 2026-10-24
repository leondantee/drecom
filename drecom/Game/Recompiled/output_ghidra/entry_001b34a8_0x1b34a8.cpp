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

// Function: entry_001b34a8
// Address: 0x1b34a8 - 0x1b34c0
void entry_001b34a8_0x1b34a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b34a8_0x1b34a8");
#endif

    ctx->pc = 0x1b34a8u;

    // 0x1b34a8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b34ac: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b34acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1b34b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b34b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b34b4: 0x1440fe82  bnez        $v0, . + 4 + (-0x17E << 2)
    ctx->pc = 0x1B34B4u;
    {
        const bool branch_taken_0x1b34b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b34b4) {
            ctx->pc = 0x1B2EC0u;
            return;
        }
    }
    ctx->pc = 0x1B34BCu;
    // 0x1b34bc: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x1b34bcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b34c0u;
}
