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

// Function: caseD_3
// Address: 0x27cb28 - 0x27cb8c
void caseD_3_0x27cb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x27cb28");
#endif

    switch (ctx->pc) {
        case 0x27cb54u: goto label_27cb54;
        case 0x27cb6cu: goto label_27cb6c;
        case 0x27cb84u: goto label_27cb84;
        default: break;
    }

    ctx->pc = 0x27cb28u;

    // 0x27cb28: 0x1600002e  bnez        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x27CB28u;
    {
        const bool branch_taken_0x27cb28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb28) {
            ctx->pc = 0x27CBE4u;
            return;
        }
    }
    ctx->pc = 0x27CB30u;
    // 0x27cb30: 0x16200016  bnez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x27CB30u;
    {
        const bool branch_taken_0x27cb30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb30) {
            ctx->pc = 0x27CB8Cu;
            return;
        }
    }
    ctx->pc = 0x27CB38u;
    // 0x27cb38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27cb38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cb3c: 0x2404040c  addiu       $a0, $zero, 0x40C
    ctx->pc = 0x27cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x27cb40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cb44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cb48: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cb4c: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CB4Cu;
    SET_GPR_U32(ctx, 31, 0x27CB54u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CB4Cu, 0x27CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB54u;
label_27cb54:
    // 0x27cb54: 0x2404040d  addiu       $a0, $zero, 0x40D
    ctx->pc = 0x27cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    // 0x27cb58: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cb5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cb60: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cb64: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CB64u;
    SET_GPR_U32(ctx, 31, 0x27CB6Cu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CB64u, 0x27CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB6Cu;
label_27cb6c:
    // 0x27cb6c: 0x2404040e  addiu       $a0, $zero, 0x40E
    ctx->pc = 0x27cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x27cb70: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cb74: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cb78: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cb7c: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CB7Cu;
    SET_GPR_U32(ctx, 31, 0x27CB84u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CB7Cu, 0x27CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB84u;
label_27cb84:
    // 0x27cb84: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27CB84u;
    {
        const bool branch_taken_0x27cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb84) {
            ctx->pc = 0x27CBD8u;
            return;
        }
    }
    ctx->pc = 0x27CB8Cu;
}
