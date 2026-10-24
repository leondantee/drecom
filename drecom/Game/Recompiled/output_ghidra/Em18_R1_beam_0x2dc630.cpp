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

// Function: Em18_R1_beam
// Address: 0x2dc630 - 0x2dd1fc
void Em18_R1_beam_0x2dc630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_beam_0x2dc630");
#endif

    switch (ctx->pc) {
        case 0x2dc6b8u: goto label_2dc6b8;
        case 0x2dc730u: goto label_2dc730;
        case 0x2dc75cu: goto label_2dc75c;
        case 0x2dc778u: goto label_2dc778;
        case 0x2dc784u: goto label_2dc784;
        case 0x2dc798u: goto label_2dc798;
        case 0x2dc7a4u: goto label_2dc7a4;
        case 0x2dc7c4u: goto label_2dc7c4;
        case 0x2dc7e0u: goto label_2dc7e0;
        case 0x2dc7fcu: goto label_2dc7fc;
        case 0x2dc890u: goto label_2dc890;
        case 0x2dc908u: goto label_2dc908;
        case 0x2dc930u: goto label_2dc930;
        case 0x2dc954u: goto label_2dc954;
        case 0x2dc968u: goto label_2dc968;
        case 0x2dcb44u: goto label_2dcb44;
        case 0x2dcb68u: goto label_2dcb68;
        case 0x2dcb7cu: goto label_2dcb7c;
        case 0x2dcc34u: goto label_2dcc34;
        case 0x2dcc48u: goto label_2dcc48;
        case 0x2dcc5cu: goto label_2dcc5c;
        case 0x2dcc7cu: goto label_2dcc7c;
        case 0x2dcc98u: goto label_2dcc98;
        case 0x2dcca4u: goto label_2dcca4;
        case 0x2dcce8u: goto label_2dcce8;
        case 0x2dccfcu: goto label_2dccfc;
        case 0x2dcd18u: goto label_2dcd18;
        case 0x2dcd28u: goto label_2dcd28;
        case 0x2dcd3cu: goto label_2dcd3c;
        case 0x2dcd58u: goto label_2dcd58;
        case 0x2dcd64u: goto label_2dcd64;
        case 0x2dcd7cu: goto label_2dcd7c;
        case 0x2dcda4u: goto label_2dcda4;
        case 0x2dcdb4u: goto label_2dcdb4;
        case 0x2dcdd8u: goto label_2dcdd8;
        case 0x2dcdecu: goto label_2dcdec;
        case 0x2dce08u: goto label_2dce08;
        case 0x2dce14u: goto label_2dce14;
        case 0x2dce2cu: goto label_2dce2c;
        case 0x2dce54u: goto label_2dce54;
        case 0x2dce64u: goto label_2dce64;
        case 0x2dced0u: goto label_2dced0;
        case 0x2dcef8u: goto label_2dcef8;
        case 0x2dcf64u: goto label_2dcf64;
        case 0x2dcfa0u: goto label_2dcfa0;
        case 0x2dcfecu: goto label_2dcfec;
        case 0x2dd028u: goto label_2dd028;
        case 0x2dd0f0u: goto label_2dd0f0;
        case 0x2dd120u: goto label_2dd120;
        case 0x2dd158u: goto label_2dd158;
        case 0x2dd190u: goto label_2dd190;
        default: break;
    }

    ctx->pc = 0x2dc630u;

    // 0x2dc630: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2dc630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2dc634: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2dc634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2dc638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dc638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dc63c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dc63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dc640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dc644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc64c: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x2dc64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x2dc650: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2dc650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2dc654: 0x24740080  addiu       $s4, $v1, 0x80
    ctx->pc = 0x2dc654u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2dc658: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dc658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc65c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2dc65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2dc660: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2dc660u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2dc664: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2dc664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc668: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x2dc668u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2dc66c: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2dc66cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2dc670: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dc670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc674: 0x10e80022  beq         $a3, $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DC674u;
    {
        const bool branch_taken_0x2dc674 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x2dc674) {
            ctx->pc = 0x2DC700u;
            goto label_2dc700;
        }
    }
    ctx->pc = 0x2DC67Cu;
    // 0x2dc67c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC67Cu;
    {
        const bool branch_taken_0x2dc67c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc67c) {
            ctx->pc = 0x2DC68Cu;
            goto label_2dc68c;
        }
    }
    ctx->pc = 0x2DC684u;
    // 0x2dc684: 0x100002d4  b           . + 4 + (0x2D4 << 2)
    ctx->pc = 0x2DC684u;
    {
        const bool branch_taken_0x2dc684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc684) {
            ctx->pc = 0x2DD1D8u;
            goto label_2dd1d8;
        }
    }
    ctx->pc = 0x2DC68Cu;
label_2dc68c:
    // 0x2dc68c: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2dc68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc690: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dc690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc694: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x2dc694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc698: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc69c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dc6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dc6a4: 0x24061e42  addiu       $a2, $zero, 0x1E42
    ctx->pc = 0x2dc6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7746));
    // 0x2dc6a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dc6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc6ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dc6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dc6b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DC6B0u;
    SET_GPR_U32(ctx, 31, 0x2DC6B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DC6B0u, 0x2DC6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6B8u;
label_2dc6b8:
    // 0x2dc6b8: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dc6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc6bc: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2dc6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6c0: 0xa5001278  sh          $zero, 0x1278($t0)
    ctx->pc = 0x2dc6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc6c4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6c8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2dc6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc6cc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6d0: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2dc6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc6d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc6d8: 0x0  nop
    ctx->pc = 0x2dc6d8u;
    // NOP
    // 0x2dc6dc: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2dc6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2dc6e0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2dc6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2dc6e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc6e8: 0x0  nop
    ctx->pc = 0x2dc6e8u;
    // NOP
    // 0x2dc6ec: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2dc6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2dc6f0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6f4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2dc6f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2dc6f8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2dc6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dc6fc: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x2dc6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_2dc700:
    // 0x2dc700: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2dc700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc704: 0x90c709db  lbu         $a3, 0x9DB($a2)
    ctx->pc = 0x2dc704u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2523)));
    // 0x2dc708: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2dc708u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2dc70c: 0x31020020  andi        $v0, $t0, 0x20
    ctx->pc = 0x2dc70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
    // 0x2dc710: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC710u;
    {
        const bool branch_taken_0x2dc710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc710) {
            ctx->pc = 0x2DC764u;
            goto label_2dc764;
        }
    }
    ctx->pc = 0x2DC718u;
    // 0x2dc718: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dc718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc71c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2dc71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2dc720: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dc720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dc724: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dc724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dc728: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DC728u;
    SET_GPR_U32(ctx, 31, 0x2DC730u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DC728u, 0x2DC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC730u;
label_2dc730:
    // 0x2dc730: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc734: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dc734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dc738: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2dc738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2dc73c: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x2dc73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dc740: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2dc740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dc744: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc748: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2dc748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc74c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2dc74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc750: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x2dc750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dc754: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DC754u;
    SET_GPR_U32(ctx, 31, 0x2DC75Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DC754u, 0x2DC75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC75Cu;
label_2dc75c:
    // 0x2dc75c: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2dc75cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc760: 0xe4e000d4  swc1        $f0, 0xD4($a3)
    ctx->pc = 0x2dc760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
label_2dc764:
    // 0x2dc764: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2dc764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc768: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2dc768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2dc76c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc76cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc770: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DC770u;
    SET_GPR_U32(ctx, 31, 0x2DC778u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DC770u, 0x2DC778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC778u;
label_2dc778:
    // 0x2dc778: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc77c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DC77Cu;
    SET_GPR_U32(ctx, 31, 0x2DC784u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DC77Cu, 0x2DC784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC784u;
label_2dc784:
    // 0x2dc784: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2dc784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc788: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2dc788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2dc78c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc78cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc790: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DC790u;
    SET_GPR_U32(ctx, 31, 0x2DC798u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DC790u, 0x2DC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC798u;
label_2dc798:
    // 0x2dc798: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc79c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DC79Cu;
    SET_GPR_U32(ctx, 31, 0x2DC7A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DC79Cu, 0x2DC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7A4u;
label_2dc7a4:
    // 0x2dc7a4: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2dc7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc7a8: 0x90c709df  lbu         $a3, 0x9DF($a2)
    ctx->pc = 0x2dc7a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x2dc7ac: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2dc7acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2dc7b0: 0x31030040  andi        $v1, $t0, 0x40
    ctx->pc = 0x2dc7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x2dc7b4: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2DC7B4u;
    {
        const bool branch_taken_0x2dc7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc7b4) {
            ctx->pc = 0x2DC89Cu;
            goto label_2dc89c;
        }
    }
    ctx->pc = 0x2DC7BCu;
    // 0x2dc7bc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2DC7BCu;
    SET_GPR_U32(ctx, 31, 0x2DC7C4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2DC7BCu, 0x2DC7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7C4u;
label_2dc7c4:
    // 0x2dc7c4: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x2dc7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x2dc7c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dc7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc7cc: 0x0  nop
    ctx->pc = 0x2dc7ccu;
    // NOP
    // 0x2dc7d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dc7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc7d4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2dc7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2dc7d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2DC7D8u;
    SET_GPR_U32(ctx, 31, 0x2DC7E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2DC7D8u, 0x2DC7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7E0u;
label_2dc7e0:
    // 0x2dc7e0: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x2dc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x2dc7e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dc7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc7e8: 0x0  nop
    ctx->pc = 0x2dc7e8u;
    // NOP
    // 0x2dc7ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dc7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc7f0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2dc7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2dc7f4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2DC7F4u;
    SET_GPR_U32(ctx, 31, 0x2DC7FCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2DC7F4u, 0x2DC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7FCu;
label_2dc7fc:
    // 0x2dc7fc: 0x3c0443e1  lui         $a0, 0x43E1
    ctx->pc = 0x2dc7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17377 << 16));
    // 0x2dc800: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dc800u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc804: 0x0  nop
    ctx->pc = 0x2dc804u;
    // NOP
    // 0x2dc808: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dc808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc80c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2dc80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2dc810: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dc810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc818: 0x0  nop
    ctx->pc = 0x2dc818u;
    // NOP
    // 0x2dc81c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2dc81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2dc820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc824: 0x0  nop
    ctx->pc = 0x2dc824u;
    // NOP
    // 0x2dc828: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2dc828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2dc82c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc830: 0x0  nop
    ctx->pc = 0x2dc830u;
    // NOP
    // 0x2dc834: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2dc834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2dc838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc83c: 0x0  nop
    ctx->pc = 0x2dc83cu;
    // NOP
    // 0x2dc840: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2dc840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2dc844: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2dc844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2dc848: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2dc848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2dc84c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc850: 0x0  nop
    ctx->pc = 0x2dc850u;
    // NOP
    // 0x2dc854: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2dc854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2dc858: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2dc858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2dc85c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2dc85cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dc860: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x2dc860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
    // 0x2dc864: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2dc864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dc868: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2dc868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2dc86c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2dc86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dc870: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dc870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dc874: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dc874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dc878: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc87c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2dc87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dc880: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2dc880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dc884: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2dc884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dc888: 0xc086584  jal         func_219610
    ctx->pc = 0x2DC888u;
    SET_GPR_U32(ctx, 31, 0x2DC890u);
    ctx->pc = 0x219610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219610u, 0x2DC888u, 0x2DC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC890u;
label_2dc890:
    // 0x2dc890: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc894: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dc894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc898: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x2dc898u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
label_2dc89c:
    // 0x2dc89c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dc89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc8a0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dc8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dc8a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc8a8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dc8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dc8ac: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2DC8ACu;
    {
        const bool branch_taken_0x2dc8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8ac) {
            ctx->pc = 0x2DCA04u;
            goto label_2dca04;
        }
    }
    ctx->pc = 0x2DC8B4u;
    // 0x2dc8b4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2dc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2dc8b8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc8bc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2dc8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc8c0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc8c4: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2dc8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc8c8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2dc8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2dc8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc8d0: 0x0  nop
    ctx->pc = 0x2dc8d0u;
    // NOP
    // 0x2dc8d4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2dc8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2dc8d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc8dc: 0x0  nop
    ctx->pc = 0x2dc8dcu;
    // NOP
    // 0x2dc8e0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dc8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2dc8e4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc8e8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2dc8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc8ec: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2dc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2dc8f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dc8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dc8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc8f8: 0x0  nop
    ctx->pc = 0x2dc8f8u;
    // NOP
    // 0x2dc8fc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2dc8fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dc900: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2DC900u;
    SET_GPR_U32(ctx, 31, 0x2DC908u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2DC900u, 0x2DC908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC908u;
label_2dc908:
    // 0x2dc908: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2dc908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2dc90c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dc90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dc910: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2dc910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2dc914: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc918: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dc918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dc91c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dc920: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2dc920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2dc924: 0x244607b0  addiu       $a2, $v0, 0x7B0
    ctx->pc = 0x2dc924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x2dc928: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DC928u;
    SET_GPR_U32(ctx, 31, 0x2DC930u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DC928u, 0x2DC930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC930u;
label_2dc930:
    // 0x2dc930: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2dc930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc934: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dc934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc938: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2dc938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc93c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2dc93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc940: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dc940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc944: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dc944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc948: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2dc948u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2dc94c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x2DC94Cu;
    SET_GPR_U32(ctx, 31, 0x2DC954u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2DC94Cu, 0x2DC954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC954u;
label_2dc954:
    // 0x2dc954: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2dc954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2dc958: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2dc958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc95c: 0xc7ad00f4  lwc1        $f13, 0xF4($sp)
    ctx->pc = 0x2dc95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dc960: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DC960u;
    SET_GPR_U32(ctx, 31, 0x2DC968u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DC960u, 0x2DC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC968u;
label_2dc968:
    // 0x2dc968: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dc968u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2dc96c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2dc96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2dc970: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x2dc970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc978: 0x0  nop
    ctx->pc = 0x2dc978u;
    // NOP
    // 0x2dc97c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc980: 0x0  nop
    ctx->pc = 0x2dc980u;
    // NOP
    // 0x2dc984: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2DC984u;
    {
        const bool branch_taken_0x2dc984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc984) {
            ctx->pc = 0x2DC9CCu;
            goto label_2dc9cc;
        }
    }
    ctx->pc = 0x2DC98Cu;
    // 0x2dc98c: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x2dc98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc990: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2dc990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2dc994: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2dc994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2dc998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc99c: 0x0  nop
    ctx->pc = 0x2dc99cu;
    // NOP
    // 0x2dc9a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc9a4: 0x0  nop
    ctx->pc = 0x2dc9a4u;
    // NOP
    // 0x2dc9a8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2DC9A8u;
    {
        const bool branch_taken_0x2dc9a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc9a8) {
            ctx->pc = 0x2DCA04u;
            goto label_2dca04;
        }
    }
    ctx->pc = 0x2DC9B0u;
    // 0x2dc9b0: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2dc9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2dc9b4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2dc9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2dc9b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc9b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc9bc: 0x0  nop
    ctx->pc = 0x2dc9bcu;
    // NOP
    // 0x2dc9c0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2dc9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2dc9c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DC9C4u;
    {
        const bool branch_taken_0x2dc9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc9c4) {
            ctx->pc = 0x2DCA04u;
            goto label_2dca04;
        }
    }
    ctx->pc = 0x2DC9CCu;
label_2dc9cc:
    // 0x2dc9cc: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x2dc9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc9d0: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x2dc9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x2dc9d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2dc9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2dc9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc9dc: 0x0  nop
    ctx->pc = 0x2dc9dcu;
    // NOP
    // 0x2dc9e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dc9e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc9e4: 0x0  nop
    ctx->pc = 0x2dc9e4u;
    // NOP
    // 0x2dc9e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC9E8u;
    {
        const bool branch_taken_0x2dc9e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc9e8) {
            ctx->pc = 0x2DCA04u;
            goto label_2dca04;
        }
    }
    ctx->pc = 0x2DC9F0u;
    // 0x2dc9f0: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x2dc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x2dc9f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2dc9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2dc9f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc9fc: 0x0  nop
    ctx->pc = 0x2dc9fcu;
    // NOP
    // 0x2dca00: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2dca00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_2dca04:
    // 0x2dca04: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dca08: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2dca08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2dca0c: 0x1060013a  beqz        $v1, . + 4 + (0x13A << 2)
    ctx->pc = 0x2DCA0Cu;
    {
        const bool branch_taken_0x2dca0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dca0c) {
            ctx->pc = 0x2DCEF8u;
            goto label_2dcef8;
        }
    }
    ctx->pc = 0x2DCA14u;
    // 0x2dca14: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dca18: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x2dca18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2dca1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dca20: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x2dca20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dca24: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2dca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dca28: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2dca28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2dca2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dca30: 0x0  nop
    ctx->pc = 0x2dca30u;
    // NOP
    // 0x2dca34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dca34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dca38: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2dca38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2dca3c: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2dca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dca40: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2dca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2dca44: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2dca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2dca48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dca48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dca4c: 0x0  nop
    ctx->pc = 0x2dca4cu;
    // NOP
    // 0x2dca50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dca50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dca54: 0x0  nop
    ctx->pc = 0x2dca54u;
    // NOP
    // 0x2dca58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCA58u;
    {
        const bool branch_taken_0x2dca58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dca58) {
            ctx->pc = 0x2DCA74u;
            goto label_2dca74;
        }
    }
    ctx->pc = 0x2DCA60u;
    // 0x2dca60: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2dca60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2dca64: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2dca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2dca68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dca68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dca6c: 0x0  nop
    ctx->pc = 0x2dca6cu;
    // NOP
    // 0x2dca70: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2dca70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_2dca74:
    // 0x2dca74: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dca78: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2dca78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2dca7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dca7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dca80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dca80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dca84: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x2dca84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2dca88: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DCA88u;
    {
        const bool branch_taken_0x2dca88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dca88) {
            ctx->pc = 0x2DCAE0u;
            goto label_2dcae0;
        }
    }
    ctx->pc = 0x2DCA90u;
    // 0x2dca90: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2dca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dca94: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2dca94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2dca98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dca98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dca9c: 0x0  nop
    ctx->pc = 0x2dca9cu;
    // NOP
    // 0x2dcaa0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dcaa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dcaa4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dcaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2dcaa8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2dcaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcaac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcab4: 0x0  nop
    ctx->pc = 0x2dcab4u;
    // NOP
    // 0x2dcab8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dcab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcabc: 0x0  nop
    ctx->pc = 0x2dcabcu;
    // NOP
    // 0x2dcac0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2DCAC0u;
    {
        const bool branch_taken_0x2dcac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcac0) {
            ctx->pc = 0x2DCB20u;
            goto label_2dcb20;
        }
    }
    ctx->pc = 0x2DCAC8u;
    // 0x2dcac8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcacc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcad0: 0x0  nop
    ctx->pc = 0x2dcad0u;
    // NOP
    // 0x2dcad4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dcad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2dcad8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DCAD8u;
    {
        const bool branch_taken_0x2dcad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcad8) {
            ctx->pc = 0x2DCB20u;
            goto label_2dcb20;
        }
    }
    ctx->pc = 0x2DCAE0u;
label_2dcae0:
    // 0x2dcae0: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2dcae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcae4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2dcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2dcae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcaec: 0x0  nop
    ctx->pc = 0x2dcaecu;
    // NOP
    // 0x2dcaf0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dcaf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dcaf4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dcaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2dcaf8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2dcaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcafc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcb00: 0x0  nop
    ctx->pc = 0x2dcb00u;
    // NOP
    // 0x2dcb04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dcb04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcb08: 0x0  nop
    ctx->pc = 0x2dcb08u;
    // NOP
    // 0x2dcb0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCB0Cu;
    {
        const bool branch_taken_0x2dcb0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcb0c) {
            ctx->pc = 0x2DCB20u;
            goto label_2dcb20;
        }
    }
    ctx->pc = 0x2DCB14u;
    // 0x2dcb14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcb18: 0x0  nop
    ctx->pc = 0x2dcb18u;
    // NOP
    // 0x2dcb1c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dcb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_2dcb20:
    // 0x2dcb20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dcb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dcb24: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2dcb24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2dcb28: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dcb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcb2c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dcb30: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dcb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcb34: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2dcb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2dcb38: 0x244607b0  addiu       $a2, $v0, 0x7B0
    ctx->pc = 0x2dcb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x2dcb3c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DCB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB44u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DCB3Cu, 0x2DCB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB44u;
label_2dcb44:
    // 0x2dcb44: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2dcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcb48: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dcb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcb4c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2dcb4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dcb50: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2dcb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcb54: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dcb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcb58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dcb58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dcb5c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2dcb5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2dcb60: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x2DCB60u;
    SET_GPR_U32(ctx, 31, 0x2DCB68u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2DCB60u, 0x2DCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB68u;
label_2dcb68:
    // 0x2dcb68: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2dcb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2dcb6c: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2dcb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcb70: 0xc7ad00f4  lwc1        $f13, 0xF4($sp)
    ctx->pc = 0x2dcb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dcb74: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DCB74u;
    SET_GPR_U32(ctx, 31, 0x2DCB7Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DCB74u, 0x2DCB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB7Cu;
label_2dcb7c:
    // 0x2dcb7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dcb7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2dcb80: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2dcb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2dcb84: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dcb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcb88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcb88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcb8c: 0x0  nop
    ctx->pc = 0x2dcb8cu;
    // NOP
    // 0x2dcb90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dcb90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcb94: 0x0  nop
    ctx->pc = 0x2dcb94u;
    // NOP
    // 0x2dcb98: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2DCB98u;
    {
        const bool branch_taken_0x2dcb98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcb98) {
            ctx->pc = 0x2DCBE0u;
            goto label_2dcbe0;
        }
    }
    ctx->pc = 0x2DCBA0u;
    // 0x2dcba0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dcba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcba4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2dcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2dcba8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcbb0: 0x0  nop
    ctx->pc = 0x2dcbb0u;
    // NOP
    // 0x2dcbb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dcbb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcbb8: 0x0  nop
    ctx->pc = 0x2dcbb8u;
    // NOP
    // 0x2dcbbc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2DCBBCu;
    {
        const bool branch_taken_0x2dcbbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcbbc) {
            ctx->pc = 0x2DCC18u;
            goto label_2dcc18;
        }
    }
    ctx->pc = 0x2DCBC4u;
    // 0x2dcbc4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2dcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2dcbc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcbd0: 0x0  nop
    ctx->pc = 0x2dcbd0u;
    // NOP
    // 0x2dcbd4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2dcbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2dcbd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DCBD8u;
    {
        const bool branch_taken_0x2dcbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcbd8) {
            ctx->pc = 0x2DCC18u;
            goto label_2dcc18;
        }
    }
    ctx->pc = 0x2DCBE0u;
label_2dcbe0:
    // 0x2dcbe0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dcbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcbe4: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x2dcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x2dcbe8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcbec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcbf0: 0x0  nop
    ctx->pc = 0x2dcbf0u;
    // NOP
    // 0x2dcbf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dcbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcbf8: 0x0  nop
    ctx->pc = 0x2dcbf8u;
    // NOP
    // 0x2dcbfc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCBFCu;
    {
        const bool branch_taken_0x2dcbfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcbfc) {
            ctx->pc = 0x2DCC18u;
            goto label_2dcc18;
        }
    }
    ctx->pc = 0x2DCC04u;
    // 0x2dcc04: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x2dcc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x2dcc08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcc0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcc10: 0x0  nop
    ctx->pc = 0x2dcc10u;
    // NOP
    // 0x2dcc14: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2dcc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2dcc18:
    // 0x2dcc18: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x2dcc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x2dcc1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcc20: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dcc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dcc24: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x2dcc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcc28: 0xc60d009c  lwc1        $f13, 0x9C($s0)
    ctx->pc = 0x2dcc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dcc2c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DCC2Cu;
    SET_GPR_U32(ctx, 31, 0x2DCC34u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DCC2Cu, 0x2DCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC34u;
label_2dcc34:
    // 0x2dcc34: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2dcc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2dcc38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dcc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dcc3c: 0xc60c009c  lwc1        $f12, 0x9C($s0)
    ctx->pc = 0x2dcc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcc40: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x2DCC40u;
    SET_GPR_U32(ctx, 31, 0x2DCC48u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x2DCC40u, 0x2DCC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC48u;
label_2dcc48:
    // 0x2dcc48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dcc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dcc4c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dcc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dcc50: 0xc60c0098  lwc1        $f12, 0x98($s0)
    ctx->pc = 0x2dcc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcc54: 0xc067808  jal         func_19E020
    ctx->pc = 0x2DCC54u;
    SET_GPR_U32(ctx, 31, 0x2DCC5Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x2DCC54u, 0x2DCC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC5Cu;
label_2dcc5c:
    // 0x2dcc5c: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2dcc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcc60: 0x3c023cd6  lui         $v0, 0x3CD6
    ctx->pc = 0x2dcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15574 << 16));
    // 0x2dcc64: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2dcc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2dcc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcc6c: 0x0  nop
    ctx->pc = 0x2dcc6cu;
    // NOP
    // 0x2dcc70: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2dcc70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dcc74: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2DCC74u;
    SET_GPR_U32(ctx, 31, 0x2DCC7Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2DCC74u, 0x2DCC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC7Cu;
label_2dcc7c:
    // 0x2dcc7c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2dcc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2dcc80: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcc84: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dcc88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2dcc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2dcc8c: 0x244507b0  addiu       $a1, $v0, 0x7B0
    ctx->pc = 0x2dcc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x2dcc90: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCC90u;
    SET_GPR_U32(ctx, 31, 0x2DCC98u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCC98u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCC98u) { return; }
    ctx->pc = 0x2DCC98u;
label_2dcc98:
    // 0x2dcc98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dcc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcc9c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DCC9Cu;
    SET_GPR_U32(ctx, 31, 0x2DCCA4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DCC9Cu, 0x2DCCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCCA4u;
label_2dcca4:
    // 0x2dcca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcca8: 0x0  nop
    ctx->pc = 0x2dcca8u;
    // NOP
    // 0x2dccac: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2dccacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2dccb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dccb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dccb4: 0x0  nop
    ctx->pc = 0x2dccb4u;
    // NOP
    // 0x2dccb8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2dccb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2dccbc: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2dccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dccc0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2dccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2dccc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dccc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dccc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcccc: 0x0  nop
    ctx->pc = 0x2dccccu;
    // NOP
    // 0x2dccd0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2dccd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2dccd4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dccd8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dccdc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dccdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcce0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2DCCE0u;
    SET_GPR_U32(ctx, 31, 0x2DCCE8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2DCCE8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCCE8u) { return; }
    ctx->pc = 0x2DCCE8u;
label_2dcce8:
    // 0x2dcce8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2dcce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dccec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dccf0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2dccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dccf4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2DCCF4u;
    SET_GPR_U32(ctx, 31, 0x2DCCFCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2DCCFCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCCFCu) { return; }
    ctx->pc = 0x2DCCFCu;
label_2dccfc:
    // 0x2dccfc: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2dccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2dcd00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dcd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dcd04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dcd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcd08: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2dcd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcd0c: 0xc60d0094  lwc1        $f13, 0x94($s0)
    ctx->pc = 0x2dcd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dcd10: 0xc0c8b6c  jal         func_322DB0
    ctx->pc = 0x2DCD10u;
    SET_GPR_U32(ctx, 31, 0x2DCD18u);
    ctx->pc = 0x322DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322DB0u, 0x2DCD10u, 0x2DCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD18u;
label_2dcd18:
    // 0x2dcd18: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dcd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dcd1c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2dcd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcd20: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCD20u;
    SET_GPR_U32(ctx, 31, 0x2DCD28u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCD28u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCD28u) { return; }
    ctx->pc = 0x2DCD28u;
label_2dcd28:
    // 0x2dcd28: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2dcd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcd2c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2dcd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcd30: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dcd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcd34: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DCD34u;
    SET_GPR_U32(ctx, 31, 0x2DCD3Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DCD34u, 0x2DCD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD3Cu;
label_2dcd3c:
    // 0x2dcd3c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2dcd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x2dcd40: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2dcd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x2dcd44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dcd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dcd48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2dcd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcd4c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2dcd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcd50: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2DCD50u;
    SET_GPR_U32(ctx, 31, 0x2DCD58u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2DCD58u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCD58u) { return; }
    ctx->pc = 0x2DCD58u;
label_2dcd58:
    // 0x2dcd58: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2dcd58u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcd5c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DCD5Cu;
    {
        const bool branch_taken_0x2dcd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd5c) {
            ctx->pc = 0x2DCDB8u;
            goto label_2dcdb8;
        }
    }
    ctx->pc = 0x2DCD64u;
label_2dcd64:
    // 0x2dcd64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dcd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dcd68: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2dcd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dcd6c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2dcd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcd70: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x2dcd70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x2dcd74: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2DCD74u;
    SET_GPR_U32(ctx, 31, 0x2DCD7Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2DCD74u, 0x2DCD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD7Cu;
label_2dcd7c:
    // 0x2dcd7c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2dcd7cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dcd80: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DCD80u;
    {
        const bool branch_taken_0x2dcd80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd80) {
            ctx->pc = 0x2DCDC8u;
            goto label_2dcdc8;
        }
    }
    ctx->pc = 0x2DCD88u;
    // 0x2dcd88: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2dcd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2dcd8c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2dcd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dcd90: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2dcd90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcd94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2dcd94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcd98: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2dcd98u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcd9c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2DCD9Cu;
    SET_GPR_U32(ctx, 31, 0x2DCDA4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2DCD9Cu, 0x2DCDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDA4u;
label_2dcda4:
    // 0x2dcda4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dcda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dcda8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2dcda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dcdac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCDACu;
    SET_GPR_U32(ctx, 31, 0x2DCDB4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCDB4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCDB4u) { return; }
    ctx->pc = 0x2DCDB4u;
label_2dcdb4:
    // 0x2dcdb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dcdb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2dcdb8:
    // 0x2dcdb8: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2dcdb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2dcdbc: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2DCDBCu;
    {
        const bool branch_taken_0x2dcdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdbc) {
            ctx->pc = 0x2DCD64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcd64;
        }
    }
    ctx->pc = 0x2DCDC4u;
    // 0x2dcdc4: 0x0  nop
    ctx->pc = 0x2dcdc4u;
    // NOP
label_2dcdc8:
    // 0x2dcdc8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dcdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dcdcc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2dcdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcdd0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCDD0u;
    SET_GPR_U32(ctx, 31, 0x2DCDD8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCDD8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCDD8u) { return; }
    ctx->pc = 0x2DCDD8u;
label_2dcdd8:
    // 0x2dcdd8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2dcdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcddc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2dcddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcde0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2dcde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcde4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DCDE4u;
    SET_GPR_U32(ctx, 31, 0x2DCDECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DCDE4u, 0x2DCDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDECu;
label_2dcdec:
    // 0x2dcdec: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2dcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x2dcdf0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2dcdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x2dcdf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dcdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dcdf8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2dcdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcdfc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2dcdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dce00: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2DCE00u;
    SET_GPR_U32(ctx, 31, 0x2DCE08u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2DCE08u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCE08u) { return; }
    ctx->pc = 0x2DCE08u;
label_2dce08:
    // 0x2dce08: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2dce08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dce0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DCE0Cu;
    {
        const bool branch_taken_0x2dce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce0c) {
            ctx->pc = 0x2DCE68u;
            goto label_2dce68;
        }
    }
    ctx->pc = 0x2DCE14u;
label_2dce14:
    // 0x2dce14: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dce18: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2dce18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dce1c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dce1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dce20: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x2dce20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x2dce24: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2DCE24u;
    SET_GPR_U32(ctx, 31, 0x2DCE2Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2DCE24u, 0x2DCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE2Cu;
label_2dce2c:
    // 0x2dce2c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2dce2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dce30: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DCE30u;
    {
        const bool branch_taken_0x2dce30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce30) {
            ctx->pc = 0x2DCE78u;
            goto label_2dce78;
        }
    }
    ctx->pc = 0x2DCE38u;
    // 0x2dce38: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2dce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2dce3c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2dce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dce40: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2dce40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dce44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2dce44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dce48: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2dce48u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dce4c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2DCE4Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE54u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2DCE4Cu, 0x2DCE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE54u;
label_2dce54:
    // 0x2dce54: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dce58: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2dce58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dce5c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCE5Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE64u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCE64u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCE64u) { return; }
    ctx->pc = 0x2DCE64u;
label_2dce64:
    // 0x2dce64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dce64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2dce68:
    // 0x2dce68: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2dce68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2dce6c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2DCE6Cu;
    {
        const bool branch_taken_0x2dce6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dce6c) {
            ctx->pc = 0x2DCE14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dce14;
        }
    }
    ctx->pc = 0x2DCE74u;
    // 0x2dce74: 0x0  nop
    ctx->pc = 0x2dce74u;
    // NOP
label_2dce78:
    // 0x2dce78: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dce78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dce7c: 0x24538e20  addiu       $s3, $v0, -0x71E0
    ctx->pc = 0x2dce7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938144));
    // 0x2dce80: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2dce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dce84: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2dce84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388E20u, _value); } while (0);
    // 0x2dce88: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2dce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dce8c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2dce8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388E24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388E24u, _value); } while (0);
    // 0x2dce90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dce90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dce94: 0x9022edae  lbu         $v0, -0x1252($at)
    ctx->pc = 0x2dce94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x2dce98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DCE98u;
    {
        const bool branch_taken_0x2dce98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce98) {
            ctx->pc = 0x2DCEB0u;
            goto label_2dceb0;
        }
    }
    ctx->pc = 0x2DCEA0u;
    // 0x2dcea0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcea4: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2dcea4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dcea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCEA8u;
    {
        const bool branch_taken_0x2dcea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcea8) {
            ctx->pc = 0x2DCEBCu;
            goto label_2dcebc;
        }
    }
    ctx->pc = 0x2DCEB0u;
label_2dceb0:
    // 0x2dceb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dceb4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dceb8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dceb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_2dcebc:
    // 0x2dcebc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dcebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcec0: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x2dcec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2dcec4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2dcec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dcec8: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x2DCEC8u;
    SET_GPR_U32(ctx, 31, 0x2DCED0u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x2DCEC8u, 0x2DCED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCED0u;
label_2dced0:
    // 0x2dced0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dced0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dced4: 0x9023edae  lbu         $v1, -0x1252($at)
    ctx->pc = 0x2dced4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x2dced8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCED8u;
    {
        const bool branch_taken_0x2dced8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dced8) {
            ctx->pc = 0x2DCEF8u;
            goto label_2dcef8;
        }
    }
    ctx->pc = 0x2DCEE0u;
    // 0x2dcee0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dcee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcee4: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dcee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dcee8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DCEE8u;
    {
        const bool branch_taken_0x2dcee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcee8) {
            ctx->pc = 0x2DCEF8u;
            goto label_2dcef8;
        }
    }
    ctx->pc = 0x2DCEF0u;
    // 0x2dcef0: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DCEF0u;
    SET_GPR_U32(ctx, 31, 0x2DCEF8u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DCEF0u, 0x2DCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEF8u;
label_2dcef8:
    // 0x2dcef8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dcef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcefc: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2dcefcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2dcf00: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2DCF00u;
    {
        const bool branch_taken_0x2dcf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf00) {
            ctx->pc = 0x2DD030u;
            goto label_2dd030;
        }
    }
    ctx->pc = 0x2DCF08u;
    // 0x2dcf08: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2dcf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcf0c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2dcf10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf14: 0x0  nop
    ctx->pc = 0x2dcf14u;
    // NOP
    // 0x2dcf18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dcf18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dcf1c: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2dcf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2dcf20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcf20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf24: 0x0  nop
    ctx->pc = 0x2dcf24u;
    // NOP
    // 0x2dcf28: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dcf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2dcf2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf30: 0x0  nop
    ctx->pc = 0x2dcf30u;
    // NOP
    // 0x2dcf34: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2dcf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2dcf38: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2dcf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2dcf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf40: 0x0  nop
    ctx->pc = 0x2dcf40u;
    // NOP
    // 0x2dcf44: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dcf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2dcf48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dcf4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf50: 0x0  nop
    ctx->pc = 0x2dcf50u;
    // NOP
    // 0x2dcf54: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2dcf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2dcf58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2dcf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcf5c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DCF5Cu;
    SET_GPR_U32(ctx, 31, 0x2DCF64u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DCF5Cu, 0x2DCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF64u;
label_2dcf64:
    // 0x2dcf64: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2dcf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcf68: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2dcf68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dcf6c: 0x3c144300  lui         $s4, 0x4300
    ctx->pc = 0x2dcf6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcf70: 0x44947000  mtc1        $s4, $f14
    ctx->pc = 0x2dcf70u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dcf74: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2dcf74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2dcf78: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2dcf78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dcf7c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dcf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcf80: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2dcf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dcf84: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dcf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcf88: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dcf88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcf8c: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dcf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcf90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dcf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcf94: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dcf94u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcf98: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DCF98u;
    SET_GPR_U32(ctx, 31, 0x2DCFA0u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DCF98u, 0x2DCFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFA0u;
label_2dcfa0:
    // 0x2dcfa0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcfa4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dcfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dcfa8: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2dcfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcfac: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2dcfacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dcfb0: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2dcfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x2dcfb4: 0x44857800  mtc1        $a1, $f15
    ctx->pc = 0x2dcfb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dcfb8: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2dcfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcfbc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2dcfbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2dcfc0: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2dcfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dcfc4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2dcfc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2dcfc8: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2dcfc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcfcc: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2dcfccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2dcfd0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2dcfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcfd4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2dcfd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dcfd8: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dcfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcfdc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dcfdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcfe0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dcfe0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcfe4: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DCFE4u;
    SET_GPR_U32(ctx, 31, 0x2DCFECu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DCFE4u, 0x2DCFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFECu;
label_2dcfec:
    // 0x2dcfec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcff0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dcff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dcff4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcff8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dcff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dcffc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2dcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2dd000: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dd000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dd004: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dd004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd008: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2dd008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dd00c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dd00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dd010: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dd010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd014: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dd014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd018: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dd018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd01c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dd01cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd020: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DD020u;
    SET_GPR_U32(ctx, 31, 0x2DD028u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DD020u, 0x2DD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD028u;
label_2dd028:
    // 0x2dd028: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2DD028u;
    {
        const bool branch_taken_0x2dd028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd028) {
            ctx->pc = 0x2DD194u;
            goto label_2dd194;
        }
    }
    ctx->pc = 0x2DD030u;
label_2dd030:
    // 0x2dd030: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2dd030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd038: 0x0  nop
    ctx->pc = 0x2dd038u;
    // NOP
    // 0x2dd03c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dd03cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd040: 0x0  nop
    ctx->pc = 0x2dd040u;
    // NOP
    // 0x2dd044: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x2DD044u;
    {
        const bool branch_taken_0x2dd044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd044) {
            ctx->pc = 0x2DD194u;
            goto label_2dd194;
        }
    }
    ctx->pc = 0x2DD04Cu;
    // 0x2dd04c: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2dd04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd050: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2dd050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2dd054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd058: 0x0  nop
    ctx->pc = 0x2dd058u;
    // NOP
    // 0x2dd05c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dd060: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2dd060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2dd064: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2dd064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd068: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x2dd068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x2dd06c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dd06cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd070: 0x0  nop
    ctx->pc = 0x2dd070u;
    // NOP
    // 0x2dd074: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dd074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dd078: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2dd078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2dd07c: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2dd07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd084: 0x0  nop
    ctx->pc = 0x2dd084u;
    // NOP
    // 0x2dd088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dd088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd08c: 0x0  nop
    ctx->pc = 0x2dd08cu;
    // NOP
    // 0x2dd090: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x2DD090u;
    {
        const bool branch_taken_0x2dd090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd090) {
            ctx->pc = 0x2DD194u;
            goto label_2dd194;
        }
    }
    ctx->pc = 0x2DD098u;
    // 0x2dd098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd09c: 0x0  nop
    ctx->pc = 0x2dd09cu;
    // NOP
    // 0x2dd0a0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dd0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2dd0a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd0a8: 0x0  nop
    ctx->pc = 0x2dd0a8u;
    // NOP
    // 0x2dd0ac: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2dd0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2dd0b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2dd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2dd0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dd0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd0b8: 0x0  nop
    ctx->pc = 0x2dd0b8u;
    // NOP
    // 0x2dd0bc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dd0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2dd0c0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2dd0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2dd0c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dd0c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd0c8: 0x0  nop
    ctx->pc = 0x2dd0c8u;
    // NOP
    // 0x2dd0cc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2dd0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2dd0d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2dd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2dd0d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dd0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd0d8: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x2dd0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd0dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dd0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dd0e0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2dd0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2dd0e4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2dd0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd0e8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DD0E8u;
    SET_GPR_U32(ctx, 31, 0x2DD0F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DD0E8u, 0x2DD0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0F0u;
label_2dd0f0:
    // 0x2dd0f0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dd0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd0f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd0f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd0f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dd0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dd0fc: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dd0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd100: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dd100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd104: 0xc7ad00fc  lwc1        $f13, 0xFC($sp)
    ctx->pc = 0x2dd104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dd108: 0xc7ae00fc  lwc1        $f14, 0xFC($sp)
    ctx->pc = 0x2dd108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2dd10c: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2dd10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2dd110: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dd110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd114: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dd114u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd118: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DD118u;
    SET_GPR_U32(ctx, 31, 0x2DD120u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DD118u, 0x2DD120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD120u;
label_2dd120:
    // 0x2dd120: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dd120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd124: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd124u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd128: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2dd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dd12c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2dd12cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd130: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dd130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd134: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dd134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd138: 0xc7ad00fc  lwc1        $f13, 0xFC($sp)
    ctx->pc = 0x2dd138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dd13c: 0xc7ae00fc  lwc1        $f14, 0xFC($sp)
    ctx->pc = 0x2dd13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2dd140: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2dd140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2dd144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd148: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2dd148u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd14c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dd14cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd150: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DD150u;
    SET_GPR_U32(ctx, 31, 0x2DD158u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DD150u, 0x2DD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD158u;
label_2dd158:
    // 0x2dd158: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2dd158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd15c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2dd160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd164: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd164u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd168: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dd168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dd16c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dd16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd170: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dd170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd174: 0xc7ad00fc  lwc1        $f13, 0xFC($sp)
    ctx->pc = 0x2dd174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dd178: 0xc7ae00fc  lwc1        $f14, 0xFC($sp)
    ctx->pc = 0x2dd178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2dd17c: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2dd17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2dd180: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dd180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd184: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dd184u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd188: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DD188u;
    SET_GPR_U32(ctx, 31, 0x2DD190u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DD188u, 0x2DD190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD190u;
label_2dd190:
    // 0x2dd190: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd190u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd194:
    // 0x2dd194: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd198: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dd198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dd19c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DD19Cu;
    {
        const bool branch_taken_0x2dd19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd19c) {
            ctx->pc = 0x2DD1D8u;
            goto label_2dd1d8;
        }
    }
    ctx->pc = 0x2DD1A4u;
    // 0x2dd1a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dd1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd1a8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dd1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dd1b0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1b4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dd1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd1b8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dd1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd1c0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dd1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd1c8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dd1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dd1d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd1d4: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x2dd1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
label_2dd1d8:
    // 0x2dd1d8: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2dd1d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd1dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dd1dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd1e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd1e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd1e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd1e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd1e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd1ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd1f0: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2dd1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2dd1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD1FCu;
}
