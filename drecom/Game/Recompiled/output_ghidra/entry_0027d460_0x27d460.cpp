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

// Function: entry_0027d460
// Address: 0x27d460 - 0x27d480
void entry_0027d460_0x27d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d460_0x27d460");
#endif

    switch (ctx->pc) {
        case 0x27d478u: goto label_27d478;
        default: break;
    }

    ctx->pc = 0x27d460u;

    // 0x27d460: 0x1200ffcc  beqz        $s0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x27D460u;
    {
        const bool branch_taken_0x27d460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d460) {
            ctx->pc = 0x27D394u;
            return;
        }
    }
    ctx->pc = 0x27D468u;
    // 0x27d468: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27d468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27d46c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d470: 0xc084964  jal         func_212590
    ctx->pc = 0x27D470u;
    SET_GPR_U32(ctx, 31, 0x27D478u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27D470u, 0x27D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D478u;
label_27d478:
    // 0x27d478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27d47c: 0x0  nop
    ctx->pc = 0x27d47cu;
    // NOP
    ctx->pc = 0x27d480u;
}
