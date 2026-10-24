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

// Function: entry_00306c38
// Address: 0x306c38 - 0x306c98
void entry_00306c38_0x306c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306c38_0x306c38");
#endif

    switch (ctx->pc) {
        case 0x306c48u: goto label_306c48;
        case 0x306c54u: goto label_306c54;
        case 0x306c64u: goto label_306c64;
        case 0x306c70u: goto label_306c70;
        default: break;
    }

    ctx->pc = 0x306c38u;

    // 0x306c38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306c3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306c40: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306C40u;
    SET_GPR_U32(ctx, 31, 0x306C48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306C40u, 0x306C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C48u;
label_306c48:
    // 0x306c48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c4c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306C4Cu;
    SET_GPR_U32(ctx, 31, 0x306C54u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306C4Cu, 0x306C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C54u;
label_306c54:
    // 0x306c54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306c58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306c5c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306C5Cu;
    SET_GPR_U32(ctx, 31, 0x306C64u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306C5Cu, 0x306C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C64u;
label_306c64:
    // 0x306c64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c68: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306C68u;
    SET_GPR_U32(ctx, 31, 0x306C70u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306C68u, 0x306C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C70u;
label_306c70:
    // 0x306c70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c74: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306c78: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x306C78u;
    {
        const bool branch_taken_0x306c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c78) {
            ctx->pc = 0x306D60u;
            return;
        }
    }
    ctx->pc = 0x306C80u;
    // 0x306c80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c84: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x306c84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x306c88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306c8c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x306c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x306c90: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x306C90u;
    {
        const bool branch_taken_0x306c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c90) {
            ctx->pc = 0x306D60u;
            return;
        }
    }
    ctx->pc = 0x306C98u;
}
