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

// Function: entry_00213e8c
// Address: 0x213e8c - 0x213ea0
void entry_00213e8c_0x213e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213e8c_0x213e8c");
#endif

    ctx->pc = 0x213e8cu;

    // 0x213e8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x213e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213e90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213E90u;
    {
        const bool branch_taken_0x213e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213e90) {
            ctx->pc = 0x213EA8u;
            return;
        }
    }
    ctx->pc = 0x213E98u;
    // 0x213e98: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x213e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x213e9c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x213e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x213ea0u;
}
