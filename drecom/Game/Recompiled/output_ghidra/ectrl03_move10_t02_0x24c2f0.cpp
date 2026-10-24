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

// Function: ectrl03_move10_t02
// Address: 0x24c2f0 - 0x24c4a0
void ectrl03_move10_t02_0x24c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_move10_t02_0x24c2f0");
#endif

    switch (ctx->pc) {
        case 0x24c368u: goto label_24c368;
        case 0x24c388u: goto label_24c388;
        case 0x24c3e4u: goto label_24c3e4;
        case 0x24c458u: goto label_24c458;
        case 0x24c464u: goto label_24c464;
        case 0x24c47cu: goto label_24c47c;
        case 0x24c488u: goto label_24c488;
        default: break;
    }

    ctx->pc = 0x24c2f0u;

    // 0x24c2f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24c2f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x24c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x24c2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24c2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24c2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24c300: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x24c300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x24c304: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c308: 0x8c700104  lw          $s0, 0x104($v1)
    ctx->pc = 0x24c308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24c30c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c310: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c314: 0x28630078  slti        $v1, $v1, 0x78
    ctx->pc = 0x24c314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x24c318: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C318u;
    {
        const bool branch_taken_0x24c318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c318) {
            ctx->pc = 0x24C35Cu;
            goto label_24c35c;
        }
    }
    ctx->pc = 0x24C320u;
    // 0x24c320: 0x26030480  addiu       $v1, $s0, 0x480
    ctx->pc = 0x24c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c324: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24c324u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c328: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c32c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24c330: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24c330u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24c334: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c338: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24c338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24c33c: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24c340: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c344: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24c344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    // 0x24c348: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c34c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c350: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24c350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24c354: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x24C354u;
    {
        const bool branch_taken_0x24c354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c354) {
            ctx->pc = 0x24C488u;
            goto label_24c488;
        }
    }
    ctx->pc = 0x24C35Cu;
label_24c35c:
    // 0x24c35c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c360: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24C360u;
    SET_GPR_U32(ctx, 31, 0x24C368u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24C368u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24C368u) { return; }
    ctx->pc = 0x24C368u;
label_24c368:
    // 0x24c368: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c36c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x24c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24c370: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24c370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c374: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x24c374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c378: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x24c37c: 0x24478e98  addiu       $a3, $v0, -0x7168
    ctx->pc = 0x24c37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x24c380: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x24C380u;
    SET_GPR_U32(ctx, 31, 0x24C388u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x24C380u, 0x24C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C388u;
label_24c388:
    // 0x24c388: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C388u;
    {
        const bool branch_taken_0x24c388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c388) {
            ctx->pc = 0x24C3CCu;
            goto label_24c3cc;
        }
    }
    ctx->pc = 0x24C390u;
    // 0x24c390: 0x26030480  addiu       $v1, $s0, 0x480
    ctx->pc = 0x24c390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c394: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24c394u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c398: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c39c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24c3a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24c3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24c3a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c3a8: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24c3ac: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24c3b0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c3b4: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    // 0x24c3b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c3bc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c3c0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24c3c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24C3C4u;
    {
        const bool branch_taken_0x24c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c3c4) {
            ctx->pc = 0x24C488u;
            goto label_24c488;
        }
    }
    ctx->pc = 0x24C3CCu;
label_24c3cc:
    // 0x24c3cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24c3d0: 0x26050490  addiu       $a1, $s0, 0x490
    ctx->pc = 0x24c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x24c3d4: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x24c3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c3d8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x24c3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24c3dc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x24C3DCu;
    SET_GPR_U32(ctx, 31, 0x24C3E4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x24C3DCu, 0x24C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3E4u;
label_24c3e4:
    // 0x24c3e4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x24c3e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c3e8: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C3E8u;
    {
        const bool branch_taken_0x24c3e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c3e8) {
            ctx->pc = 0x24C42Cu;
            goto label_24c42c;
        }
    }
    ctx->pc = 0x24C3F0u;
    // 0x24c3f0: 0x26030480  addiu       $v1, $s0, 0x480
    ctx->pc = 0x24c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c3f4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24c3f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c3f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c3fc: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24c400: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24c400u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24c404: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c408: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24c408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24c40c: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24c410: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c414: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24c414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    // 0x24c418: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c41c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c420: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24c420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24c424: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24C424u;
    {
        const bool branch_taken_0x24c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c424) {
            ctx->pc = 0x24C488u;
            goto label_24c488;
        }
    }
    ctx->pc = 0x24C42Cu;
label_24c42c:
    // 0x24c42c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c430: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c434: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x24c434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24c438: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24C438u;
    {
        const bool branch_taken_0x24c438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c438) {
            ctx->pc = 0x24C488u;
            goto label_24c488;
        }
    }
    ctx->pc = 0x24C440u;
    // 0x24c440: 0x3404a302  ori         $a0, $zero, 0xA302
    ctx->pc = 0x24c440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41730);
    // 0x24c444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c448: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x24c448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c44c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c44cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c450: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C450u;
    SET_GPR_U32(ctx, 31, 0x24C458u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C450u, 0x24C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C458u;
label_24c458:
    // 0x24c458: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c458u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c45c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C45Cu;
    SET_GPR_U32(ctx, 31, 0x24C464u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C45Cu, 0x24C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C464u;
label_24c464:
    // 0x24c464: 0x3404a201  ori         $a0, $zero, 0xA201
    ctx->pc = 0x24c464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41473);
    // 0x24c468: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c468u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c46c: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x24c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c470: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c470u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c474: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C474u;
    SET_GPR_U32(ctx, 31, 0x24C47Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C474u, 0x24C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C47Cu;
label_24c47c:
    // 0x24c47c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c47cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c480: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C480u;
    SET_GPR_U32(ctx, 31, 0x24C488u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C480u, 0x24C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C488u;
label_24c488:
    // 0x24c488: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x24c488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c48c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24c48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24c490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c494: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x24c494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24c498: 0x3e00008  jr          $ra
    ctx->pc = 0x24C498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C4A0u;
}
