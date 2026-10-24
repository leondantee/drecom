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

// Function: entry_00141e20
// Address: 0x141e20 - 0x141e40
void entry_00141e20_0x141e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e20_0x141e20");
#endif

    ctx->pc = 0x141e20u;

label_141e20:
    // 0x141e20: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x141e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141e24: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x141e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x141e28: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x141e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x141e2c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x141e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x141e30: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x141e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x141e34: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141E34u;
    {
        const bool branch_taken_0x141e34 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x141e34) {
            ctx->pc = 0x141E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141e20;
        }
    }
    ctx->pc = 0x141E3Cu;
    // 0x141e3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x141e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x141e40u;
}
