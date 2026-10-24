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

// Function: entry_00271d60
// Address: 0x271d60 - 0x271d90
void entry_00271d60_0x271d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271d60_0x271d60");
#endif

    switch (ctx->pc) {
        case 0x271d8cu: goto label_271d8c;
        default: break;
    }

    ctx->pc = 0x271d60u;

    // 0x271d60: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x271d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x271d64: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271d68: 0x2442cb60  addiu       $v0, $v0, -0x34A0
    ctx->pc = 0x271d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953824));
    // 0x271d6c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x271d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271d70: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271d74: 0x2442cb80  addiu       $v0, $v0, -0x3480
    ctx->pc = 0x271d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953856));
    // 0x271d78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x271d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x271d7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271d7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271d80: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x271d80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271d84: 0xc0c7a48  jal         func_31E920
    ctx->pc = 0x271D84u;
    SET_GPR_U32(ctx, 31, 0x271D8Cu);
    ctx->pc = 0x31E920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E920u, 0x271D84u, 0x271D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D8Cu;
label_271d8c:
    // 0x271d8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x271d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x271d90u;
}
