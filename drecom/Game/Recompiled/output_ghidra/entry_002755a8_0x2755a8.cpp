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

// Function: entry_002755a8
// Address: 0x2755a8 - 0x2755c0
void entry_002755a8_0x2755a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002755a8_0x2755a8");
#endif

    ctx->pc = 0x2755a8u;

    // 0x2755a8: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x2755a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2755ac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2755ACu;
    {
        const bool branch_taken_0x2755ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2755ac) {
            ctx->pc = 0x275568u;
            return;
        }
    }
    ctx->pc = 0x2755B4u;
    // 0x2755b4: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2755b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2755b8: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2755b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2755bc: 0x0  nop
    ctx->pc = 0x2755bcu;
    // NOP
    ctx->pc = 0x2755c0u;
}
