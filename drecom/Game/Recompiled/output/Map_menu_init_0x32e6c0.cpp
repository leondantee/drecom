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

// Function: Map_menu_init
// Address: 0x32e6c0 - 0x32e8a0
void Map_menu_init_0x32e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Map_menu_init_0x32e6c0");
#endif

    switch (ctx->pc) {
        case 0x32e784u: goto label_32e784;
        case 0x32e850u: goto label_32e850;
        case 0x32e870u: goto label_32e870;
        default: break;
    }

    ctx->pc = 0x32e6c0u;

    // 0x32e6c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32e6c4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x32e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x32e6c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32e6cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32e6d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32e6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32e6d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32e6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32e6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32e6dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32e6e0: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x32e6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x32e6e4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32e6e8: 0x2454fe10  addiu       $s4, $v0, -0x1F0
    ctx->pc = 0x32e6e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x32e6ec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32e6f0: 0x2453dbc0  addiu       $s3, $v0, -0x2440
    ctx->pc = 0x32e6f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x32e6f4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x32e6f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32e6f8: 0xae006870  sw          $zero, 0x6870($s0)
    ctx->pc = 0x32e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 0));
    // 0x32e6fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32e700: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x32e700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x32e704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32e708: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x32e708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x32e70c: 0x8e820258  lw          $v0, 0x258($s4)
    ctx->pc = 0x32e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 600)));
    // 0x32e710: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e714: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e714u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e718: 0xa20265ae  sb          $v0, 0x65AE($s0)
    ctx->pc = 0x32e718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26030), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e71c: 0x8e82025c  lw          $v0, 0x25C($s4)
    ctx->pc = 0x32e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 604)));
    // 0x32e720: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e724: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e724u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e728: 0xa20265af  sb          $v0, 0x65AF($s0)
    ctx->pc = 0x32e728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26031), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e72c: 0x240200d8  addiu       $v0, $zero, 0xD8
    ctx->pc = 0x32e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x32e730: 0xae026610  sw          $v0, 0x6610($s0)
    ctx->pc = 0x32e730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26128), GPR_U32(ctx, 2));
    // 0x32e734: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x32e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x32e738: 0xae026614  sw          $v0, 0x6614($s0)
    ctx->pc = 0x32e738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26132), GPR_U32(ctx, 2));
    // 0x32e73c: 0x820265ae  lb          $v0, 0x65AE($s0)
    ctx->pc = 0x32e73cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26030)));
    // 0x32e740: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x32e740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e744: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32e744u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32e748: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x32e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32e74c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32e750: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32e750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32e754: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32e758: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32e758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32e75c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32e760: 0x24427440  addiu       $v0, $v0, 0x7440
    ctx->pc = 0x32e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29760));
    // 0x32e764: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x32e764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32e768: 0x820265af  lb          $v0, 0x65AF($s0)
    ctx->pc = 0x32e768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26031)));
    // 0x32e76c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x32e76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e770: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32e770u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32e774: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x32e774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32e778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32e77c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32e780: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x32e780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32e784:
    // 0x32e784: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32e784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32e788: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x32e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32e78c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x32e78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32e790: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x32e790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x32e794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32e794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32e798: 0x0  nop
    ctx->pc = 0x32e798u;
    // NOP
    // 0x32e79c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x32e79cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e7a0: 0x0  nop
    ctx->pc = 0x32e7a0u;
    // NOP
    // 0x32e7a4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x32E7A4u;
    {
        const bool branch_taken_0x32e7a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32e7a4) {
            ctx->pc = 0x32E7E8u;
            goto label_32e7e8;
        }
    }
    ctx->pc = 0x32E7ACu;
    // 0x32e7ac: 0xc6610124  lwc1        $f1, 0x124($s3)
    ctx->pc = 0x32e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32e7b0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32e7b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x32e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32e7b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e7bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32e7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e7c0: 0x0  nop
    ctx->pc = 0x32e7c0u;
    // NOP
    // 0x32e7c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x32E7C4u;
    {
        const bool branch_taken_0x32e7c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32e7c4) {
            ctx->pc = 0x32E7E8u;
            goto label_32e7e8;
        }
    }
    ctx->pc = 0x32E7CCu;
    // 0x32e7cc: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x32e7ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x32e7d0: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x32e7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32e7d4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e7d8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e7d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e7dc: 0xa20265b0  sb          $v0, 0x65B0($s0)
    ctx->pc = 0x32e7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26032), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e7e0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x32E7E0u;
    {
        const bool branch_taken_0x32e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e7e0) {
            ctx->pc = 0x32E784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e784;
        }
    }
    ctx->pc = 0x32E7E8u;
label_32e7e8:
    // 0x32e7e8: 0x820265b0  lb          $v0, 0x65B0($s0)
    ctx->pc = 0x32e7e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26032)));
    // 0x32e7ec: 0xa20265b3  sb          $v0, 0x65B3($s0)
    ctx->pc = 0x32e7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26035), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e7f0: 0x820265ae  lb          $v0, 0x65AE($s0)
    ctx->pc = 0x32e7f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26030)));
    // 0x32e7f4: 0xa20265b1  sb          $v0, 0x65B1($s0)
    ctx->pc = 0x32e7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26033), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e7f8: 0x820265af  lb          $v0, 0x65AF($s0)
    ctx->pc = 0x32e7f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26031)));
    // 0x32e7fc: 0xa20265b2  sb          $v0, 0x65B2($s0)
    ctx->pc = 0x32e7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26034), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e800: 0x820265ae  lb          $v0, 0x65AE($s0)
    ctx->pc = 0x32e800u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26030)));
    // 0x32e804: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e808: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e80c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e810: 0xac22ec10  sw          $v0, -0x13F0($at)
    ctx->pc = 0x32e810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x88EC10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC10u, _value); } while (0);
    // 0x32e814: 0x820265b0  lb          $v0, 0x65B0($s0)
    ctx->pc = 0x32e814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26032)));
    // 0x32e818: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e81c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e81cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e820: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e824: 0xac22ec18  sw          $v0, -0x13E8($at)
    ctx->pc = 0x32e824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x88EC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC18u, _value); } while (0);
    // 0x32e828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e82c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x32e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x32e830: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e834: 0xae020620  sw          $v0, 0x620($s0)
    ctx->pc = 0x32e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 2));
    // 0x32e838: 0x24040097  addiu       $a0, $zero, 0x97
    ctx->pc = 0x32e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x32e83c: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x32e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x32e840: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32e840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32e844: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32e844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e848: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32E848u;
    SET_GPR_U32(ctx, 31, 0x32E850u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32E848u, 0x32E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E850u;
label_32e850:
    // 0x32e850: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e854: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x32e854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x32e858: 0x24040098  addiu       $a0, $zero, 0x98
    ctx->pc = 0x32e858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x32e85c: 0x26050520  addiu       $a1, $s0, 0x520
    ctx->pc = 0x32e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x32e860: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32e860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32e864: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x32e864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32e868: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32E868u;
    SET_GPR_U32(ctx, 31, 0x32E870u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32E868u, 0x32E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E870u;
label_32e870:
    // 0x32e870: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x32e874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32e874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32e878: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32e878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x32e87c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x32e87cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32e884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e894: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x32e894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32e898: 0x3e00008  jr          $ra
    ctx->pc = 0x32E898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E8A0u;
}
