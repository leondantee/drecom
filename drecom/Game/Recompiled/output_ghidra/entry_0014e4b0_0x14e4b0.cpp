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

// Function: entry_0014e4b0
// Address: 0x14e4b0 - 0x14e4c4
void entry_0014e4b0_0x14e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e4b0_0x14e4b0");
#endif

    ctx->pc = 0x14e4b0u;

    // 0x14e4b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e4b4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e4b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14e4bc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14E4BCu;
    {
        const bool branch_taken_0x14e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4bc) {
            ctx->pc = 0x14E530u;
            return;
        }
    }
    ctx->pc = 0x14E4C4u;
}
