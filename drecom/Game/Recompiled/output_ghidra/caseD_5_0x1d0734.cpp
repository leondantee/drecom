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

// Function: caseD_5
// Address: 0x1d0734 - 0x1d0754
void caseD_5_0x1d0734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1d0734");
#endif

    ctx->pc = 0x1d0734u;

    // 0x1d0734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0738: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1d0738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1d073c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0740: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d0740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1d0744: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0744u;
    {
        const bool branch_taken_0x1d0744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0744) {
            ctx->pc = 0x1D0754u;
            return;
        }
    }
    ctx->pc = 0x1D074Cu;
    // 0x1d074c: 0xc0d7c50  jal         func_35F140
    ctx->pc = 0x1D074Cu;
    SET_GPR_U32(ctx, 31, 0x1D0754u);
    ctx->pc = 0x35F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F140u, 0x1D074Cu, 0x1D0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0754u;
}
