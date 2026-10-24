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

// Function: Em10_R1_catch_critical
// Address: 0x12d310 - 0x12d518
void Em10_R1_catch_critical_0x12d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_catch_critical_0x12d310");
#endif

    switch (ctx->pc) {
        case 0x12d364u: goto label_12d364;
        case 0x12d384u: goto label_12d384;
        case 0x12d3a4u: goto label_12d3a4;
        case 0x12d3b0u: goto label_12d3b0;
        case 0x12d3c0u: goto label_12d3c0;
        case 0x12d3ccu: goto label_12d3cc;
        case 0x12d410u: goto label_12d410;
        case 0x12d454u: goto label_12d454;
        case 0x12d464u: goto label_12d464;
        case 0x12d478u: goto label_12d478;
        case 0x12d49cu: goto label_12d49c;
        case 0x12d4e0u: goto label_12d4e0;
        case 0x12d4f0u: goto label_12d4f0;
        case 0x12d504u: goto label_12d504;
        default: break;
    }

    ctx->pc = 0x12d310u;

    // 0x12d310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12d310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12d314: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x12d314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x12d318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12d318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12d31c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x12d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x12d320: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d324: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12d324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12d328: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d32c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12d32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12d330: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12d330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12d334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d338: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x12D338u;
    {
        const bool branch_taken_0x12d338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d338) {
            ctx->pc = 0x12D394u;
            goto label_12d394;
        }
    }
    ctx->pc = 0x12D340u;
    // 0x12d340: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D340u;
    {
        const bool branch_taken_0x12d340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d340) {
            ctx->pc = 0x12D350u;
            goto label_12d350;
        }
    }
    ctx->pc = 0x12D348u;
    // 0x12d348: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x12D348u;
    {
        const bool branch_taken_0x12d348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d348) {
            ctx->pc = 0x12D3ECu;
            goto label_12d3ec;
        }
    }
    ctx->pc = 0x12D350u;
label_12d350:
    // 0x12d350: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d354: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d358: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12d358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d35c: 0xc0507ac  jal         func_141EB0
    ctx->pc = 0x12D35Cu;
    SET_GPR_U32(ctx, 31, 0x12D364u);
    ctx->pc = 0x141EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141EB0u, 0x12D35Cu, 0x12D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D364u;
label_12d364:
    // 0x12d364: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d368: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d36c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12d370: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x12d370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12d374: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d378: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12d378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12d37c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12D37Cu;
    SET_GPR_U32(ctx, 31, 0x12D384u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12D37Cu, 0x12D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D384u;
label_12d384:
    // 0x12d384: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d388: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12d388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12d38c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d390: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12d390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12d394:
    // 0x12d394: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d398: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d398u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d39c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12D39Cu;
    SET_GPR_U32(ctx, 31, 0x12D3A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12D39Cu, 0x12D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3A4u;
label_12d3a4:
    // 0x12d3a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12D3A8u;
    SET_GPR_U32(ctx, 31, 0x12D3B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12D3A8u, 0x12D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3B0u;
label_12d3b0:
    // 0x12d3b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d3b8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12D3B8u;
    SET_GPR_U32(ctx, 31, 0x12D3C0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D3B8u, 0x12D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3C0u;
label_12d3c0:
    // 0x12d3c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3c4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12D3C4u;
    SET_GPR_U32(ctx, 31, 0x12D3CCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D3C4u, 0x12D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3CCu;
label_12d3cc:
    // 0x12d3cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12d3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12d3d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D3D4u;
    {
        const bool branch_taken_0x12d3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d3d4) {
            ctx->pc = 0x12D3ECu;
            goto label_12d3ec;
        }
    }
    ctx->pc = 0x12D3DCu;
    // 0x12d3dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3e0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12d3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12d3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d3e8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12d3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_12d3ec:
    // 0x12d3ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3f0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x12d3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x12d3f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12d3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12d3f8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x12d3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x12d3fc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x12D3FCu;
    {
        const bool branch_taken_0x12d3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d3fc) {
            ctx->pc = 0x12D478u;
            goto label_12d478;
        }
    }
    ctx->pc = 0x12D404u;
    // 0x12d404: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d408: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12D408u;
    SET_GPR_U32(ctx, 31, 0x12D410u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D408u, 0x12D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D410u;
label_12d410:
    // 0x12d410: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d414: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12d414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d418: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12d418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12d41c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d420: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12d424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d428: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12d42c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d430: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12d430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12d434: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d438: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12d43c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d440: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d440u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d444: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x12d444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x12d448: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12d448u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d44c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12D44Cu;
    SET_GPR_U32(ctx, 31, 0x12D454u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12D44Cu, 0x12D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D454u;
label_12d454:
    // 0x12d454: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x12d454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x12d458: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12d458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x12d45c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D45Cu;
    SET_GPR_U32(ctx, 31, 0x12D464u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D45Cu, 0x12D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D464u;
label_12d464:
    // 0x12d464: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x12d464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x12d468: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x12d468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x12d46c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x12d470: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D470u;
    SET_GPR_U32(ctx, 31, 0x12D478u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D470u, 0x12D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D478u;
label_12d478:
    // 0x12d478: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d47c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x12d47cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x12d480: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12d480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12d484: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12d484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12d488: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x12D488u;
    {
        const bool branch_taken_0x12d488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d488) {
            ctx->pc = 0x12D504u;
            goto label_12d504;
        }
    }
    ctx->pc = 0x12D490u;
    // 0x12d490: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12d490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12d494: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12D494u;
    SET_GPR_U32(ctx, 31, 0x12D49Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D494u, 0x12D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D49Cu;
label_12d49c:
    // 0x12d49c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d4a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12d4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d4a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12d4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12d4a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d4ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12d4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d4b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12d4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12d4b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d4bc: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12d4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12d4c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d4c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12d4c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12d4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12d4cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d4ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d4d0: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x12d4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12d4d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12d4d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d4d8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12D4D8u;
    SET_GPR_U32(ctx, 31, 0x12D4E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12D4D8u, 0x12D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4E0u;
label_12d4e0:
    // 0x12d4e0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x12d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x12d4e4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12d4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x12d4e8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D4E8u;
    SET_GPR_U32(ctx, 31, 0x12D4F0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D4E8u, 0x12D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4F0u;
label_12d4f0:
    // 0x12d4f0: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x12d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x12d4f4: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x12d4f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x12d4f8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x12d4fc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D4FCu;
    SET_GPR_U32(ctx, 31, 0x12D504u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D4FCu, 0x12D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D504u;
label_12d504:
    // 0x12d504: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12d504u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d50c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12d50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12d510: 0x3e00008  jr          $ra
    ctx->pc = 0x12D510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D518u;
}
