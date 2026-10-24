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

// Function: R10a_evt_scene1
// Address: 0x272640 - 0x2729c4
void R10a_evt_scene1_0x272640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_scene1_0x272640");
#endif

    switch (ctx->pc) {
        case 0x272670u: goto label_272670;
        case 0x2727f8u: goto label_2727f8;
        case 0x2728a4u: goto label_2728a4;
        case 0x2728f0u: goto label_2728f0;
        case 0x272900u: goto label_272900;
        case 0x27296cu: goto label_27296c;
        case 0x2729a0u: goto label_2729a0;
        default: break;
    }

    ctx->pc = 0x272640u;

    // 0x272640: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x272640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x272644: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x272644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x272648: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x272648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27264c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x272650: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x272650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x272654: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x272654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x272658: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x272658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27265c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27265cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x272660: 0x2454fe00  addiu       $s4, $v0, -0x200
    ctx->pc = 0x272660u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x272664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272668: 0xc05db9c  jal         func_176E70
    ctx->pc = 0x272668u;
    SET_GPR_U32(ctx, 31, 0x272670u);
    ctx->pc = 0x176E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E70u, 0x272668u, 0x272670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272670u;
label_272670:
    // 0x272670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x272670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x272674: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x272674u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x272678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27267c: 0xa420fd64  sh          $zero, -0x29C($at)
    ctx->pc = 0x27267cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CFD64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CFD64u, _value); } while (0);
    // 0x272680: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x272680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x272684: 0x8c30bb44  lw          $s0, -0x44BC($at)
    ctx->pc = 0x272684u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB44u));
    // 0x272688: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x272688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27268c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x27268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x272690: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272694: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x272694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x272698: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x272698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x27269c: 0x8c30bb48  lw          $s0, -0x44B8($at)
    ctx->pc = 0x27269cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB48u));
    // 0x2726a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2726a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2726a4: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x2726a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x2726a8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x2726a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x2726ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2726acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2726b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2726b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2726b4: 0xac30efb4  sw          $s0, -0x104C($at)
    ctx->pc = 0x2726b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3EEFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFB4u, _value); } while (0);
    // 0x2726b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2726b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2726bc: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x2726bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2726c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2726c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2726c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2726c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2726c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2726c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2726cc: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2726ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2726d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2726d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2726d4: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2726d4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2726d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2726d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2726dc: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x2726dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2726e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2726e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2726e4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2726e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2726e8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2726e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2726ec: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2726ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2726f0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2726f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2726f4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2726f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2726f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2726f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2726fc: 0x3c024630  lui         $v0, 0x4630
    ctx->pc = 0x2726fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17968 << 16));
    // 0x272700: 0x34426800  ori         $v0, $v0, 0x6800
    ctx->pc = 0x272700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26624);
    // 0x272704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272708: 0x0  nop
    ctx->pc = 0x272708u;
    // NOP
    // 0x27270c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x27270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x272710: 0x3c02462a  lui         $v0, 0x462A
    ctx->pc = 0x272710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17962 << 16));
    // 0x272714: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x272714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x272718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27271c: 0x0  nop
    ctx->pc = 0x27271cu;
    // NOP
    // 0x272720: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x272720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x272724: 0x3c02c5a3  lui         $v0, 0xC5A3
    ctx->pc = 0x272724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50595 << 16));
    // 0x272728: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x272728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x27272c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27272cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272730: 0x0  nop
    ctx->pc = 0x272730u;
    // NOP
    // 0x272734: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x272734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x272738: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x272738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x27273c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x272740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272744: 0x0  nop
    ctx->pc = 0x272744u;
    // NOP
    // 0x272748: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x272748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x27274c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x272750: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x272750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x272754: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272758: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x272758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27275c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27275cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272760: 0x8c23f9e0  lw          $v1, -0x620($at)
    ctx->pc = 0x272760u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x272764: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x272764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x272768: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x272768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x27276c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x27276cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x272770: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272774: 0x8c23f9e4  lw          $v1, -0x61C($at)
    ctx->pc = 0x272774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x272778: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x272778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27277c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x27277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x272780: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x272780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x272784: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272788: 0x8c23f9e8  lw          $v1, -0x618($at)
    ctx->pc = 0x272788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x27278c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x27278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x272790: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x272790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x272794: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x272794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x272798: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27279c: 0x8c23f9ec  lw          $v1, -0x614($at)
    ctx->pc = 0x27279cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x2727a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2727a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2727a4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2727a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2727a8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2727a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2727ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2727acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2727b0: 0x8c23f9f0  lw          $v1, -0x610($at)
    ctx->pc = 0x2727b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9F0u));
    // 0x2727b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2727b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2727b8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2727b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2727bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2727bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2727c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2727c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2727c4: 0x8c23f9f4  lw          $v1, -0x60C($at)
    ctx->pc = 0x2727c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9F4u));
    // 0x2727c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2727c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2727cc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2727ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2727d0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2727d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2727d4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2727d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2727d8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2727d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2727dc: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2727dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2727e0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2727e0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2727e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2727e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2727e8: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x2727e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2727ec: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x2727ecu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x2727f0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2727F0u;
    {
        const bool branch_taken_0x2727f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2727f0) {
            ctx->pc = 0x272970u;
            goto label_272970;
        }
    }
    ctx->pc = 0x2727F8u;
label_2727f8:
    // 0x2727f8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2727f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2727fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2727fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x272800: 0x28410047  slti        $at, $v0, 0x47
    ctx->pc = 0x272800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)71) ? 1 : 0);
    // 0x272804: 0x14200056  bnez        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x272804u;
    {
        const bool branch_taken_0x272804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x272804) {
            ctx->pc = 0x272960u;
            goto label_272960;
        }
    }
    ctx->pc = 0x27280Cu;
    // 0x27280c: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x27280cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x272810: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x272810u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x272814: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272818: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x272818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x27281c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272820: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x272820u;
    {
        const bool branch_taken_0x272820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272820) {
            ctx->pc = 0x272960u;
            goto label_272960;
        }
    }
    ctx->pc = 0x272828u;
    // 0x272828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27282c: 0x0  nop
    ctx->pc = 0x27282cu;
    // NOP
    // 0x272830: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x272830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x272834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272838: 0x0  nop
    ctx->pc = 0x272838u;
    // NOP
    // 0x27283c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x27283cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x272840: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x272840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x272844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272848: 0x0  nop
    ctx->pc = 0x272848u;
    // NOP
    // 0x27284c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x27284cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x272850: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272858: 0x0  nop
    ctx->pc = 0x272858u;
    // NOP
    // 0x27285c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x27285cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x272860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272864: 0x0  nop
    ctx->pc = 0x272864u;
    // NOP
    // 0x272868: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x272868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27286c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27286cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272870: 0x0  nop
    ctx->pc = 0x272870u;
    // NOP
    // 0x272874: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x272874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x272878: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x272878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x27287c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27287cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272880: 0x0  nop
    ctx->pc = 0x272880u;
    // NOP
    // 0x272884: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x272884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x272888: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27288c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27288cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272890: 0x0  nop
    ctx->pc = 0x272890u;
    // NOP
    // 0x272894: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x272894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x272898: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x272898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27289c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x27289Cu;
    SET_GPR_U32(ctx, 31, 0x2728A4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x27289Cu, 0x2728A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728A4u;
label_2728a4:
    // 0x2728a4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2728a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2728a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2728a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2728ac: 0x24449240  addiu       $a0, $v0, -0x6DC0
    ctx->pc = 0x2728acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x2728b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2728b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2728b4: 0x24479240  addiu       $a3, $v0, -0x6DC0
    ctx->pc = 0x2728b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x2728b8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2728b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2728bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2728bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2728c0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2728c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2728c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2728c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2728c8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2728c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2728cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2728ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2728d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2728d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2728d4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2728d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2728d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2728d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2728dc: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2728dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2728e0: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2728e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2728e4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2728e4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2728e8: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2728E8u;
    SET_GPR_U32(ctx, 31, 0x2728F0u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2728E8u, 0x2728F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728F0u;
label_2728f0:
    // 0x2728f0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2728f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2728f4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2728f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2728f8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2728F8u;
    SET_GPR_U32(ctx, 31, 0x272900u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2728F8u, 0x272900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272900u;
label_272900:
    // 0x272900: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x272900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x272904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x272908: 0x28410051  slti        $at, $v0, 0x51
    ctx->pc = 0x272908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x27290c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x27290Cu;
    {
        const bool branch_taken_0x27290c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27290c) {
            ctx->pc = 0x272960u;
            goto label_272960;
        }
    }
    ctx->pc = 0x272914u;
    // 0x272914: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x272914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x272918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27291c: 0x284100b4  slti        $at, $v0, 0xB4
    ctx->pc = 0x27291cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x272920: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x272920u;
    {
        const bool branch_taken_0x272920 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x272920) {
            ctx->pc = 0x272960u;
            goto label_272960;
        }
    }
    ctx->pc = 0x272928u;
    // 0x272928: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x272928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x27292c: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x27292cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272930: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x272930u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x272934: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x272934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272938: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27293c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27293Cu;
    {
        const bool branch_taken_0x27293c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27293c) {
            ctx->pc = 0x272960u;
            goto label_272960;
        }
    }
    ctx->pc = 0x272944u;
    // 0x272944: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x272944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x272948: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x272948u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27294c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x27294cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x272950: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x272950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272954: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x272954u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272958: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x272958u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x27295c: 0x0  nop
    ctx->pc = 0x27295cu;
    // NOP
label_272960:
    // 0x272960: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272964: 0xc084964  jal         func_212590
    ctx->pc = 0x272964u;
    SET_GPR_U32(ctx, 31, 0x27296Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272964u, 0x27296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27296Cu;
label_27296c:
    // 0x27296c: 0x0  nop
    ctx->pc = 0x27296cu;
    // NOP
label_272970:
    // 0x272970: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x272970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x272974: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x272974u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272978: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x272978u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x27297c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272980: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x272984: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x272984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272988: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27298c: 0x28420154  slti        $v0, $v0, 0x154
    ctx->pc = 0x27298cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)340) ? 1 : 0);
    // 0x272990: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x272990u;
    {
        const bool branch_taken_0x272990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272990) {
            ctx->pc = 0x2727F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2727f8;
        }
    }
    ctx->pc = 0x272998u;
    // 0x272998: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272998u;
    SET_GPR_U32(ctx, 31, 0x2729A0u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272998u, 0x2729A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729A0u;
label_2729a0:
    // 0x2729a0: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x2729a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2729a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2729a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2729a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2729a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2729ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2729acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2729b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2729b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2729b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2729b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2729b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2729b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2729bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2729BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2729BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2729C4u;
}
