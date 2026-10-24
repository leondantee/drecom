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

// Function: entry_002925c4
// Address: 0x2925c4 - 0x2925e4
void entry_002925c4_0x2925c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002925c4_0x2925c4");
#endif

    ctx->pc = 0x2925c4u;

    // 0x2925c4: 0x8e025dc0  lw          $v0, 0x5DC0($s0)
    ctx->pc = 0x2925c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x2925c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2925C8u;
    {
        const bool branch_taken_0x2925c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925c8) {
            ctx->pc = 0x292604u;
            return;
        }
    }
    ctx->pc = 0x2925D0u;
    // 0x2925d0: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x2925d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x2925d4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2925d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2925d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2925D8u;
    {
        const bool branch_taken_0x2925d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925d8) {
            ctx->pc = 0x2925E4u;
            return;
        }
    }
    ctx->pc = 0x2925E0u;
    // 0x2925e0: 0xa2006608  sb          $zero, 0x6608($s0)
    ctx->pc = 0x2925e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2925e4u;
}
