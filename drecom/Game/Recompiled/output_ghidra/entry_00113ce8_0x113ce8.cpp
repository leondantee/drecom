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

// Function: entry_00113ce8
// Address: 0x113ce8 - 0x113d04
void entry_00113ce8_0x113ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113ce8_0x113ce8");
#endif

    ctx->pc = 0x113ce8u;

label_113ce8:
    // 0x113ce8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x113ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113cec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x113cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x113cf0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x113cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x113cf4: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x113cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x113cf8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x113cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x113cfc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113CFCu;
    {
        const bool branch_taken_0x113cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113cfc) {
            ctx->pc = 0x113CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113ce8;
        }
    }
    ctx->pc = 0x113D04u;
}
