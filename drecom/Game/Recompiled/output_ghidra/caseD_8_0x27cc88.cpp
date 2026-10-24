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

// Function: caseD_8
// Address: 0x27cc88 - 0x27ccbc
void caseD_8_0x27cc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x27cc88");
#endif

    switch (ctx->pc) {
        case 0x27ccb4u: goto label_27ccb4;
        default: break;
    }

    ctx->pc = 0x27cc88u;

    // 0x27cc88: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27CC88u;
    {
        const bool branch_taken_0x27cc88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cc88) {
            ctx->pc = 0x27CCE4u;
            return;
        }
    }
    ctx->pc = 0x27CC90u;
    // 0x27cc90: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x27CC90u;
    {
        const bool branch_taken_0x27cc90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cc90) {
            ctx->pc = 0x27CCBCu;
            return;
        }
    }
    ctx->pc = 0x27CC98u;
    // 0x27cc98: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27cc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cc9c: 0x24040417  addiu       $a0, $zero, 0x417
    ctx->pc = 0x27cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x27cca0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cca4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cca8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ccac: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CCACu;
    SET_GPR_U32(ctx, 31, 0x27CCB4u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CCACu, 0x27CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCB4u;
label_27ccb4:
    // 0x27ccb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27CCB4u;
    {
        const bool branch_taken_0x27ccb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ccb4) {
            ctx->pc = 0x27CCD8u;
            return;
        }
    }
    ctx->pc = 0x27CCBCu;
}
