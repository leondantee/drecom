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

// Function: entry_00263e70
// Address: 0x263e70 - 0x263e8c
void entry_00263e70_0x263e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263e70_0x263e70");
#endif

    ctx->pc = 0x263e70u;

    // 0x263e70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x263e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x263e74: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x263e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
    // 0x263e78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x263e78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x263e7c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x263e7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263e80: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x263E80u;
    {
        const bool branch_taken_0x263e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263e80) {
            ctx->pc = 0x263D48u;
            return;
        }
    }
    ctx->pc = 0x263E88u;
    // 0x263e88: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x263e88u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x263e8cu;
}
