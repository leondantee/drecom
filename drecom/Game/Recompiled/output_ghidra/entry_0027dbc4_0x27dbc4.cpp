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

// Function: entry_0027dbc4
// Address: 0x27dbc4 - 0x27dbfc
void entry_0027dbc4_0x27dbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027dbc4_0x27dbc4");
#endif

    switch (ctx->pc) {
        case 0x27dbe8u: goto label_27dbe8;
        case 0x27dbf4u: goto label_27dbf4;
        default: break;
    }

    ctx->pc = 0x27dbc4u;

    // 0x27dbc4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27dbc8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27dbcc: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x27dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x27dbd0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27dbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dbd4: 0x24045a00  addiu       $a0, $zero, 0x5A00
    ctx->pc = 0x27dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x27dbd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27dbd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dbdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27dbdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dbe0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DBE0u;
    SET_GPR_U32(ctx, 31, 0x27DBE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DBE0u, 0x27DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBE8u;
label_27dbe8:
    // 0x27dbe8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27dbe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27dbec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DBECu;
    SET_GPR_U32(ctx, 31, 0x27DBF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DBECu, 0x27DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBF4u;
label_27dbf4:
    // 0x27dbf4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27DBF4u;
    {
        const bool branch_taken_0x27dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dbf4) {
            ctx->pc = 0x27DCB8u;
            return;
        }
    }
    ctx->pc = 0x27DBFCu;
}
