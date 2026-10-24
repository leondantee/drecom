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

// Function: entry_00294850
// Address: 0x294850 - 0x294864
void entry_00294850_0x294850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294850_0x294850");
#endif

    ctx->pc = 0x294850u;

    // 0x294850: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x294850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x294854: 0x24705c80  addiu       $s0, $v1, 0x5C80
    ctx->pc = 0x294854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23680));
    // 0x294858: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x294858u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29485c: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x29485Cu;
    {
        const bool branch_taken_0x29485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29485c) {
            ctx->pc = 0x294CF0u;
            return;
        }
    }
    ctx->pc = 0x294864u;
}
