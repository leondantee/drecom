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

// Function: entry_00273a60
// Address: 0x273a60 - 0x273a78
void entry_00273a60_0x273a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273a60_0x273a60");
#endif

    ctx->pc = 0x273a60u;

    // 0x273a60: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x273a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x273a64: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x273A64u;
    {
        const bool branch_taken_0x273a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273a64) {
            ctx->pc = 0x2739F0u;
            return;
        }
    }
    ctx->pc = 0x273A6Cu;
    // 0x273a6c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x273a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x273a70: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x273a70u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273a74: 0x0  nop
    ctx->pc = 0x273a74u;
    // NOP
    ctx->pc = 0x273a78u;
}
