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

// Function: entry_001b3578
// Address: 0x1b3578 - 0x1b3598
void entry_001b3578_0x1b3578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3578_0x1b3578");
#endif

    ctx->pc = 0x1b3578u;

    // 0x1b3578: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b3578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b357c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b357cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1b3580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b3580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b3584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3584u;
    {
        const bool branch_taken_0x1b3584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3584) {
            ctx->pc = 0x1B3598u;
            return;
        }
    }
    ctx->pc = 0x1B358Cu;
    // 0x1b358c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b358cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3590: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1B3590u;
    {
        const bool branch_taken_0x1b3590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3590) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B3598u;
}
