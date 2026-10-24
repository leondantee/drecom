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

// Function: SdrGetStateReceive
// Address: 0x33a370 - 0x33a3f0
void SdrGetStateReceive_0x33a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrGetStateReceive_0x33a370");
#endif

    switch (ctx->pc) {
        case 0x33a39cu: goto label_33a39c;
        case 0x33a3c0u: goto label_33a3c0;
        case 0x33a3d8u: goto label_33a3d8;
        default: break;
    }

    ctx->pc = 0x33a370u;

    // 0x33a370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a374: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33a374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33a378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a37c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x33a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x33a380: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33a384: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33A384u;
    {
        const bool branch_taken_0x33a384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a384) {
            ctx->pc = 0x33A3B0u;
            goto label_33a3b0;
        }
    }
    ctx->pc = 0x33A38Cu;
    // 0x33a38c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a390: 0x8c249a18  lw          $a0, -0x65E8($at)
    ctx->pc = 0x33a390u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A18u));
    // 0x33a394: 0xc084a9c  jal         func_212A70
    ctx->pc = 0x33A394u;
    SET_GPR_U32(ctx, 31, 0x33A39Cu);
    ctx->pc = 0x212A70u;
    {
        ctx->pc = 0x33A39Cu;
        ps2_syscalls::PollSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A39Cu) { return; }
    ctx->pc = 0x33A39Cu;
label_33a39c:
    // 0x33a39c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A39Cu;
    {
        const bool branch_taken_0x33a39c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x33a39c) {
            ctx->pc = 0x33A3C0u;
            goto label_33a3c0;
        }
    }
    ctx->pc = 0x33A3A4u;
    // 0x33a3a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a3a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33A3A8u;
    {
        const bool branch_taken_0x33a3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a3a8) {
            ctx->pc = 0x33A3DCu;
            goto label_33a3dc;
        }
    }
    ctx->pc = 0x33A3B0u;
label_33a3b0:
    // 0x33a3b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a3b4: 0x8c249a18  lw          $a0, -0x65E8($at)
    ctx->pc = 0x33a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A18u));
    // 0x33a3b8: 0xc084a98  jal         func_212A60
    ctx->pc = 0x33A3B8u;
    SET_GPR_U32(ctx, 31, 0x33A3C0u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x33A3C0u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A3C0u) { return; }
    ctx->pc = 0x33A3C0u;
label_33a3c0:
    // 0x33a3c0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a3c4: 0x8c3052c0  lw          $s0, 0x52C0($at)
    ctx->pc = 0x33a3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8952C0u));
    // 0x33a3c8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a3cc: 0x8c249a18  lw          $a0, -0x65E8($at)
    ctx->pc = 0x33a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A18u));
    // 0x33a3d0: 0xc084a90  jal         func_212A40
    ctx->pc = 0x33A3D0u;
    SET_GPR_U32(ctx, 31, 0x33A3D8u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x33A3D8u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A3D8u) { return; }
    ctx->pc = 0x33A3D8u;
label_33a3d8:
    // 0x33a3d8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a3d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_33a3dc:
    // 0x33a3dc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33a3dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a3e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a3e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33a3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33a3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x33A3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A3F0u;
}
