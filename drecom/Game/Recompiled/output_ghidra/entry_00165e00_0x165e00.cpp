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

// Function: entry_00165e00
// Address: 0x165e00 - 0x165eb8
void entry_00165e00_0x165e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165e00_0x165e00");
#endif

    switch (ctx->pc) {
        case 0x165e1cu: goto label_165e1c;
        case 0x165e2cu: goto label_165e2c;
        case 0x165e34u: goto label_165e34;
        case 0x165e3cu: goto label_165e3c;
        case 0x165e44u: goto label_165e44;
        case 0x165e4cu: goto label_165e4c;
        case 0x165e54u: goto label_165e54;
        case 0x165e5cu: goto label_165e5c;
        case 0x165e64u: goto label_165e64;
        case 0x165e6cu: goto label_165e6c;
        case 0x165e74u: goto label_165e74;
        case 0x165e7cu: goto label_165e7c;
        case 0x165e90u: goto label_165e90;
        default: break;
    }

    ctx->pc = 0x165e00u;

label_165e00:
    // 0x165e00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165e04: 0x2444ebd0  addiu       $a0, $v0, -0x1430
    ctx->pc = 0x165e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
    // 0x165e08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165e08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165e0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165e10: 0x2446eb68  addiu       $a2, $v0, -0x1498
    ctx->pc = 0x165e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x165e14: 0xc085dde  jal         func_217778
    ctx->pc = 0x165E14u;
    SET_GPR_U32(ctx, 31, 0x165E1Cu);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x165E1Cu;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165E1Cu) { return; }
    ctx->pc = 0x165E1Cu;
label_165e1c:
    // 0x165e1c: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x165E1Cu;
    {
        const bool branch_taken_0x165e1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x165e1c) {
            ctx->pc = 0x165E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165e00;
        }
    }
    ctx->pc = 0x165E24u;
    // 0x165e24: 0xc0678c0  jal         func_19E300
    ctx->pc = 0x165E24u;
    SET_GPR_U32(ctx, 31, 0x165E2Cu);
    ctx->pc = 0x19E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E300u, 0x165E24u, 0x165E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E2Cu;
label_165e2c:
    // 0x165e2c: 0xc0762a8  jal         func_1D8AA0
    ctx->pc = 0x165E2Cu;
    SET_GPR_U32(ctx, 31, 0x165E34u);
    ctx->pc = 0x1D8AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8AA0u, 0x165E2Cu, 0x165E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E34u;
label_165e34:
    // 0x165e34: 0xc088214  jal         func_220850
    ctx->pc = 0x165E34u;
    SET_GPR_U32(ctx, 31, 0x165E3Cu);
    ctx->pc = 0x220850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220850u, 0x165E34u, 0x165E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E3Cu;
label_165e3c:
    // 0x165e3c: 0xc06811c  jal         func_1A0470
    ctx->pc = 0x165E3Cu;
    SET_GPR_U32(ctx, 31, 0x165E44u);
    ctx->pc = 0x1A0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0470u, 0x165E3Cu, 0x165E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E44u;
label_165e44:
    // 0x165e44: 0xc067530  jal         func_19D4C0
    ctx->pc = 0x165E44u;
    SET_GPR_U32(ctx, 31, 0x165E4Cu);
    ctx->pc = 0x19D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D4C0u, 0x165E44u, 0x165E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E4Cu;
label_165e4c:
    // 0x165e4c: 0xc059c14  jal         func_167050
    ctx->pc = 0x165E4Cu;
    SET_GPR_U32(ctx, 31, 0x165E54u);
    ctx->pc = 0x167050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167050u, 0x165E4Cu, 0x165E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E54u;
label_165e54:
    // 0x165e54: 0xc0a5818  jal         func_296060
    ctx->pc = 0x165E54u;
    SET_GPR_U32(ctx, 31, 0x165E5Cu);
    ctx->pc = 0x296060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296060u, 0x165E54u, 0x165E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E5Cu;
label_165e5c:
    // 0x165e5c: 0xc0597b0  jal         func_165EC0
    ctx->pc = 0x165E5Cu;
    SET_GPR_U32(ctx, 31, 0x165E64u);
    ctx->pc = 0x165EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EC0u, 0x165E5Cu, 0x165E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E64u;
label_165e64:
    // 0x165e64: 0xc05e9e0  jal         func_17A780
    ctx->pc = 0x165E64u;
    SET_GPR_U32(ctx, 31, 0x165E6Cu);
    ctx->pc = 0x17A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A780u, 0x165E64u, 0x165E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E6Cu;
label_165e6c:
    // 0x165e6c: 0xc0592fc  jal         func_164BF0
    ctx->pc = 0x165E6Cu;
    SET_GPR_U32(ctx, 31, 0x165E74u);
    ctx->pc = 0x164BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BF0u, 0x165E6Cu, 0x165E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E74u;
label_165e74:
    // 0x165e74: 0xc0ca394  jal         func_328E50
    ctx->pc = 0x165E74u;
    SET_GPR_U32(ctx, 31, 0x165E7Cu);
    ctx->pc = 0x328E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328E50u, 0x165E74u, 0x165E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E7Cu;
label_165e7c:
    // 0x165e7c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165e7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165e80: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x165e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x165e84: 0x24451770  addiu       $a1, $v0, 0x1770
    ctx->pc = 0x165e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x165e88: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x165E88u;
    SET_GPR_U32(ctx, 31, 0x165E90u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x165E88u, 0x165E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E90u;
label_165e90:
    // 0x165e90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x165e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165e94: 0x8c640a68  lw          $a0, 0xA68($v1)
    ctx->pc = 0x165e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2664)));
    // 0x165e98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x165e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165e9c: 0xac640a60  sw          $a0, 0xA60($v1)
    ctx->pc = 0x165e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2656), GPR_U32(ctx, 4));
    // 0x165ea0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x165ea0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165ea4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x165ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165ea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x165ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165eac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x165eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x165eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x165EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165EB8u;
}
