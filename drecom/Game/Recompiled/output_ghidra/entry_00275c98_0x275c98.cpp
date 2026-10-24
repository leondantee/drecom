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

// Function: entry_00275c98
// Address: 0x275c98 - 0x275cb0
void entry_00275c98_0x275c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275c98_0x275c98");
#endif

    ctx->pc = 0x275c98u;

    // 0x275c98: 0x21e182a  slt         $v1, $s0, $fp
    ctx->pc = 0x275c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x275c9c: 0x1460fe62  bnez        $v1, . + 4 + (-0x19E << 2)
    ctx->pc = 0x275C9Cu;
    {
        const bool branch_taken_0x275c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275c9c) {
            ctx->pc = 0x275628u;
            return;
        }
    }
    ctx->pc = 0x275CA4u;
    // 0x275ca4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x275ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x275ca8: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x275ca8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275cac: 0x0  nop
    ctx->pc = 0x275cacu;
    // NOP
    ctx->pc = 0x275cb0u;
}
