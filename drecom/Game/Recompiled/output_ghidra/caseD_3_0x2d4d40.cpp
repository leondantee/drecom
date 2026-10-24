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
// Address: 0x2d4d40 - 0x2d4da0
void caseD_3_0x2d4d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2d4d40");
#endif

    switch (ctx->pc) {
        case 0x2d4d50u: goto label_2d4d50;
        case 0x2d4d5cu: goto label_2d4d5c;
        case 0x2d4d6cu: goto label_2d4d6c;
        case 0x2d4d78u: goto label_2d4d78;
        default: break;
    }

    ctx->pc = 0x2d4d40u;

    // 0x2d4d40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4d44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4d48: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D4D48u;
    SET_GPR_U32(ctx, 31, 0x2D4D50u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4D48u, 0x2D4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D50u;
label_2d4d50:
    // 0x2d4d50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d54: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4D54u;
    SET_GPR_U32(ctx, 31, 0x2D4D5Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4D54u, 0x2D4D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D5Cu;
label_2d4d5c:
    // 0x2d4d5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4d60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4d64: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4D64u;
    SET_GPR_U32(ctx, 31, 0x2D4D6Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4D64u, 0x2D4D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D6Cu;
label_2d4d6c:
    // 0x2d4d6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d70: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4D70u;
    SET_GPR_U32(ctx, 31, 0x2D4D78u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4D70u, 0x2D4D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D78u;
label_2d4d78:
    // 0x2d4d78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d7c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4d80: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D4D80u;
    {
        const bool branch_taken_0x2d4d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d80) {
            ctx->pc = 0x2D4E54u;
            return;
        }
    }
    ctx->pc = 0x2D4D88u;
    // 0x2d4d88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d8c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d4d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d4d90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d4d94: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d4d94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4d98: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2D4D98u;
    {
        const bool branch_taken_0x2d4d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d98) {
            ctx->pc = 0x2D4E54u;
            return;
        }
    }
    ctx->pc = 0x2D4DA0u;
}
