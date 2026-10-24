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

// Function: caseD_4
// Address: 0x142f18 - 0x142f40
void caseD_4_0x142f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x142f18");
#endif

    ctx->pc = 0x142f18u;

    // 0x142f18: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x142f18u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x142f1c: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x142f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x142f20: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x142F20u;
    {
        const bool branch_taken_0x142f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142f20) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142F28u;
    // 0x142f28: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x142f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x142f2c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142f34: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142f34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142f38: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x142F38u;
    {
        const bool branch_taken_0x142f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f38) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142F40u;
}
