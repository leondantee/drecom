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

// Function: entry_001d8b18
// Address: 0x1d8b18 - 0x1d8b44
void entry_001d8b18_0x1d8b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b18_0x1d8b18");
#endif

    ctx->pc = 0x1d8b18u;

label_1d8b18:
    // 0x1d8b18: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1d8b18u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8b1c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d8b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8b20: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1D8B20u;
    {
        const bool branch_taken_0x1d8b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b20) {
            ctx->pc = 0x1D8B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8b18;
        }
    }
    ctx->pc = 0x1D8B28u;
    // 0x1d8b28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8b2c: 0x8c22c3e4  lw          $v0, -0x3C1C($at)
    ctx->pc = 0x1d8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC3E4u));
    // 0x1d8b30: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D8B30u;
    {
        const bool branch_taken_0x1d8b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b30) {
            ctx->pc = 0x1D8AD0u;
            return;
        }
    }
    ctx->pc = 0x1D8B38u;
    // 0x1d8b38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8b3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d8b3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8b40: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x1d8b44u;
}
