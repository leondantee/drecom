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

// Function: caseD_c
// Address: 0x27cdf0 - 0x27ce40
void caseD_c_0x27cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x27cdf0");
#endif

    switch (ctx->pc) {
        case 0x27ce08u: goto label_27ce08;
        case 0x27ce20u: goto label_27ce20;
        case 0x27ce38u: goto label_27ce38;
        default: break;
    }

    ctx->pc = 0x27cdf0u;

    // 0x27cdf0: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x27cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x27cdf4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cdf8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cdfc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ce00: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CE00u;
    SET_GPR_U32(ctx, 31, 0x27CE08u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CE00u, 0x27CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE08u;
label_27ce08:
    // 0x27ce08: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x27ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x27ce0c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27ce10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27ce10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ce14: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27ce14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ce18: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CE18u;
    SET_GPR_U32(ctx, 31, 0x27CE20u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CE18u, 0x27CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE20u;
label_27ce20:
    // 0x27ce20: 0x24040414  addiu       $a0, $zero, 0x414
    ctx->pc = 0x27ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x27ce24: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27ce28: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ce2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27ce2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ce30: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CE30u;
    SET_GPR_U32(ctx, 31, 0x27CE38u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CE30u, 0x27CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE38u;
label_27ce38:
    // 0x27ce38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27CE38u;
    {
        const bool branch_taken_0x27ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ce38) {
            ctx->pc = 0x27CE54u;
            return;
        }
    }
    ctx->pc = 0x27CE40u;
}
