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

// Function: caseD_1
// Address: 0x27caa0 - 0x27cad4
void caseD_1_0x27caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x27caa0");
#endif

    switch (ctx->pc) {
        case 0x27caccu: goto label_27cacc;
        default: break;
    }

    ctx->pc = 0x27caa0u;

    // 0x27caa0: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27CAA0u;
    {
        const bool branch_taken_0x27caa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27caa0) {
            ctx->pc = 0x27CAFCu;
            return;
        }
    }
    ctx->pc = 0x27CAA8u;
    // 0x27caa8: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x27CAA8u;
    {
        const bool branch_taken_0x27caa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27caa8) {
            ctx->pc = 0x27CAD4u;
            return;
        }
    }
    ctx->pc = 0x27CAB0u;
    // 0x27cab0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27cab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cab4: 0x24040417  addiu       $a0, $zero, 0x417
    ctx->pc = 0x27cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x27cab8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cabc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cac0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cac4: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CAC4u;
    SET_GPR_U32(ctx, 31, 0x27CACCu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CAC4u, 0x27CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CACCu;
label_27cacc:
    // 0x27cacc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27CACCu;
    {
        const bool branch_taken_0x27cacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cacc) {
            ctx->pc = 0x27CAF0u;
            return;
        }
    }
    ctx->pc = 0x27CAD4u;
}
