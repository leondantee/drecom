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

// Function: entry_0019e388
// Address: 0x19e388 - 0x19e418
void entry_0019e388_0x19e388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e388_0x19e388");
#endif

    switch (ctx->pc) {
        case 0x19e3a0u: goto label_19e3a0;
        case 0x19e3b0u: goto label_19e3b0;
        case 0x19e3c0u: goto label_19e3c0;
        case 0x19e3ccu: goto label_19e3cc;
        case 0x19e3d8u: goto label_19e3d8;
        case 0x19e3e4u: goto label_19e3e4;
        case 0x19e404u: goto label_19e404;
        case 0x19e414u: goto label_19e414;
        default: break;
    }

    ctx->pc = 0x19e388u;

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
    ctx->pc = 0x19e418u;
}
