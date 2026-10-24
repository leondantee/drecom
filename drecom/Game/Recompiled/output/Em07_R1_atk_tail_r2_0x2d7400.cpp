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

// Function: Em07_R1_atk_tail_r2
// Address: 0x2d7400 - 0x2d7678
void Em07_R1_atk_tail_r2_0x2d7400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_atk_tail_r2_0x2d7400");
#endif

    switch (ctx->pc) {
        case 0x2d7454u: goto label_2d7454;
        case 0x2d749cu: goto label_2d749c;
        case 0x2d74c0u: goto label_2d74c0;
        case 0x2d74e4u: goto label_2d74e4;
        case 0x2d7508u: goto label_2d7508;
        case 0x2d752cu: goto label_2d752c;
        case 0x2d7550u: goto label_2d7550;
        case 0x2d7574u: goto label_2d7574;
        case 0x2d7598u: goto label_2d7598;
        case 0x2d75bcu: goto label_2d75bc;
        case 0x2d7600u: goto label_2d7600;
        case 0x2d760cu: goto label_2d760c;
        default: break;
    }

    ctx->pc = 0x2d7400u;

    // 0x2d7400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d7404: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d7404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d7408: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d7408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2d740c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7410: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d7410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7414: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d7414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d7418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d741c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D741Cu;
    {
        const bool branch_taken_0x2d741c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d741c) {
            ctx->pc = 0x2D7464u;
            goto label_2d7464;
        }
    }
    ctx->pc = 0x2D7424u;
    // 0x2d7424: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7424u;
    {
        const bool branch_taken_0x2d7424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7424) {
            ctx->pc = 0x2D7434u;
            goto label_2d7434;
        }
    }
    ctx->pc = 0x2D742Cu;
    // 0x2d742c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2D742Cu;
    {
        const bool branch_taken_0x2d742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d742c) {
            ctx->pc = 0x2D7668u;
            goto label_2d7668;
        }
    }
    ctx->pc = 0x2D7434u;
label_2d7434:
    // 0x2d7434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7438: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d743c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d743cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d7440: 0x24063c0a  addiu       $a2, $zero, 0x3C0A
    ctx->pc = 0x2d7440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15370));
    // 0x2d7444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d7444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7448: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d744c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D744Cu;
    SET_GPR_U32(ctx, 31, 0x2D7454u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D744Cu, 0x2D7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7454u;
label_2d7454:
    // 0x2d7454: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7458: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d7458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d745c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d7460: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d7460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d7464:
    // 0x2d7464: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d7464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d7468: 0x24428970  addiu       $v0, $v0, -0x7690
    ctx->pc = 0x2d7468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936944));
    // 0x2d746c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d746cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7470: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d7470u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398970u));
    // 0x2d7474: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d7474u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d7478: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d747c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7480: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7484: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2d7484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d7488: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d748c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7490: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7494: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7494u;
    SET_GPR_U32(ctx, 31, 0x2D749Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7494u, 0x2D749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D749Cu;
label_2d749c:
    // 0x2d749c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d74a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d74a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d74a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d74a8: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2d74a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2d74ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d74acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d74b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d74b4: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d74b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d74b8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D74B8u;
    SET_GPR_U32(ctx, 31, 0x2D74C0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D74B8u, 0x2D74C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D74C0u;
label_2d74c0:
    // 0x2d74c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d74c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d74c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d74c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d74cc: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x2d74ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2d74d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d74d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d74d4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d74d8: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d74d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d74dc: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D74DCu;
    SET_GPR_U32(ctx, 31, 0x2D74E4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D74DCu, 0x2D74E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D74E4u;
label_2d74e4:
    // 0x2d74e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d74e8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d74ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d74ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d74f0: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x2d74f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2d74f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d74f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d74f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d74fc: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d74fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7500: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7500u;
    SET_GPR_U32(ctx, 31, 0x2D7508u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7500u, 0x2D7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7508u;
label_2d7508:
    // 0x2d7508: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d750c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7510: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7514: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x2d7514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2d7518: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d751c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d751cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7520: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7524: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7524u;
    SET_GPR_U32(ctx, 31, 0x2D752Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7524u, 0x2D752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D752Cu;
label_2d752c:
    // 0x2d752c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7530: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7534: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7538: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d7538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d753c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d753cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7540: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7544: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7548: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7548u;
    SET_GPR_U32(ctx, 31, 0x2D7550u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7548u, 0x2D7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7550u;
label_2d7550:
    // 0x2d7550: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7554: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7558: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d755c: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x2d755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x2d7560: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7564: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7568: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d756c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D756Cu;
    SET_GPR_U32(ctx, 31, 0x2D7574u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D756Cu, 0x2D7574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7574u;
label_2d7574:
    // 0x2d7574: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7578: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d757c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7580: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x2d7580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2d7584: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7588: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d758c: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d758cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7590: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7590u;
    SET_GPR_U32(ctx, 31, 0x2D7598u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7590u, 0x2D7598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7598u;
label_2d7598:
    // 0x2d7598: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d759c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d75a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d75a4: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x2d75a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x2d75a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d75a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d75ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d75acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d75b0: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d75b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d75b4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D75B4u;
    SET_GPR_U32(ctx, 31, 0x2D75BCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D75B4u, 0x2D75BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75BCu;
label_2d75bc:
    // 0x2d75bc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d75c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d75c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d75c4: 0x0  nop
    ctx->pc = 0x2d75c4u;
    // NOP
    // 0x2d75c8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d75c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d75cc: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x2d75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x2d75d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d75d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d75d4: 0x0  nop
    ctx->pc = 0x2d75d4u;
    // NOP
    // 0x2d75d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d75d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d75dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d75e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d75e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d75e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d75e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d75e8: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x2d75e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d75ec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d75ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d75f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d75f4: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d75f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d75f8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D75F8u;
    SET_GPR_U32(ctx, 31, 0x2D7600u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D75F8u, 0x2D7600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7600u;
label_2d7600:
    // 0x2d7600: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7604: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D7604u;
    SET_GPR_U32(ctx, 31, 0x2D760Cu);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D7604u, 0x2D760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D760Cu;
label_2d760c:
    // 0x2d760c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7610: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d7610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d7614: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D7614u;
    {
        const bool branch_taken_0x2d7614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7614) {
            ctx->pc = 0x2D7668u;
            goto label_2d7668;
        }
    }
    ctx->pc = 0x2D761Cu;
    // 0x2d761c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7620: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d7620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d7624: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d7624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7628: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d7628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d762c: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d7630: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d7630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7634: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d7634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d7638: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d763c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7640: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d7640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7644: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d7644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d764c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d764cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7650: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7654: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d7654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7658: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d765c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d765cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7660: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7664: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d7664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d7668:
    // 0x2d7668: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d7668u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d766c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d766cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d7670: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7678u;
}
