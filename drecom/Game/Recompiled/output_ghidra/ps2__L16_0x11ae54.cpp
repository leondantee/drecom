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

// Function: $L16
// Address: 0x11ae54 - 0x11ae74
void ps2__L16_0x11ae54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L16_0x11ae54");
#endif

    ctx->pc = 0x11ae54u;

label_11ae54:
    // 0x11ae54: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x11ae54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ae58: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x11ae58u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x11ae5c: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x11ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x11ae60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11ae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11ae64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x11ae68: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11AE68u;
    {
        const bool branch_taken_0x11ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ae68) {
            ctx->pc = 0x11AE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AE68u;
            // 0x11ae6c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AE54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ae54;
        }
    }
    ctx->pc = 0x11AE70u;
    // 0x11ae70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11ae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11ae74u;
}
