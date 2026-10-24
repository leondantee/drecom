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

// Function: Weapon_menu_init
// Address: 0x284ca0 - 0x285694
void Weapon_menu_init_0x284ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_menu_init_0x284ca0");
#endif

    switch (ctx->pc) {
        case 0x284de4u: goto label_284de4;
        case 0x284f4cu: goto label_284f4c;
        case 0x284fe0u: goto label_284fe0;
        case 0x28509cu: goto label_28509c;
        case 0x285168u: goto label_285168;
        case 0x285254u: goto label_285254;
        case 0x2852d0u: goto label_2852d0;
        case 0x285320u: goto label_285320;
        case 0x285458u: goto label_285458;
        case 0x2854a0u: goto label_2854a0;
        case 0x28550cu: goto label_28550c;
        case 0x28555cu: goto label_28555c;
        case 0x285598u: goto label_285598;
        case 0x2855b0u: goto label_2855b0;
        default: break;
    }

    ctx->pc = 0x284ca0u;

    // 0x284ca0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x284ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x284ca4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x284ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x284ca8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x284ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x284cac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x284cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x284cb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x284cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x284cb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x284cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x284cb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x284cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x284cbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x284cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x284cc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x284cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x284cc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284ccc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x284cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x284cd0: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x284cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x284cd4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x284cd4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x284cd8: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x284cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x284cdc: 0x2442cb10  addiu       $v0, $v0, -0x34F0
    ctx->pc = 0x284cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
    // 0x284ce0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x284ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x284ce4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x284ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x284ce8: 0x2454dbc0  addiu       $s4, $v0, -0x2440
    ctx->pc = 0x284ce8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x284cec: 0xa200663d  sb          $zero, 0x663D($s0)
    ctx->pc = 0x284cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26173), (uint8_t)GPR_U32(ctx, 0));
    // 0x284cf0: 0xa2006855  sb          $zero, 0x6855($s0)
    ctx->pc = 0x284cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26709), (uint8_t)GPR_U32(ctx, 0));
    // 0x284cf4: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x284cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x284cf8: 0x34550001  ori         $s5, $v0, 0x1
    ctx->pc = 0x284cf8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x284cfc: 0xae15685c  sw          $s5, 0x685C($s0)
    ctx->pc = 0x284cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 21));
    // 0x284d00: 0x92066625  lbu         $a2, 0x6625($s0)
    ctx->pc = 0x284d00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26149)));
    // 0x284d04: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x284d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x284d08: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x284D08u;
    {
        const bool branch_taken_0x284d08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x284d08) {
            ctx->pc = 0x284D24u;
            goto label_284d24;
        }
    }
    ctx->pc = 0x284D10u;
    // 0x284d10: 0xa2005dea  sb          $zero, 0x5DEA($s0)
    ctx->pc = 0x284d10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24042), (uint8_t)GPR_U32(ctx, 0));
    // 0x284d14: 0x928213f8  lbu         $v0, 0x13F8($s4)
    ctx->pc = 0x284d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5112)));
    // 0x284d18: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x284d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x284d1c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x284d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x284d20: 0xa2025de8  sb          $v0, 0x5DE8($s0)
    ctx->pc = 0x284d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24040), (uint8_t)GPR_U32(ctx, 2));
label_284d24:
    // 0x284d24: 0x928313a6  lbu         $v1, 0x13A6($s4)
    ctx->pc = 0x284d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5030)));
    // 0x284d28: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x284d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x284d2c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x284d2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x284d30: 0xa2035de9  sb          $v1, 0x5DE9($s0)
    ctx->pc = 0x284d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24041), (uint8_t)GPR_U32(ctx, 3));
    // 0x284d34: 0xa2006624  sb          $zero, 0x6624($s0)
    ctx->pc = 0x284d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26148), (uint8_t)GPR_U32(ctx, 0));
    // 0x284d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284d3c: 0x0  nop
    ctx->pc = 0x284d3cu;
    // NOP
    // 0x284d40: 0xe6006620  swc1        $f0, 0x6620($s0)
    ctx->pc = 0x284d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 26144), bits); }
    // 0x284d44: 0xa200660c  sb          $zero, 0x660C($s0)
    ctx->pc = 0x284d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26124), (uint8_t)GPR_U32(ctx, 0));
    // 0x284d48: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x284d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x284d4c: 0xa203660d  sb          $v1, 0x660D($s0)
    ctx->pc = 0x284d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26125), (uint8_t)GPR_U32(ctx, 3));
    // 0x284d50: 0x82035dea  lb          $v1, 0x5DEA($s0)
    ctx->pc = 0x284d50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x284d54: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x284d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x284d58: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x284d58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x284d5c: 0x18600021  blez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x284D5Cu;
    {
        const bool branch_taken_0x284d5c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x284d5c) {
            ctx->pc = 0x284DE4u;
            goto label_284de4;
        }
    }
    ctx->pc = 0x284D64u;
    // 0x284d64: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x284d64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x284d68: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x284d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x284d6c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x284d6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x284d70: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x284d70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x284d74: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x284d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x284d78: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x284d78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x284d7c: 0x92a6663e  lbu         $a2, 0x663E($s5)
    ctx->pc = 0x284d7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 26174)));
    // 0x284d80: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x284d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x284d84: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x284d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
    // 0x284d88: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x284d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x284d8c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x284d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x284d90: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x284d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x284d94: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x284d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x284d98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x284d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284d9c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x284d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x284da0: 0x9063663f  lbu         $v1, 0x663F($v1)
    ctx->pc = 0x284da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26175)));
    // 0x284da4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x284da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x284da8: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x284da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x284dac: 0x82035dea  lb          $v1, 0x5DEA($s0)
    ctx->pc = 0x284dacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x284db0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x284db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x284db4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x284db4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x284db8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x284db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x284dbc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x284dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x284dc0: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x284dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x284dc4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x284dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x284dc8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284DC8u;
    {
        const bool branch_taken_0x284dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284dc8) {
            ctx->pc = 0x284DE4u;
            goto label_284de4;
        }
    }
    ctx->pc = 0x284DD0u;
    // 0x284dd0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x284dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x284dd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x284dd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x284dd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x284dd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x284ddc: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x284DDCu;
    SET_GPR_U32(ctx, 31, 0x284DE4u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x284DDCu, 0x284DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DE4u;
label_284de4:
    // 0x284de4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x284de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x284de8: 0xae045de0  sw          $a0, 0x5DE0($s0)
    ctx->pc = 0x284de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24032), GPR_U32(ctx, 4));
    // 0x284dec: 0xae045dd8  sw          $a0, 0x5DD8($s0)
    ctx->pc = 0x284decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24024), GPR_U32(ctx, 4));
    // 0x284df0: 0x240501cc  addiu       $a1, $zero, 0x1CC
    ctx->pc = 0x284df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x284df4: 0xae055ddc  sw          $a1, 0x5DDC($s0)
    ctx->pc = 0x284df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24028), GPR_U32(ctx, 5));
    // 0x284df8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x284df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x284dfc: 0xae065de4  sw          $a2, 0x5DE4($s0)
    ctx->pc = 0x284dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24036), GPR_U32(ctx, 6));
    // 0x284e00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284e04: 0xa2025dfc  sb          $v0, 0x5DFC($s0)
    ctx->pc = 0x284e04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 2));
    // 0x284e08: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x284e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x284e0c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x284e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x284e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e14: 0x0  nop
    ctx->pc = 0x284e14u;
    // NOP
    // 0x284e18: 0xe6005df0  swc1        $f0, 0x5DF0($s0)
    ctx->pc = 0x284e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24048), bits); }
    // 0x284e1c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x284e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x284e20: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x284e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x284e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e28: 0x0  nop
    ctx->pc = 0x284e28u;
    // NOP
    // 0x284e2c: 0xe6005df4  swc1        $f0, 0x5DF4($s0)
    ctx->pc = 0x284e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24052), bits); }
    // 0x284e30: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x284e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x284e34: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x284e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x284e38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e3c: 0x0  nop
    ctx->pc = 0x284e3cu;
    // NOP
    // 0x284e40: 0xe6005df8  swc1        $f0, 0x5DF8($s0)
    ctx->pc = 0x284e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24056), bits); }
    // 0x284e44: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x284e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x284e48: 0xae035db0  sw          $v1, 0x5DB0($s0)
    ctx->pc = 0x284e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23984), GPR_U32(ctx, 3));
    // 0x284e4c: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x284e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x284e50: 0x3464adfd  ori         $a0, $v1, 0xADFD
    ctx->pc = 0x284e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44541);
    // 0x284e54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x284e54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e58: 0x0  nop
    ctx->pc = 0x284e58u;
    // NOP
    // 0x284e5c: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x284e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    // 0x284e60: 0x82035de8  lb          $v1, 0x5DE8($s0)
    ctx->pc = 0x284e60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x284e64: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x284e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x284e68: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x284e68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x284e6c: 0x247effff  addiu       $fp, $v1, -0x1
    ctx->pc = 0x284e6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284e70: 0x26115e08  addiu       $s1, $s0, 0x5E08
    ctx->pc = 0x284e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24072));
    // 0x284e74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x284e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x284e78: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x284e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x284e7c: 0x3c034299  lui         $v1, 0x4299
    ctx->pc = 0x284e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17049 << 16));
    // 0x284e80: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x284e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x284e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e88: 0x0  nop
    ctx->pc = 0x284e88u;
    // NOP
    // 0x284e8c: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x284e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x284e90: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x284e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x284e94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x284e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284e98: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x284e98u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e9c: 0x0  nop
    ctx->pc = 0x284e9cu;
    // NOP
    // 0x284ea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x284ea4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x284ea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x284ea8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x284ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x284eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284eb0: 0x0  nop
    ctx->pc = 0x284eb0u;
    // NOP
    // 0x284eb4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x284eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x284eb8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x284eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x284ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ec0: 0x0  nop
    ctx->pc = 0x284ec0u;
    // NOP
    // 0x284ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x284ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x284ec8: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x284ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x284ecc: 0x3c04434d  lui         $a0, 0x434D
    ctx->pc = 0x284eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17229 << 16));
    // 0x284ed0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x284ed0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ed4: 0x0  nop
    ctx->pc = 0x284ed4u;
    // NOP
    // 0x284ed8: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x284ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x284edc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x284edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x284ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ee4: 0x0  nop
    ctx->pc = 0x284ee4u;
    // NOP
    // 0x284ee8: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x284ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x284eec: 0x3c0443ef  lui         $a0, 0x43EF
    ctx->pc = 0x284eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17391 << 16));
    // 0x284ef0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x284ef0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ef4: 0x0  nop
    ctx->pc = 0x284ef4u;
    // NOP
    // 0x284ef8: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x284ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x284efc: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x284efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x284f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f04: 0x0  nop
    ctx->pc = 0x284f04u;
    // NOP
    // 0x284f08: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x284f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x284f0c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x284f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x284f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f14: 0x0  nop
    ctx->pc = 0x284f14u;
    // NOP
    // 0x284f18: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x284f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x284f1c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x284f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x284f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f24: 0x0  nop
    ctx->pc = 0x284f24u;
    // NOP
    // 0x284f28: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x284f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x284f2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x284f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284f30: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x284f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x284f34: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x284f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x284f38: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x284f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x284f3c: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x284f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x284f40: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x284f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x284f44: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x284F44u;
    SET_GPR_U32(ctx, 31, 0x284F4Cu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x284F44u, 0x284F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F4Cu;
label_284f4c:
    // 0x284f4c: 0x26116090  addiu       $s1, $s0, 0x6090
    ctx->pc = 0x284f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24720));
    // 0x284f50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284f54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x284f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x284f58: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x284f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x284f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f60: 0x0  nop
    ctx->pc = 0x284f60u;
    // NOP
    // 0x284f64: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x284f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x284f68: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x284f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x284f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f70: 0x0  nop
    ctx->pc = 0x284f70u;
    // NOP
    // 0x284f74: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x284f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x284f78: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x284f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x284f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f80: 0x0  nop
    ctx->pc = 0x284f80u;
    // NOP
    // 0x284f84: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x284f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x284f88: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x284f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x284f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f90: 0x0  nop
    ctx->pc = 0x284f90u;
    // NOP
    // 0x284f94: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x284f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x284f98: 0x3c0243a7  lui         $v0, 0x43A7
    ctx->pc = 0x284f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17319 << 16));
    // 0x284f9c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x284f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x284fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284fa4: 0x0  nop
    ctx->pc = 0x284fa4u;
    // NOP
    // 0x284fa8: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x284fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x284fac: 0x3c02438d  lui         $v0, 0x438D
    ctx->pc = 0x284facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17293 << 16));
    // 0x284fb0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x284fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x284fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284fb8: 0x0  nop
    ctx->pc = 0x284fb8u;
    // NOP
    // 0x284fbc: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x284fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x284fc0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x284fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284fc4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x284fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x284fc8: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x284fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x284fcc: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x284fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x284fd0: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x284fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x284fd4: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x284fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x284fd8: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x284FD8u;
    SET_GPR_U32(ctx, 31, 0x284FE0u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x284FD8u, 0x284FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284FE0u;
label_284fe0:
    // 0x284fe0: 0x26115f4c  addiu       $s1, $s0, 0x5F4C
    ctx->pc = 0x284fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24396));
    // 0x284fe4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284fe8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x284fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x284fec: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x284fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x284ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ff4: 0x0  nop
    ctx->pc = 0x284ff4u;
    // NOP
    // 0x284ff8: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x284ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x284ffc: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x284ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x285000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285004: 0x0  nop
    ctx->pc = 0x285004u;
    // NOP
    // 0x285008: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x285008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x28500c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x28500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x285010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285014: 0x0  nop
    ctx->pc = 0x285014u;
    // NOP
    // 0x285018: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x285018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x28501c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x28501cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x285020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285024: 0x0  nop
    ctx->pc = 0x285024u;
    // NOP
    // 0x285028: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x285028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x28502c: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x28502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x285030: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x285030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x285034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285038: 0x0  nop
    ctx->pc = 0x285038u;
    // NOP
    // 0x28503c: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x28503cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x285040: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x285040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x285044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x285044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285048: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x285048u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28504c: 0x0  nop
    ctx->pc = 0x28504cu;
    // NOP
    // 0x285050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x285054: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x285054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285058: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x285058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x28505c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285060: 0x0  nop
    ctx->pc = 0x285060u;
    // NOP
    // 0x285064: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x285064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x285068: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x285068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x28506c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28506cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285070: 0x0  nop
    ctx->pc = 0x285070u;
    // NOP
    // 0x285074: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x285074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x285078: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x285078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x28507c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28507cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x285080: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x285080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x285084: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x285084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x285088: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x285088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x28508c: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x28508cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x285090: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x285090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x285094: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x285094u;
    SET_GPR_U32(ctx, 31, 0x28509Cu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x285094u, 0x28509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28509Cu;
label_28509c:
    // 0x28509c: 0x261161d4  addiu       $s1, $s0, 0x61D4
    ctx->pc = 0x28509cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25044));
    // 0x2850a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2850a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2850a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2850a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2850a8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2850ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850b0: 0x0  nop
    ctx->pc = 0x2850b0u;
    // NOP
    // 0x2850b4: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2850b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2850b8: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2850b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2850bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850c0: 0x0  nop
    ctx->pc = 0x2850c0u;
    // NOP
    // 0x2850c4: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x2850c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2850c8: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x2850c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x2850cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850d0: 0x0  nop
    ctx->pc = 0x2850d0u;
    // NOP
    // 0x2850d4: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x2850d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2850d8: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x2850d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x2850dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850e0: 0x0  nop
    ctx->pc = 0x2850e0u;
    // NOP
    // 0x2850e4: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x2850e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x2850e8: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2850e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x2850ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2850f0: 0x0  nop
    ctx->pc = 0x2850f0u;
    // NOP
    // 0x2850f4: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2850f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2850f8: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x2850f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x2850fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2850fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285100: 0x0  nop
    ctx->pc = 0x285100u;
    // NOP
    // 0x285104: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x285104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x285108: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x285108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x28510c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28510cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285110: 0x0  nop
    ctx->pc = 0x285110u;
    // NOP
    // 0x285114: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x285114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x285118: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x285118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x28511c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28511cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285120: 0x0  nop
    ctx->pc = 0x285120u;
    // NOP
    // 0x285124: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x285124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x285128: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x285128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x28512c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285130: 0x0  nop
    ctx->pc = 0x285130u;
    // NOP
    // 0x285134: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x285134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x285138: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x285138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x28513c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28513cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285140: 0x0  nop
    ctx->pc = 0x285140u;
    // NOP
    // 0x285144: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x285144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x285148: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x285148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28514c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x28514cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x285150: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x285150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x285154: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x285154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x285158: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x285158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x28515c: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x28515cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x285160: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x285160u;
    SET_GPR_U32(ctx, 31, 0x285168u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x285160u, 0x285168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285168u;
label_285168:
    // 0x285168: 0x26116318  addiu       $s1, $s0, 0x6318
    ctx->pc = 0x285168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25368));
    // 0x28516c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x28516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x285170: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x285170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x285174: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x285174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x285178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28517c: 0x0  nop
    ctx->pc = 0x28517cu;
    // NOP
    // 0x285180: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x285180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x285184: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x285184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x285188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28518c: 0x0  nop
    ctx->pc = 0x28518cu;
    // NOP
    // 0x285190: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x285190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x285194: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x285194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x285198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28519c: 0x0  nop
    ctx->pc = 0x28519cu;
    // NOP
    // 0x2851a0: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x2851a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2851a4: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x2851a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
    // 0x2851a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851ac: 0x0  nop
    ctx->pc = 0x2851acu;
    // NOP
    // 0x2851b0: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x2851b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x2851b4: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x2851b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x2851b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851bc: 0x0  nop
    ctx->pc = 0x2851bcu;
    // NOP
    // 0x2851c0: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2851c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2851c4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2851c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2851c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851cc: 0x0  nop
    ctx->pc = 0x2851ccu;
    // NOP
    // 0x2851d0: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x2851d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x2851d4: 0x3c0242ce  lui         $v0, 0x42CE
    ctx->pc = 0x2851d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17102 << 16));
    // 0x2851d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851dc: 0x0  nop
    ctx->pc = 0x2851dcu;
    // NOP
    // 0x2851e0: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2851e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2851e4: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x2851e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
    // 0x2851e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851ec: 0x0  nop
    ctx->pc = 0x2851ecu;
    // NOP
    // 0x2851f0: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x2851f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2851f4: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x2851f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x2851f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2851f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2851fc: 0x0  nop
    ctx->pc = 0x2851fcu;
    // NOP
    // 0x285200: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x285200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x285204: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x285204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x285208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28520c: 0x0  nop
    ctx->pc = 0x28520cu;
    // NOP
    // 0x285210: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x285210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x285214: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x285214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x285218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28521c: 0x0  nop
    ctx->pc = 0x28521cu;
    // NOP
    // 0x285220: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x285220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x285224: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x285224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x285228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28522c: 0x0  nop
    ctx->pc = 0x28522cu;
    // NOP
    // 0x285230: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x285230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x285234: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x285234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x285238: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x285238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x28523c: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x28523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x285240: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x285240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x285244: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x285244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x285248: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x285248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x28524c: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x28524Cu;
    SET_GPR_U32(ctx, 31, 0x285254u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x28524Cu, 0x285254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285254u;
label_285254:
    // 0x285254: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285258: 0x8c241b98  lw          $a0, 0x1B98($at)
    ctx->pc = 0x285258u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621B98u));
    // 0x28525c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285260: 0x108300b8  beq         $a0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x285260u;
    {
        const bool branch_taken_0x285260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x285260) {
            ctx->pc = 0x285544u;
            goto label_285544;
        }
    }
    ctx->pc = 0x285268u;
    // 0x285268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28526c: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x28526Cu;
    {
        const bool branch_taken_0x28526c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28526c) {
            ctx->pc = 0x285308u;
            goto label_285308;
        }
    }
    ctx->pc = 0x285274u;
    // 0x285274: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285274u;
    {
        const bool branch_taken_0x285274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x285274) {
            ctx->pc = 0x285284u;
            goto label_285284;
        }
    }
    ctx->pc = 0x28527Cu;
    // 0x28527c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x28527Cu;
    {
        const bool branch_taken_0x28527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28527c) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x285284u;
label_285284:
    // 0x285284: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x285284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285288: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x285288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28528c: 0x146000f4  bnez        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x28528Cu;
    {
        const bool branch_taken_0x28528c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28528c) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x285294u;
    // 0x285294: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x285294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285298: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x285298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x28529c: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28529cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x2852a0: 0xae006870  sw          $zero, 0x6870($s0)
    ctx->pc = 0x2852a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 0));
    // 0x2852a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2852a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2852a8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x2852a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x2852ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2852acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2852b0: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x2852b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x2852b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2852b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2852b8: 0xae020620  sw          $v0, 0x620($s0)
    ctx->pc = 0x2852b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 2));
    // 0x2852bc: 0x8e0565a0  lw          $a1, 0x65A0($s0)
    ctx->pc = 0x2852bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x2852c0: 0x240400a3  addiu       $a0, $zero, 0xA3
    ctx->pc = 0x2852c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x2852c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2852c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2852c8: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x2852C8u;
    SET_GPR_U32(ctx, 31, 0x2852D0u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x2852C8u, 0x2852D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852D0u;
label_2852d0:
    // 0x2852d0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2852d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2852d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2852d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2852d8: 0x126300e1  beq         $s3, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2852D8u;
    {
        const bool branch_taken_0x2852d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2852d8) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x2852E0u;
    // 0x2852e0: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x2852e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x2852e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2852e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2852e8: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x2852e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x2852ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2852ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2852f0: 0x8c231b98  lw          $v1, 0x1B98($at)
    ctx->pc = 0x2852f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B98u));
    // 0x2852f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2852f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2852f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2852f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2852fc: 0xac231b98  sw          $v1, 0x1B98($at)
    ctx->pc = 0x2852fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B98u, _value); } while (0);
    // 0x285300: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x285300u;
    {
        const bool branch_taken_0x285300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285300) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x285308u;
label_285308:
    // 0x285308: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x285308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28530c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x285310: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x285310u;
    {
        const bool branch_taken_0x285310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285310) {
            ctx->pc = 0x2854D8u;
            goto label_2854d8;
        }
    }
    ctx->pc = 0x285318u;
    // 0x285318: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x285318u;
    SET_GPR_U32(ctx, 31, 0x285320u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x285318u, 0x285320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285320u;
label_285320:
    // 0x285320: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x285320u;
    {
        const bool branch_taken_0x285320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285320) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x285328u;
    // 0x285328: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x285328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28532c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x28532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x285330: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x285330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x285334: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x285334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x285338: 0x8e1265a0  lw          $s2, 0x65A0($s0)
    ctx->pc = 0x285338u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x28533c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x28533cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285340: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x285340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285344: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x285344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x285348: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x285348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28534c: 0xae020620  sw          $v0, 0x620($s0)
    ctx->pc = 0x28534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 2));
    // 0x285350: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x285350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285354: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x285354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x285358: 0xae020628  sw          $v0, 0x628($s0)
    ctx->pc = 0x285358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    // 0x28535c: 0x96020624  lhu         $v0, 0x624($s0)
    ctx->pc = 0x28535cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x285360: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285364: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x285364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x285368: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28536c: 0xa602062c  sh          $v0, 0x62C($s0)
    ctx->pc = 0x28536cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1580), (uint16_t)GPR_U32(ctx, 2));
    // 0x285370: 0x96020626  lhu         $v0, 0x626($s0)
    ctx->pc = 0x285370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1574)));
    // 0x285374: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285378: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28537c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285380: 0xa602062e  sh          $v0, 0x62E($s0)
    ctx->pc = 0x285380u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1582), (uint16_t)GPR_U32(ctx, 2));
    // 0x285384: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x285384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285388: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x285388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28538c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285390: 0xae020628  sw          $v0, 0x628($s0)
    ctx->pc = 0x285390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    // 0x285394: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x285394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285398: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x285398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28539c: 0xae020630  sw          $v0, 0x630($s0)
    ctx->pc = 0x28539cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 2));
    // 0x2853a0: 0x9602062c  lhu         $v0, 0x62C($s0)
    ctx->pc = 0x2853a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x2853a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853a8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2853a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2853ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853b0: 0xa6020634  sh          $v0, 0x634($s0)
    ctx->pc = 0x2853b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1588), (uint16_t)GPR_U32(ctx, 2));
    // 0x2853b4: 0x9602062e  lhu         $v0, 0x62E($s0)
    ctx->pc = 0x2853b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1582)));
    // 0x2853b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2853bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2853c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853c4: 0xa6020636  sh          $v0, 0x636($s0)
    ctx->pc = 0x2853c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1590), (uint16_t)GPR_U32(ctx, 2));
    // 0x2853c8: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x2853c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x2853cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2853ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2853d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2853d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2853d4: 0xae020630  sw          $v0, 0x630($s0)
    ctx->pc = 0x2853d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 2));
    // 0x2853d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2853d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2853dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2853dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2853e0: 0xae020638  sw          $v0, 0x638($s0)
    ctx->pc = 0x2853e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 2));
    // 0x2853e4: 0x96020634  lhu         $v0, 0x634($s0)
    ctx->pc = 0x2853e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1588)));
    // 0x2853e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853ec: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2853ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2853f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853f4: 0xa602063c  sh          $v0, 0x63C($s0)
    ctx->pc = 0x2853f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1596), (uint16_t)GPR_U32(ctx, 2));
    // 0x2853f8: 0x96020636  lhu         $v0, 0x636($s0)
    ctx->pc = 0x2853f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1590)));
    // 0x2853fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285404: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285408: 0xa602063e  sh          $v0, 0x63E($s0)
    ctx->pc = 0x285408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1598), (uint16_t)GPR_U32(ctx, 2));
    // 0x28540c: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x28540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285410: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x285410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x285414: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x285414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285418: 0xae020638  sw          $v0, 0x638($s0)
    ctx->pc = 0x285418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 2));
    // 0x28541c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x28541cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285420: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x285420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x285424: 0xae020640  sw          $v0, 0x640($s0)
    ctx->pc = 0x285424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 2));
    // 0x285428: 0x9602063c  lhu         $v0, 0x63C($s0)
    ctx->pc = 0x285428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1596)));
    // 0x28542c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285430: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x285430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x285434: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285438: 0xa6020644  sh          $v0, 0x644($s0)
    ctx->pc = 0x285438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1604), (uint16_t)GPR_U32(ctx, 2));
    // 0x28543c: 0x9602063e  lhu         $v0, 0x63E($s0)
    ctx->pc = 0x28543cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1598)));
    // 0x285440: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285448: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28544c: 0xa6020646  sh          $v0, 0x646($s0)
    ctx->pc = 0x28544cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1606), (uint16_t)GPR_U32(ctx, 2));
    // 0x285450: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x285450u;
    SET_GPR_U32(ctx, 31, 0x285458u);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x285450u, 0x285458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285458u;
label_285458:
    // 0x285458: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x285458u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28545c: 0x8e0265a0  lw          $v0, 0x65A0($s0)
    ctx->pc = 0x28545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285460: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x285460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x285464: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x285464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x285468: 0x82025de8  lb          $v0, 0x5DE8($s0)
    ctx->pc = 0x285468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28546c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285470: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x285470u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x285474: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x285474u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285478: 0x7280be28  paddub      $s7, $s4, $zero
    ctx->pc = 0x285478u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28547c: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x28547cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x285480: 0x3455008c  ori         $s5, $v0, 0x8C
    ctx->pc = 0x285480u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
    // 0x285484: 0x8e0665a0  lw          $a2, 0x65A0($s0)
    ctx->pc = 0x285484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285488: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x285488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28548c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x28548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x285490: 0x3445b000  ori         $a1, $v0, 0xB000
    ctx->pc = 0x285490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x285494: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x285494u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285498: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x285498u;
    SET_GPR_U32(ctx, 31, 0x2854A0u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x285498u, 0x2854A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2854A0u;
label_2854a0:
    // 0x2854a0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2854a0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2854a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2854a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2854a8: 0x1263006d  beq         $s3, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2854A8u;
    {
        const bool branch_taken_0x2854a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2854a8) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x2854B0u;
    // 0x2854b0: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x2854b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x2854b4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2854b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2854b8: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x2854b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x2854bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2854bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2854c0: 0x8c231b98  lw          $v1, 0x1B98($at)
    ctx->pc = 0x2854c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B98u));
    // 0x2854c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2854c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2854c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2854c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2854cc: 0xac231b98  sw          $v1, 0x1B98($at)
    ctx->pc = 0x2854ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B98u, _value); } while (0);
    // 0x2854d0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2854D0u;
    {
        const bool branch_taken_0x2854d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2854d0) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x2854D8u;
label_2854d8:
    // 0x2854d8: 0x82025de8  lb          $v0, 0x5DE8($s0)
    ctx->pc = 0x2854d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x2854dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2854dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2854e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2854e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2854e4: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x2854e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2854e8: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x2854e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x2854ec: 0x3455008c  ori         $s5, $v0, 0x8C
    ctx->pc = 0x2854ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
    // 0x2854f0: 0x8e0665a0  lw          $a2, 0x65A0($s0)
    ctx->pc = 0x2854f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x2854f4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x2854f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2854f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2854f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2854fc: 0x3445b000  ori         $a1, $v0, 0xB000
    ctx->pc = 0x2854fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x285500: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x285500u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285504: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x285504u;
    SET_GPR_U32(ctx, 31, 0x28550Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x285504u, 0x28550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28550Cu;
label_28550c:
    // 0x28550c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28550cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x285510: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x285510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285514: 0x12630052  beq         $s3, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x285514u;
    {
        const bool branch_taken_0x285514 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x285514) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x28551Cu;
    // 0x28551c: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285520: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x285520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x285524: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x285524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x285528: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28552c: 0x8c231b98  lw          $v1, 0x1B98($at)
    ctx->pc = 0x28552cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B98u));
    // 0x285530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285534: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285538: 0xac231b98  sw          $v1, 0x1B98($at)
    ctx->pc = 0x285538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B98u, _value); } while (0);
    // 0x28553c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x28553Cu;
    {
        const bool branch_taken_0x28553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28553c) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x285544u;
label_285544:
    // 0x285544: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x285544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285548: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x285548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28554c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x28554Cu;
    {
        const bool branch_taken_0x28554c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28554c) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x285554u;
    // 0x285554: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x285554u;
    SET_GPR_U32(ctx, 31, 0x28555Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x285554u, 0x28555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28555Cu;
label_28555c:
    // 0x28555c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x28555Cu;
    {
        const bool branch_taken_0x28555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28555c) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x285564u;
    // 0x285564: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x285564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285568: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x285568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28556c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x28556cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x285570: 0xae05685c  sw          $a1, 0x685C($s0)
    ctx->pc = 0x285570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 5));
    // 0x285574: 0x26020520  addiu       $v0, $s0, 0x520
    ctx->pc = 0x285574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x285578: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28557c: 0xac222990  sw          $v0, 0x2990($at)
    ctx->pc = 0x28557cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622990u, _value); } while (0);
    // 0x285580: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285584: 0x8c242990  lw          $a0, 0x2990($at)
    ctx->pc = 0x285584u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x622990u));
    // 0x285588: 0x26050720  addiu       $a1, $s0, 0x720
    ctx->pc = 0x285588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x28558c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x28558cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x285590: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x285590u;
    SET_GPR_U32(ctx, 31, 0x285598u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x285598u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x285598u) { return; }
    ctx->pc = 0x285598u;
label_285598:
    // 0x285598: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x285598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x28559c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28559cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855a0: 0x8c222990  lw          $v0, 0x2990($at)
    ctx->pc = 0x2855a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622990u));
    // 0x2855a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2855a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2855a8: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x2855A8u;
    SET_GPR_U32(ctx, 31, 0x2855B0u);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x2855A8u, 0x2855B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2855B0u;
label_2855b0:
    // 0x2855b0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x2855b0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2855b4: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x2855b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x2855b8: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2855b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2855bc: 0xae0365a0  sw          $v1, 0x65A0($s0)
    ctx->pc = 0x2855bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 3));
    // 0x2855c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855c4: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x2855c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x2855c8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2855c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2855cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855d0: 0xac232990  sw          $v1, 0x2990($at)
    ctx->pc = 0x2855d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622990u, _value); } while (0);
    // 0x2855d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2855d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2855d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855dc: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x2855dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x2855e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2855e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2855e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855e8: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x2855e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x2855ec: 0x9463fffc  lhu         $v1, -0x4($v1)
    ctx->pc = 0x2855ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x2855f0: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x2855f0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2855f4: 0x27d10400  addiu       $s1, $fp, 0x400
    ctx->pc = 0x2855f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
    // 0x2855f8: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x2855f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2855fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285600: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x285600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x285604: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x285604u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x285608: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28560c: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x28560cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x285610: 0x9463fffe  lhu         $v1, -0x2($v1)
    ctx->pc = 0x285610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x285614: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x285614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28561c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28561cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285620: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285624: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x285624u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x285628: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x285628u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x28562c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285630: 0xac201b98  sw          $zero, 0x1B98($at)
    ctx->pc = 0x285630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B98u, _value); } while (0);
    // 0x285634: 0x8e045dc4  lw          $a0, 0x5DC4($s0)
    ctx->pc = 0x285634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x285638: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x285638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28563c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28563Cu;
    {
        const bool branch_taken_0x28563c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28563c) {
            ctx->pc = 0x285658u;
            goto label_285658;
        }
    }
    ctx->pc = 0x285644u;
    // 0x285644: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x285644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x285648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28564c: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x28564cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x285650: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x285650u;
    {
        const bool branch_taken_0x285650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285650) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x285658u;
label_285658:
    // 0x285658: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x285658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28565c: 0xae045dd4  sw          $a0, 0x5DD4($s0)
    ctx->pc = 0x28565cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 4));
label_285660:
    // 0x285660: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x285660u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285664: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x285664u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285668: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x285668u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28566c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28566cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285670: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285674: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28567c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28567cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285688: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x285688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28568c: 0x3e00008  jr          $ra
    ctx->pc = 0x28568Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28568Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285694u;
}
