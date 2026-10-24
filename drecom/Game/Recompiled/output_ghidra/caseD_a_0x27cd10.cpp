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

// Function: caseD_a
// Address: 0x27cd10 - 0x27cd74
void caseD_a_0x27cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x27cd10");
#endif

    switch (ctx->pc) {
        case 0x27cd3cu: goto label_27cd3c;
        case 0x27cd54u: goto label_27cd54;
        case 0x27cd6cu: goto label_27cd6c;
        default: break;
    }

    ctx->pc = 0x27cd10u;

    // 0x27cd10: 0x1600002e  bnez        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x27CD10u;
    {
        const bool branch_taken_0x27cd10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cd10) {
            ctx->pc = 0x27CDCCu;
            return;
        }
    }
    ctx->pc = 0x27CD18u;
    // 0x27cd18: 0x16200016  bnez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x27CD18u;
    {
        const bool branch_taken_0x27cd18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cd18) {
            ctx->pc = 0x27CD74u;
            return;
        }
    }
    ctx->pc = 0x27CD20u;
    // 0x27cd20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27cd20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cd24: 0x2404040c  addiu       $a0, $zero, 0x40C
    ctx->pc = 0x27cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x27cd28: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cd2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd30: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd34: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CD34u;
    SET_GPR_U32(ctx, 31, 0x27CD3Cu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD34u, 0x27CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD3Cu;
label_27cd3c:
    // 0x27cd3c: 0x2404040d  addiu       $a0, $zero, 0x40D
    ctx->pc = 0x27cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    // 0x27cd40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cd44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd48: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd4c: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CD4Cu;
    SET_GPR_U32(ctx, 31, 0x27CD54u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD4Cu, 0x27CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD54u;
label_27cd54:
    // 0x27cd54: 0x2404040e  addiu       $a0, $zero, 0x40E
    ctx->pc = 0x27cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x27cd58: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cd5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd60: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd64: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CD64u;
    SET_GPR_U32(ctx, 31, 0x27CD6Cu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD64u, 0x27CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD6Cu;
label_27cd6c:
    // 0x27cd6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27CD6Cu;
    {
        const bool branch_taken_0x27cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd6c) {
            ctx->pc = 0x27CDC0u;
            return;
        }
    }
    ctx->pc = 0x27CD74u;
}
