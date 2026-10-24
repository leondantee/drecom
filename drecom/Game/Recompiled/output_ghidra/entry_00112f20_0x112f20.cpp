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

// Function: entry_00112f20
// Address: 0x112f20 - 0x112f40
void entry_00112f20_0x112f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112f20_0x112f20");
#endif

    ctx->pc = 0x112f20u;

label_112f20:
    // 0x112f20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x112f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112f24: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x112f24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x112f28: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x112f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112f2c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x112f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x112f30: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x112f30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x112f34: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x112f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x112f38: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x112F38u;
    {
        const bool branch_taken_0x112f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112f38) {
            ctx->pc = 0x112F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112f20;
        }
    }
    ctx->pc = 0x112F40u;
}
