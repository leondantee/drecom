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

// Function: entry_00117a50
// Address: 0x117a50 - 0x117a6c
void entry_00117a50_0x117a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a50_0x117a50");
#endif

    ctx->pc = 0x117a50u;

label_117a50:
    // 0x117a50: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x117a50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x117a54: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x117a54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x117a58: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x117a58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x117a5c: 0x0  nop
    ctx->pc = 0x117a5cu;
    // NOP
    // 0x117a60: 0x0  nop
    ctx->pc = 0x117a60u;
    // NOP
    // 0x117a64: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117A64u;
    {
        const bool branch_taken_0x117a64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x117a64) {
            ctx->pc = 0x117A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117a50;
        }
    }
    ctx->pc = 0x117A6Cu;
}
