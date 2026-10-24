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

// Function: entry_00275418
// Address: 0x275418 - 0x275430
void entry_00275418_0x275418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275418_0x275418");
#endif

    ctx->pc = 0x275418u;

    // 0x275418: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x275418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x27541c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x27541Cu;
    {
        const bool branch_taken_0x27541c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27541c) {
            ctx->pc = 0x275360u;
            return;
        }
    }
    ctx->pc = 0x275424u;
    // 0x275424: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x275424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x275428: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x275428u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x27542c: 0x0  nop
    ctx->pc = 0x27542cu;
    // NOP
    ctx->pc = 0x275430u;
}
