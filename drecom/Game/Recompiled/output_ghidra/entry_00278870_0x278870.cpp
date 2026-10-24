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

// Function: entry_00278870
// Address: 0x278870 - 0x2788a0
void entry_00278870_0x278870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278870_0x278870");
#endif

    switch (ctx->pc) {
        case 0x27889cu: goto label_27889c;
        default: break;
    }

    ctx->pc = 0x278870u;

    // 0x278870: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278874: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278878: 0x2442e1c0  addiu       $v0, $v0, -0x1E40
    ctx->pc = 0x278878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959552));
    // 0x27887c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x27887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278880: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278884: 0x2442e260  addiu       $v0, $v0, -0x1DA0
    ctx->pc = 0x278884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959712));
    // 0x278888: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27888c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27888cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278890: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x278890u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278894: 0xc0c7a48  jal         func_31E920
    ctx->pc = 0x278894u;
    SET_GPR_U32(ctx, 31, 0x27889Cu);
    ctx->pc = 0x31E920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E920u, 0x278894u, 0x27889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27889Cu;
label_27889c:
    // 0x27889c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27889cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2788a0u;
}
