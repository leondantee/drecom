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

// Function: entry_00292598
// Address: 0x292598 - 0x2925bc
void entry_00292598_0x292598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292598_0x292598");
#endif

    ctx->pc = 0x292598u;

    // 0x292598: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x292598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x29259c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29259Cu;
    {
        const bool branch_taken_0x29259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29259c) {
            ctx->pc = 0x29257Cu;
            return;
        }
    }
    ctx->pc = 0x2925A4u;
    // 0x2925a4: 0x8e025dc0  lw          $v0, 0x5DC0($s0)
    ctx->pc = 0x2925a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x2925a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2925A8u;
    {
        const bool branch_taken_0x2925a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925a8) {
            ctx->pc = 0x2925BCu;
            return;
        }
    }
    ctx->pc = 0x2925B0u;
    // 0x2925b0: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x2925b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x2925b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2925B4u;
    {
        const bool branch_taken_0x2925b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2925b4) {
            ctx->pc = 0x2925C4u;
            return;
        }
    }
    ctx->pc = 0x2925BCu;
}
