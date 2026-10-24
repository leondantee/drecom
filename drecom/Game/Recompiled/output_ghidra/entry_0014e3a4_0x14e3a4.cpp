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

// Function: entry_0014e3a4
// Address: 0x14e3a4 - 0x14e408
void entry_0014e3a4_0x14e3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e3a4_0x14e3a4");
#endif

    switch (ctx->pc) {
        case 0x14e3acu: goto label_14e3ac;
        case 0x14e3b4u: goto label_14e3b4;
        case 0x14e3c4u: goto label_14e3c4;
        case 0x14e3d4u: goto label_14e3d4;
        case 0x14e3dcu: goto label_14e3dc;
        case 0x14e3e4u: goto label_14e3e4;
        default: break;
    }

    ctx->pc = 0x14e3a4u;

    // 0x14e3a4: 0xc053cf8  jal         func_14F3E0
    ctx->pc = 0x14E3A4u;
    SET_GPR_U32(ctx, 31, 0x14E3ACu);
    ctx->pc = 0x14F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F3E0u, 0x14E3A4u, 0x14E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3ACu;
label_14e3ac:
    // 0x14e3ac: 0xc053f9c  jal         func_14FE70
    ctx->pc = 0x14E3ACu;
    SET_GPR_U32(ctx, 31, 0x14E3B4u);
    ctx->pc = 0x14FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE70u, 0x14E3ACu, 0x14E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3B4u;
label_14e3b4:
    // 0x14e3b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x14e3b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14e3b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e3b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14e3bc: 0xc053b30  jal         func_14ECC0
    ctx->pc = 0x14E3BCu;
    SET_GPR_U32(ctx, 31, 0x14E3C4u);
    ctx->pc = 0x14ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECC0u, 0x14E3BCu, 0x14E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3C4u;
label_14e3c4:
    // 0x14e3c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x14e3c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14e3c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14e3cc: 0xc054590  jal         func_151640
    ctx->pc = 0x14E3CCu;
    SET_GPR_U32(ctx, 31, 0x14E3D4u);
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x14E3CCu, 0x14E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3D4u;
label_14e3d4:
    // 0x14e3d4: 0xc074444  jal         func_1D1110
    ctx->pc = 0x14E3D4u;
    SET_GPR_U32(ctx, 31, 0x14E3DCu);
    ctx->pc = 0x1D1110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1110u, 0x14E3D4u, 0x14E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3DCu;
label_14e3dc:
    // 0x14e3dc: 0xc054b88  jal         func_152E20
    ctx->pc = 0x14E3DCu;
    SET_GPR_U32(ctx, 31, 0x14E3E4u);
    ctx->pc = 0x152E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152E20u, 0x14E3DCu, 0x14E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3E4u;
label_14e3e4:
    // 0x14e3e4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x14e3e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e3e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14e3e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e3ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e3fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x14e3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14e400: 0x3e00008  jr          $ra
    ctx->pc = 0x14E400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E408u;
}
