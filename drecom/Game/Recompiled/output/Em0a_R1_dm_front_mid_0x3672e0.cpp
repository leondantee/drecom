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

// Function: Em0a_R1_dm_front_mid
// Address: 0x3672e0 - 0x3674cc
void Em0a_R1_dm_front_mid_0x3672e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_dm_front_mid_0x3672e0");
#endif

    switch (ctx->pc) {
        case 0x36734cu: goto label_36734c;
        case 0x367390u: goto label_367390;
        case 0x3673a8u: goto label_3673a8;
        case 0x3673bcu: goto label_3673bc;
        case 0x3673ccu: goto label_3673cc;
        case 0x3673d8u: goto label_3673d8;
        case 0x367420u: goto label_367420;
        case 0x367450u: goto label_367450;
        case 0x36745cu: goto label_36745c;
        case 0x36746cu: goto label_36746c;
        case 0x367478u: goto label_367478;
        default: break;
    }

    ctx->pc = 0x3672e0u;

    // 0x3672e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3672e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3672e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3672e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3672e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3672e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3672ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3672ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3672f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3672f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3672f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3672f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3672f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3672f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3672fc: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3672FCu;
    {
        const bool branch_taken_0x3672fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3672fc) {
            ctx->pc = 0x367440u;
            goto label_367440;
        }
    }
    ctx->pc = 0x367304u;
    // 0x367304: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x367304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367308: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x367308u;
    {
        const bool branch_taken_0x367308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x367308) {
            ctx->pc = 0x367400u;
            goto label_367400;
        }
    }
    ctx->pc = 0x367310u;
    // 0x367310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367314: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x367314u;
    {
        const bool branch_taken_0x367314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x367314) {
            ctx->pc = 0x36736Cu;
            goto label_36736c;
        }
    }
    ctx->pc = 0x36731Cu;
    // 0x36731c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36731Cu;
    {
        const bool branch_taken_0x36731c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36731c) {
            ctx->pc = 0x36732Cu;
            goto label_36732c;
        }
    }
    ctx->pc = 0x367324u;
    // 0x367324: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x367324u;
    {
        const bool branch_taken_0x367324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367324) {
            ctx->pc = 0x3674BCu;
            goto label_3674bc;
        }
    }
    ctx->pc = 0x36732Cu;
label_36732c:
    // 0x36732c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367330: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367334: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x367338: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x367338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x36733c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36733cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367340: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367344: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367344u;
    SET_GPR_U32(ctx, 31, 0x36734Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367344u, 0x36734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36734Cu;
label_36734c:
    // 0x36734c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367350: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x367350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367358: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x367358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x36735c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367360: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x367368: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36736c:
    // 0x36736c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x36736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x367370: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x367374: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x367374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x367378: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36737c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367380: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x367380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x367384: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x367384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x367388: 0xc058f50  jal         func_163D40
    ctx->pc = 0x367388u;
    SET_GPR_U32(ctx, 31, 0x367390u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x367388u, 0x367390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367390u;
label_367390:
    // 0x367390: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367394: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x367394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x367398: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36739c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36739cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3673a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3673A0u;
    SET_GPR_U32(ctx, 31, 0x3673A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3673A0u, 0x3673A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673A8u;
label_3673a8:
    // 0x3673a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3673a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3673acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673b0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3673b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3673b4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3673B4u;
    SET_GPR_U32(ctx, 31, 0x3673BCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3673B4u, 0x3673BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673BCu;
label_3673bc:
    // 0x3673bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3673bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3673c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3673c4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3673C4u;
    SET_GPR_U32(ctx, 31, 0x3673CCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3673C4u, 0x3673CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673CCu;
label_3673cc:
    // 0x3673cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3673ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673d0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3673D0u;
    SET_GPR_U32(ctx, 31, 0x3673D8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3673D0u, 0x3673D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673D8u;
label_3673d8:
    // 0x3673d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3673d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3673dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3673e0: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3673E0u;
    {
        const bool branch_taken_0x3673e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3673e0) {
            ctx->pc = 0x3674BCu;
            goto label_3674bc;
        }
    }
    ctx->pc = 0x3673E8u;
    // 0x3673e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3673e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673ec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3673ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3673f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3673f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3673f4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3673f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3673f8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3673F8u;
    {
        const bool branch_taken_0x3673f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3673f8) {
            ctx->pc = 0x3674BCu;
            goto label_3674bc;
        }
    }
    ctx->pc = 0x367400u;
label_367400:
    // 0x367400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367404: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367408: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36740c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x36740cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x367410: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367414: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367418: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367418u;
    SET_GPR_U32(ctx, 31, 0x367420u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367418u, 0x367420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367420u;
label_367420:
    // 0x367420: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367424: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x367424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367428: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36742c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x36742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x367430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367434: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36743c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36743cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_367440:
    // 0x367440: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367448: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367448u;
    SET_GPR_U32(ctx, 31, 0x367450u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367448u, 0x367450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367450u;
label_367450:
    // 0x367450: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367454: 0xc05cd10  jal         func_173440
    ctx->pc = 0x367454u;
    SET_GPR_U32(ctx, 31, 0x36745Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x367454u, 0x36745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36745Cu;
label_36745c:
    // 0x36745c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36745cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367464: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x367464u;
    SET_GPR_U32(ctx, 31, 0x36746Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367464u, 0x36746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36746Cu;
label_36746c:
    // 0x36746c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367470: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x367470u;
    SET_GPR_U32(ctx, 31, 0x367478u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367470u, 0x367478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367478u;
label_367478:
    // 0x367478: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36747c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36747cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x367480: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x367480u;
    {
        const bool branch_taken_0x367480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367480) {
            ctx->pc = 0x3674BCu;
            goto label_3674bc;
        }
    }
    ctx->pc = 0x367488u;
    // 0x367488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x367488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36748c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367490: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x367490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x367494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367498: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x367498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36749c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3674a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3674a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3674a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3674a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3674a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3674a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3674ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3674acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3674b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3674b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3674b4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3674B4u;
    {
        const bool branch_taken_0x3674b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3674b4) {
            ctx->pc = 0x3674BCu;
            goto label_3674bc;
        }
    }
    ctx->pc = 0x3674BCu;
label_3674bc:
    // 0x3674bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3674bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3674c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3674c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3674c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3674C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3674C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3674CCu;
}
