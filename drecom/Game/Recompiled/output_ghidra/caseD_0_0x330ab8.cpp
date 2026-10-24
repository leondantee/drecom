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

// Function: caseD_0
// Address: 0x330ab8 - 0x330acc
void caseD_0_0x330ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x330ab8");
#endif

    ctx->pc = 0x330ab8u;

    // 0x330ab8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x330ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x330abc: 0x24c395c8  addiu       $v1, $a2, -0x6A38
    ctx->pc = 0x330abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940104));
    // 0x330ac0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x330ac0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x330ac4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x330AC4u;
    {
        const bool branch_taken_0x330ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330ac4) {
            ctx->pc = 0x330AD8u;
            return;
        }
    }
    ctx->pc = 0x330ACCu;
}
