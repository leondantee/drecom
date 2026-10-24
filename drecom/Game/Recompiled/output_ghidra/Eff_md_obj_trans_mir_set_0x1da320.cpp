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

// Function: Eff_md_obj_trans_mir_set
// Address: 0x1da320 - 0x1da4dc
void Eff_md_obj_trans_mir_set_0x1da320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_obj_trans_mir_set_0x1da320");
#endif

    ctx->pc = 0x1da320u;

    // 0x1da320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1da320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1da324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1da328: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1da328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1da32c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1da32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1da330: 0xa3a60048  sb          $a2, 0x48($sp)
    ctx->pc = 0x1da330u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 6));
    // 0x1da334: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1da338: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1da338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
    // 0x1da33c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1da340: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1da340u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x389BC0u));
    // 0x1da344: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1da344u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1da348: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1da348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1da34c: 0x24429bd0  addiu       $v0, $v0, -0x6430
    ctx->pc = 0x1da34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941648));
    // 0x1da350: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1da350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1da354: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1da354u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x389BD0u));
    // 0x1da358: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1da358u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1da35c: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x1da35cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da360: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x1da360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da364: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da368: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1da368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da36c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da374: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x1da374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
    // 0x1da378: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1da378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1da37c: 0x2442dd80  addiu       $v0, $v0, -0x2280
    ctx->pc = 0x1da37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958464));
    // 0x1da380: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1da380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1da384: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1da384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1da388: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da38c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1da38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1da390: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da394: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1da394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1da398: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1da398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1da39c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da3a0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da3a4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1da3a8: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1da3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1da3ac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1da3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1da3b0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da3b4: 0xac20dd80  sw          $zero, -0x2280($at)
    ctx->pc = 0x1da3b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DD80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DD80u, _value); } while (0);
    // 0x1da3b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da3bc: 0xac20dd84  sw          $zero, -0x227C($at)
    ctx->pc = 0x1da3bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DD84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DD84u, _value); } while (0);
    // 0x1da3c0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1da3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1da3c4: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1da3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1da3c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da3cc: 0xac22dd88  sw          $v0, -0x2278($at)
    ctx->pc = 0x1da3ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61DD88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DD88u, _value); } while (0);
    // 0x1da3d0: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x1da3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x1da3d4: 0x3442007c  ori         $v0, $v0, 0x7C
    ctx->pc = 0x1da3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)124);
    // 0x1da3d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da3dc: 0xac22dd8c  sw          $v0, -0x2274($at)
    ctx->pc = 0x1da3dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61DD8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DD8Cu, _value); } while (0);
    // 0x1da3e0: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x1da3e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da3e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da3e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da3ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da3f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da3f4: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x1da3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1da3f8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1da3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1da3fc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1da3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1da400: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da404: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1da404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1da408: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1da408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da40c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da410: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1da410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da414: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1da414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1da418: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da41c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da420: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da424: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1da424u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1da428: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1da428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1da42c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da430: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1da430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1da434: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1da434u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1da438: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1da438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1da43c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da440: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1da440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da444: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1da444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1da448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da44c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da450: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1da450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1da454: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x1da454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x1da458: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da45c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1da45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1da460: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x1da460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da464: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da468: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1da468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da46c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da474: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1da474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1da478: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1da478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1da47c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1da47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1da480: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1da480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1da484: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da488: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1da488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1da48c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da490: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1da490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1da494: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1da494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1da498: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da49c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1da49cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1da4a0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1da4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1da4a4: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1da4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1da4a8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1da4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1da4ac: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x1da4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x1da4b0: 0x34420084  ori         $v0, $v0, 0x84
    ctx->pc = 0x1da4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
    // 0x1da4b4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1da4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1da4b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1da4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1da4bc: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x1da4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x1da4c0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1da4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1da4c4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1da4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1da4c8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1da4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1da4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1da4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da4d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1da4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1da4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA4DCu;
}
