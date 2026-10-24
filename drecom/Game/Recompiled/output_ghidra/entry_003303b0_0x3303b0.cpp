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

// Function: entry_003303b0
// Address: 0x3303b0 - 0x3303c8
void entry_003303b0_0x3303b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003303b0_0x3303b0");
#endif

    ctx->pc = 0x3303b0u;

    // 0x3303b0: 0x2a460004  slti        $a2, $s2, 0x4
    ctx->pc = 0x3303b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3303b4: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x3303B4u;
    {
        const bool branch_taken_0x3303b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3303b4) {
            ctx->pc = 0x33037Cu;
            return;
        }
    }
    ctx->pc = 0x3303BCu;
    // 0x3303bc: 0x26e70001  addiu       $a3, $s7, 0x1
    ctx->pc = 0x3303bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3303c0: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x3303c0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x3303c4: 0x0  nop
    ctx->pc = 0x3303c4u;
    // NOP
    ctx->pc = 0x3303c8u;
}
