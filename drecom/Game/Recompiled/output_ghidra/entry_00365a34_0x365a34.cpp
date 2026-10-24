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

// Function: entry_00365a34
// Address: 0x365a34 - 0x365a94
void entry_00365a34_0x365a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365a34_0x365a34");
#endif

    switch (ctx->pc) {
        case 0x365a44u: goto label_365a44;
        case 0x365a50u: goto label_365a50;
        case 0x365a60u: goto label_365a60;
        case 0x365a6cu: goto label_365a6c;
        default: break;
    }

    ctx->pc = 0x365a34u;

    // 0x365a34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365a3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365A3Cu;
    SET_GPR_U32(ctx, 31, 0x365A44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365A3Cu, 0x365A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A44u;
label_365a44:
    // 0x365a44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365A48u;
    SET_GPR_U32(ctx, 31, 0x365A50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365A48u, 0x365A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A50u;
label_365a50:
    // 0x365a50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365a58: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365A58u;
    SET_GPR_U32(ctx, 31, 0x365A60u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365A58u, 0x365A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A60u;
label_365a60:
    // 0x365a60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a64: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365A64u;
    SET_GPR_U32(ctx, 31, 0x365A6Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365A64u, 0x365A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A6Cu;
label_365a6c:
    // 0x365a6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365a74: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x365A74u;
    {
        const bool branch_taken_0x365a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365a74) {
            ctx->pc = 0x365B3Cu;
            return;
        }
    }
    ctx->pc = 0x365A7Cu;
    // 0x365a7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x365a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x365a84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x365a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x365a88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x365a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x365a8c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x365A8Cu;
    {
        const bool branch_taken_0x365a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365a8c) {
            ctx->pc = 0x365B3Cu;
            return;
        }
    }
    ctx->pc = 0x365A94u;
}
