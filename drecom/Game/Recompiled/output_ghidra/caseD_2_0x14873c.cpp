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

// Function: caseD_2
// Address: 0x14873c - 0x148774
void caseD_2_0x14873c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14873c");
#endif

    switch (ctx->pc) {
        case 0x14876cu: goto label_14876c;
        default: break;
    }

    ctx->pc = 0x14873cu;

    // 0x14873c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148740: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x148740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x148744: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x148744u;
    {
        const bool branch_taken_0x148744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148744) {
            ctx->pc = 0x148774u;
            return;
        }
    }
    ctx->pc = 0x14874Cu;
    // 0x14874c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148750: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148754: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148758: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x148758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14875c: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x14875cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x148760: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148764: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148764u;
    SET_GPR_U32(ctx, 31, 0x14876Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148764u, 0x14876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14876Cu;
label_14876c:
    // 0x14876c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14876Cu;
    {
        const bool branch_taken_0x14876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14876c) {
            ctx->pc = 0x148794u;
            return;
        }
    }
    ctx->pc = 0x148774u;
}
