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

// Function: Em0f_ice_eff
// Address: 0x30c3a0 - 0x30c498
void Em0f_ice_eff_0x30c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_ice_eff_0x30c3a0");
#endif

    switch (ctx->pc) {
        case 0x30c41cu: goto label_30c41c;
        case 0x30c428u: goto label_30c428;
        case 0x30c460u: goto label_30c460;
        case 0x30c46cu: goto label_30c46c;
        default: break;
    }

    ctx->pc = 0x30c3a0u;

    // 0x30c3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c3a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30c3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x30c3a8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x30c3ac: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30c3b0: 0x24639920  addiu       $v1, $v1, -0x66E0
    ctx->pc = 0x30c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940960));
    // 0x30c3b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c3b8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30c3b8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399920u));
    // 0x30c3bc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30c3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30c3c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c3c4: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x30c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x30c3c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30c3cc: 0xac83133c  sw          $v1, 0x133C($a0)
    ctx->pc = 0x30c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 3));
    // 0x30c3d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c3d4: 0x8c63133c  lw          $v1, 0x133C($v1)
    ctx->pc = 0x30c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
    // 0x30c3d8: 0x2c610021  sltiu       $at, $v1, 0x21
    ctx->pc = 0x30c3d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x30c3dc: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x30C3DCu;
    {
        const bool branch_taken_0x30c3dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c3dc) {
            ctx->pc = 0x30C488u;
            goto label_30c488;
        }
    }
    ctx->pc = 0x30C3E4u;
    // 0x30c3e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c3e8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c3ec: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30c3f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30c3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c3f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30c3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30c3f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30c3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30c3fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30c3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c400: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c404: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30c404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c408: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30c408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30c40c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c40cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c410: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30c410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c414: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30C414u;
    SET_GPR_U32(ctx, 31, 0x30C41Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30C414u, 0x30C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C41Cu;
label_30c41c:
    // 0x30c41c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30c41cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c420: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30C420u;
    SET_GPR_U32(ctx, 31, 0x30C428u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30C420u, 0x30C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C428u;
label_30c428:
    // 0x30c428: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c42c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c430: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30c434: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30c434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c438: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30c438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30c43c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30c440: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30c440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c448: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30c448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c44c: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30c450: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c454: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30c454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c458: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30C458u;
    SET_GPR_U32(ctx, 31, 0x30C460u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30C458u, 0x30C460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C460u;
label_30c460:
    // 0x30c460: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30c460u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c464: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30C464u;
    SET_GPR_U32(ctx, 31, 0x30C46Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30C464u, 0x30C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C46Cu;
label_30c46c:
    // 0x30c46c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c470: 0x8c64133c  lw          $a0, 0x133C($v1)
    ctx->pc = 0x30c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
    // 0x30c474: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x30c474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x30c478: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C478u;
    {
        const bool branch_taken_0x30c478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30c478) {
            ctx->pc = 0x30C488u;
            goto label_30c488;
        }
    }
    ctx->pc = 0x30C480u;
    // 0x30c480: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c484: 0xac60133c  sw          $zero, 0x133C($v1)
    ctx->pc = 0x30c484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4924), GPR_U32(ctx, 0));
label_30c488:
    // 0x30c488: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30c488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c48c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30c48cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30c490: 0x3e00008  jr          $ra
    ctx->pc = 0x30C490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C498u;
}
