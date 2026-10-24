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

// Function: entry_001b1ac0
// Address: 0x1b1ac0 - 0x1b1ae8
void entry_001b1ac0_0x1b1ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1ac0_0x1b1ac0");
#endif

    ctx->pc = 0x1b1ac0u;

    // 0x1b1ac0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1b1ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1b1ac4: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B1AC4u;
    {
        const bool branch_taken_0x1b1ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ac4) {
            ctx->pc = 0x1B1A5Cu;
            return;
        }
    }
    ctx->pc = 0x1B1ACCu;
    // 0x1b1acc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b1accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b1ad0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b1ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b1ad4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1AD4u;
    {
        const bool branch_taken_0x1b1ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ad4) {
            ctx->pc = 0x1B1AE8u;
            return;
        }
    }
    ctx->pc = 0x1B1ADCu;
    // 0x1b1adc: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1b1adcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b1ae0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1B1AE0u;
    {
        const bool branch_taken_0x1b1ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ae0) {
            ctx->pc = 0x1B1B7Cu;
            return;
        }
    }
    ctx->pc = 0x1B1AE8u;
}
