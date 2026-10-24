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

// Function: entry_00160834
// Address: 0x160834 - 0x160850
void entry_00160834_0x160834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160834_0x160834");
#endif

    ctx->pc = 0x160834u;

    // 0x160834: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x160834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x160838: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x160838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x16083c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16083Cu;
    {
        const bool branch_taken_0x16083c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16083c) {
            ctx->pc = 0x160850u;
            return;
        }
    }
    ctx->pc = 0x160844u;
    // 0x160844: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160844u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160848: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x160848u;
    {
        const bool branch_taken_0x160848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160848) {
            ctx->pc = 0x1608B0u;
            return;
        }
    }
    ctx->pc = 0x160850u;
}
