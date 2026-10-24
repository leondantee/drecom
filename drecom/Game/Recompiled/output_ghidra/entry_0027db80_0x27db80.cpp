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

// Function: entry_0027db80
// Address: 0x27db80 - 0x27dbc4
void entry_0027db80_0x27db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027db80_0x27db80");
#endif

    switch (ctx->pc) {
        case 0x27dba4u: goto label_27dba4;
        case 0x27dbb0u: goto label_27dbb0;
        default: break;
    }

    ctx->pc = 0x27db80u;

    // 0x27db80: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27db80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27db84: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27db84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27db88: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x27db88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x27db8c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27db8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27db90: 0x24045700  addiu       $a0, $zero, 0x5700
    ctx->pc = 0x27db90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22272));
    // 0x27db94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27db94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db98: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27db98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DB9Cu;
    SET_GPR_U32(ctx, 31, 0x27DBA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DB9Cu, 0x27DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBA4u;
label_27dba4:
    // 0x27dba4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27dba4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27dba8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DBA8u;
    SET_GPR_U32(ctx, 31, 0x27DBB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DBA8u, 0x27DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBB0u;
label_27dbb0:
    // 0x27dbb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dbb4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DBB4u;
    {
        const bool branch_taken_0x27dbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27dbb4) {
            ctx->pc = 0x27DBC4u;
            return;
        }
    }
    ctx->pc = 0x27DBBCu;
    // 0x27dbbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27DBBCu;
    {
        const bool branch_taken_0x27dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dbbc) {
            ctx->pc = 0x27DBFCu;
            return;
        }
    }
    ctx->pc = 0x27DBC4u;
}
