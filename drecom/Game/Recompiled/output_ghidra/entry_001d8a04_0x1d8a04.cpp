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

// Function: entry_001d8a04
// Address: 0x1d8a04 - 0x1d8a30
void entry_001d8a04_0x1d8a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8a04_0x1d8a04");
#endif

    switch (ctx->pc) {
        case 0x1d8a1cu: goto label_1d8a1c;
        case 0x1d8a28u: goto label_1d8a28;
        default: break;
    }

    ctx->pc = 0x1d8a04u;

label_1d8a04:
    // 0x1d8a04: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x1d8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1d8a08: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d8a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d8a0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8A0Cu;
    {
        const bool branch_taken_0x1d8a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a0c) {
            ctx->pc = 0x1D8A30u;
            return;
        }
    }
    ctx->pc = 0x1D8A14u;
    // 0x1d8a14: 0xc0761f0  jal         func_1D87C0
    ctx->pc = 0x1D8A14u;
    SET_GPR_U32(ctx, 31, 0x1D8A1Cu);
    ctx->pc = 0x1D87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D87C0u, 0x1D8A14u, 0x1D8A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A1Cu;
label_1d8a1c:
    // 0x1d8a1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d8a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a20: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1D8A20u;
    SET_GPR_U32(ctx, 31, 0x1D8A28u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1D8A20u, 0x1D8A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A28u;
label_1d8a28:
    // 0x1d8a28: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1D8A28u;
    {
        const bool branch_taken_0x1d8a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a28) {
            ctx->pc = 0x1D8A04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a04;
        }
    }
    ctx->pc = 0x1D8A30u;
}
