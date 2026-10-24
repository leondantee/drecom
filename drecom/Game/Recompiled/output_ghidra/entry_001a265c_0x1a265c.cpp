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

// Function: entry_001a265c
// Address: 0x1a265c - 0x1a2698
void entry_001a265c_0x1a265c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a265c_0x1a265c");
#endif

    switch (ctx->pc) {
        case 0x1a2690u: goto label_1a2690;
        default: break;
    }

    ctx->pc = 0x1a265cu;

    // 0x1a265c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a2660: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2664: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a2664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a2668: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a266c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1a266cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2670: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2674: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1a2674u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2678: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a267c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1a267cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2680: 0x3c0403ff  lui         $a0, 0x3FF
    ctx->pc = 0x1a2680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1023 << 16));
    // 0x1a2684: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x1a2684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x1a2688: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1A2688u;
    SET_GPR_U32(ctx, 31, 0x1A2690u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1A2688u, 0x1A2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2690u;
label_1a2690:
    // 0x1a2690: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1A2690u;
    {
        const bool branch_taken_0x1a2690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2690) {
            ctx->pc = 0x1A2864u;
            return;
        }
    }
    ctx->pc = 0x1A2698u;
}
