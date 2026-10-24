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

// Function: entry_00155754
// Address: 0x155754 - 0x155774
void entry_00155754_0x155754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155754_0x155754");
#endif

    ctx->pc = 0x155754u;

    // 0x155754: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x155754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x155758: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15575c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x155760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155760u;
    {
        const bool branch_taken_0x155760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155760) {
            ctx->pc = 0x155774u;
            return;
        }
    }
    ctx->pc = 0x155768u;
    // 0x155768: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155768u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15576c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15576Cu;
    {
        const bool branch_taken_0x15576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15576c) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x155774u;
}
