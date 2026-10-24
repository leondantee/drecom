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

// Function: SndInit
// Address: 0x19e300 - 0x19e438
void SndInit_0x19e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndInit_0x19e300");
#endif

    switch (ctx->pc) {
        case 0x19e308u: goto label_19e308;
        case 0x19e320u: goto label_19e320;
        case 0x19e328u: goto label_19e328;
        case 0x19e340u: goto label_19e340;
        case 0x19e348u: goto label_19e348;
        case 0x19e360u: goto label_19e360;
        case 0x19e368u: goto label_19e368;
        case 0x19e380u: goto label_19e380;
        case 0x19e388u: goto label_19e388;
        case 0x19e3a0u: goto label_19e3a0;
        case 0x19e3b0u: goto label_19e3b0;
        case 0x19e3c0u: goto label_19e3c0;
        case 0x19e3ccu: goto label_19e3cc;
        case 0x19e3d8u: goto label_19e3d8;
        case 0x19e3e4u: goto label_19e3e4;
        case 0x19e404u: goto label_19e404;
        case 0x19e414u: goto label_19e414;
        case 0x19e420u: goto label_19e420;
        case 0x19e428u: goto label_19e428;
        default: break;
    }

    ctx->pc = 0x19e300u;

    // 0x19e300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e304: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_19e308:
    // 0x19e308: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x19e308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x19e30c: 0x2444ee30  addiu       $a0, $v0, -0x11D0
    ctx->pc = 0x19e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962736));
    // 0x19e310: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19e310u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e314: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19e314u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e318: 0xc085dde  jal         func_217778
    ctx->pc = 0x19E318u;
    SET_GPR_U32(ctx, 31, 0x19E320u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x19E320u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19E320u) { return; }
    ctx->pc = 0x19E320u;
label_19e320:
    // 0x19e320: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19E320u;
    {
        const bool branch_taken_0x19e320 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19e320) {
            ctx->pc = 0x19E308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e308;
        }
    }
    ctx->pc = 0x19E328u;
label_19e328:
    // 0x19e328: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x19e328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x19e32c: 0x2444ee60  addiu       $a0, $v0, -0x11A0
    ctx->pc = 0x19e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962784));
    // 0x19e330: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19e330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e334: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19e334u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e338: 0xc085dde  jal         func_217778
    ctx->pc = 0x19E338u;
    SET_GPR_U32(ctx, 31, 0x19E340u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x19E340u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19E340u) { return; }
    ctx->pc = 0x19E340u;
label_19e340:
    // 0x19e340: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19E340u;
    {
        const bool branch_taken_0x19e340 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19e340) {
            ctx->pc = 0x19E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e328;
        }
    }
    ctx->pc = 0x19E348u;
label_19e348:
    // 0x19e348: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x19e348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x19e34c: 0x2444ee90  addiu       $a0, $v0, -0x1170
    ctx->pc = 0x19e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962832));
    // 0x19e350: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19e350u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e354: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19e354u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e358: 0xc085dde  jal         func_217778
    ctx->pc = 0x19E358u;
    SET_GPR_U32(ctx, 31, 0x19E360u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x19E360u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19E360u) { return; }
    ctx->pc = 0x19E360u;
label_19e360:
    // 0x19e360: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19E360u;
    {
        const bool branch_taken_0x19e360 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19e360) {
            ctx->pc = 0x19E348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e348;
        }
    }
    ctx->pc = 0x19E368u;
label_19e368:
    // 0x19e368: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x19e368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x19e36c: 0x2444eec0  addiu       $a0, $v0, -0x1140
    ctx->pc = 0x19e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x19e370: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19e370u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e374: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19e374u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e378: 0xc085dde  jal         func_217778
    ctx->pc = 0x19E378u;
    SET_GPR_U32(ctx, 31, 0x19E380u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x19E380u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19E380u) { return; }
    ctx->pc = 0x19E380u;
label_19e380:
    // 0x19e380: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19E380u;
    {
        const bool branch_taken_0x19e380 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19e380) {
            ctx->pc = 0x19E368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e368;
        }
    }
    ctx->pc = 0x19E388u;
label_19e388:
    // 0x19e388: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x19e388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x19e38c: 0x2444eef0  addiu       $a0, $v0, -0x1110
    ctx->pc = 0x19e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962928));
    // 0x19e390: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19e390u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e394: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19e394u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e398: 0xc085dde  jal         func_217778
    ctx->pc = 0x19E398u;
    SET_GPR_U32(ctx, 31, 0x19E3A0u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x19E3A0u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19E3A0u) { return; }
    ctx->pc = 0x19E3A0u;
label_19e3a0:
    // 0x19e3a0: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19E3A0u;
    {
        const bool branch_taken_0x19e3a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19e3a0) {
            ctx->pc = 0x19E388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e388;
        }
    }
    ctx->pc = 0x19E3A8u;
    // 0x19e3a8: 0xc0ce2b0  jal         func_338AC0
    ctx->pc = 0x19E3A8u;
    SET_GPR_U32(ctx, 31, 0x19E3B0u);
    ctx->pc = 0x338AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338AC0u, 0x19E3A8u, 0x19E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3B0u;
label_19e3b0:
    // 0x19e3b0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x19e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19e3b4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x19e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x19e3b8: 0xc0ce8ac  jal         func_33A2B0
    ctx->pc = 0x19E3B8u;
    SET_GPR_U32(ctx, 31, 0x19E3C0u);
    ctx->pc = 0x33A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A2B0u, 0x19E3B8u, 0x19E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3C0u;
label_19e3c0:
    // 0x19e3c0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x19e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19e3c4: 0xc0ce47c  jal         func_3391F0
    ctx->pc = 0x19E3C4u;
    SET_GPR_U32(ctx, 31, 0x19E3CCu);
    ctx->pc = 0x3391F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3391F0u, 0x19E3C4u, 0x19E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3CCu;
label_19e3cc:
    // 0x19e3cc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x19e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19e3d0: 0xc0ce448  jal         func_339120
    ctx->pc = 0x19E3D0u;
    SET_GPR_U32(ctx, 31, 0x19E3D8u);
    ctx->pc = 0x339120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339120u, 0x19E3D0u, 0x19E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3D8u;
label_19e3d8:
    // 0x19e3d8: 0x24043fff  addiu       $a0, $zero, 0x3FFF
    ctx->pc = 0x19e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x19e3dc: 0xc0ce4b0  jal         func_3392C0
    ctx->pc = 0x19E3DCu;
    SET_GPR_U32(ctx, 31, 0x19E3E4u);
    ctx->pc = 0x3392C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3392C0u, 0x19E3DCu, 0x19E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3E4u;
label_19e3e4:
    // 0x19e3e4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e3e8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e3ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19e3f0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x19e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x19e3f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e3f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19e3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e3fc: 0xc0ce79c  jal         func_339E70
    ctx->pc = 0x19E3FCu;
    SET_GPR_U32(ctx, 31, 0x19E404u);
    ctx->pc = 0x339E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E70u, 0x19E3FCu, 0x19E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E404u;
label_19e404:
    // 0x19e404: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x19e404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e408: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x19e408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x19e40c: 0xc0ce754  jal         func_339D50
    ctx->pc = 0x19E40Cu;
    SET_GPR_U32(ctx, 31, 0x19E414u);
    ctx->pc = 0x339D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D50u, 0x19E40Cu, 0x19E414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E414u;
label_19e414:
    // 0x19e414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19e414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e418: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x19E418u;
    SET_GPR_U32(ctx, 31, 0x19E420u);
    ctx->pc = 0x33A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A090u, 0x19E418u, 0x19E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E420u;
label_19e420:
    // 0x19e420: 0xc067910  jal         func_19E440
    ctx->pc = 0x19E420u;
    SET_GPR_U32(ctx, 31, 0x19E428u);
    ctx->pc = 0x19E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E440u, 0x19E420u, 0x19E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E428u;
label_19e428:
    // 0x19e428: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19e428u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e42c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19e42cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19e430: 0x3e00008  jr          $ra
    ctx->pc = 0x19E430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E438u;
}
