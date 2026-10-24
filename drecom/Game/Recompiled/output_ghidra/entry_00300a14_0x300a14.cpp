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

// Function: entry_00300a14
// Address: 0x300a14 - 0x300ab4
void entry_00300a14_0x300a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300a14_0x300a14");
#endif

    switch (ctx->pc) {
        case 0x300a44u: goto label_300a44;
        case 0x300a60u: goto label_300a60;
        case 0x300a7cu: goto label_300a7c;
        case 0x300a98u: goto label_300a98;
        default: break;
    }

    ctx->pc = 0x300a14u;

    // 0x300a14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a18: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x300a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x300a1c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x300a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x300a20: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x300A20u;
    {
        const bool branch_taken_0x300a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300a20) {
            ctx->pc = 0x300AB4u;
            return;
        }
    }
    ctx->pc = 0x300A28u;
    // 0x300a28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a2c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300a30: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x300a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x300a34: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a38: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300a3c: 0xc079140  jal         func_1E4500
    ctx->pc = 0x300A3Cu;
    SET_GPR_U32(ctx, 31, 0x300A44u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A3Cu, 0x300A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A44u;
label_300a44:
    // 0x300a44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a48: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300a4c: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x300a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x300a50: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a54: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300a58: 0xc079140  jal         func_1E4500
    ctx->pc = 0x300A58u;
    SET_GPR_U32(ctx, 31, 0x300A60u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A58u, 0x300A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A60u;
label_300a60:
    // 0x300a60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a64: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300a68: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x300a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x300a6c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a70: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300a70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300a74: 0xc079140  jal         func_1E4500
    ctx->pc = 0x300A74u;
    SET_GPR_U32(ctx, 31, 0x300A7Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A74u, 0x300A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A7Cu;
label_300a7c:
    // 0x300a7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a80: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300a84: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x300a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x300a88: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a8c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300a8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300a90: 0xc079140  jal         func_1E4500
    ctx->pc = 0x300A90u;
    SET_GPR_U32(ctx, 31, 0x300A98u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A90u, 0x300A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A98u;
label_300a98:
    // 0x300a98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a9c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300aa0: 0x24500750  addiu       $s0, $v0, 0x750
    ctx->pc = 0x300aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x300aa4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300aa8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300aa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300aac: 0xc079140  jal         func_1E4500
    ctx->pc = 0x300AACu;
    SET_GPR_U32(ctx, 31, 0x300AB4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300AACu, 0x300AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AB4u;
}
