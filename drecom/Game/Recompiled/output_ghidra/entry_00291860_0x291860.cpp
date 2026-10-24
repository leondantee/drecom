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

// Function: entry_00291860
// Address: 0x291860 - 0x291878
void entry_00291860_0x291860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291860_0x291860");
#endif

    ctx->pc = 0x291860u;

    // 0x291860: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x291860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x291864: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x291864u;
    {
        const bool branch_taken_0x291864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291864) {
            ctx->pc = 0x291830u;
            return;
        }
    }
    ctx->pc = 0x29186Cu;
    // 0x29186c: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x29186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x291870: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x291870u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291874: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x291874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x291878u;
}
