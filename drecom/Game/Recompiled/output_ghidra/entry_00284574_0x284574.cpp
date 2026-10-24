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

// Function: entry_00284574
// Address: 0x284574 - 0x284598
void entry_00284574_0x284574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284574_0x284574");
#endif

    ctx->pc = 0x284574u;

    // 0x284574: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x284574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x284578: 0x8c2495ac  lw          $a0, -0x6A54($at)
    ctx->pc = 0x284578u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6195ACu));
    // 0x28457c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284580: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x284580u;
    {
        const bool branch_taken_0x284580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x284580) {
            ctx->pc = 0x2845F0u;
            return;
        }
    }
    ctx->pc = 0x284588u;
    // 0x284588: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284588u;
    {
        const bool branch_taken_0x284588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x284588) {
            ctx->pc = 0x284598u;
            return;
        }
    }
    ctx->pc = 0x284590u;
    // 0x284590: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x284590u;
    {
        const bool branch_taken_0x284590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284590) {
            ctx->pc = 0x2846D8u;
            return;
        }
    }
    ctx->pc = 0x284598u;
}
