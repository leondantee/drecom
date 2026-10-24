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

// Function: entry_001fbb20
// Address: 0x1fbb20 - 0x1fbb38
void entry_001fbb20_0x1fbb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbb20_0x1fbb20");
#endif

    ctx->pc = 0x1fbb20u;

    // 0x1fbb20: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fbb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb24: 0x90a402a8  lbu         $a0, 0x2A8($a1)
    ctx->pc = 0x1fbb24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 680)));
    // 0x1fbb28: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fbb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fbb2c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1fbb2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fbb30: 0x1460fe36  bnez        $v1, . + 4 + (-0x1CA << 2)
    ctx->pc = 0x1FBB30u;
    {
        const bool branch_taken_0x1fbb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb30) {
            ctx->pc = 0x1FB40Cu;
            return;
        }
    }
    ctx->pc = 0x1FBB38u;
}
