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

// Function: Mul_lnk_atari_set
// Address: 0x16cc20 - 0x16d3dc
void Mul_lnk_atari_set_0x16cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_lnk_atari_set_0x16cc20");
#endif

    switch (ctx->pc) {
        case 0x16ce2cu: goto label_16ce2c;
        case 0x16ce3cu: goto label_16ce3c;
        case 0x16ce4cu: goto label_16ce4c;
        case 0x16ce5cu: goto label_16ce5c;
        case 0x16ce70u: goto label_16ce70;
        case 0x16ce84u: goto label_16ce84;
        case 0x16ce98u: goto label_16ce98;
        case 0x16ceacu: goto label_16ceac;
        case 0x16cfbcu: goto label_16cfbc;
        case 0x16cfccu: goto label_16cfcc;
        case 0x16cfdcu: goto label_16cfdc;
        case 0x16cfecu: goto label_16cfec;
        case 0x16d37cu: goto label_16d37c;
        default: break;
    }

    ctx->pc = 0x16cc20u;

    // 0x16cc20: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x16cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x16cc24: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x16cc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x16cc28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16cc2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16cc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16cc30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16cc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16cc34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16cc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16cc38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16cc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16cc3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16cc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16cc40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16cc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16cc44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16cc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16cc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16cc4c: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x16cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x16cc50: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cc54: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16cc58: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CC58u;
    {
        const bool branch_taken_0x16cc58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cc58) {
            ctx->pc = 0x16CC6Cu;
            goto label_16cc6c;
        }
    }
    ctx->pc = 0x16CC60u;
    // 0x16cc60: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16cc60u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16cc64: 0x100001d0  b           . + 4 + (0x1D0 << 2)
    ctx->pc = 0x16CC64u;
    {
        const bool branch_taken_0x16cc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc64) {
            ctx->pc = 0x16D3A8u;
            goto label_16d3a8;
        }
    }
    ctx->pc = 0x16CC6Cu;
label_16cc6c:
    // 0x16cc6c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cc70: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x16cc70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16cc74: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x16cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cc78: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x16cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x16cc7c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cc80: 0x84440024  lh          $a0, 0x24($v0)
    ctx->pc = 0x16cc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16cc84: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x16cc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x16cc88: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cc88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cc8c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cc90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cc94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cc98: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x16cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x16cc9c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cca0: 0x84420026  lh          $v0, 0x26($v0)
    ctx->pc = 0x16cca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x16cca4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cca8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ccac: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ccb0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ccb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ccb8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x16ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x16ccbc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ccc0: 0x84420028  lh          $v0, 0x28($v0)
    ctx->pc = 0x16ccc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x16ccc4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ccc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ccc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ccc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cccc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ccd0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16ccd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ccd8: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x16ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x16ccdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cce0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x16cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x16cce4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x16cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cce8: 0x8485002a  lh          $a1, 0x2A($a0)
    ctx->pc = 0x16cce8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x16ccec: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x16ccecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x16ccf0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x16ccf0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x16ccf4: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x16ccf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ccf8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16ccfc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16cd00: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x16cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x16cd04: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cd08: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x16cd08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16cd0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16cd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cd10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16cd10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16cd14: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x16cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cd18: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16cd1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16cd20: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x16cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x16cd24: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cd28: 0x8442002e  lh          $v0, 0x2E($v0)
    ctx->pc = 0x16cd28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x16cd2c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cd30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cd30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cd34: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cd38: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cd3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cd40: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x16cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x16cd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cd48: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x16cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x16cd4c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cd50: 0x84420030  lh          $v0, 0x30($v0)
    ctx->pc = 0x16cd50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16cd54: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cd58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cd58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cd5c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cd60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cd64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cd68: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x16cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x16cd6c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cd70: 0x84420032  lh          $v0, 0x32($v0)
    ctx->pc = 0x16cd70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x16cd74: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cd78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cd78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cd7c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cd80: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16cd84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cd88: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x16cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x16cd8c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cd90: 0x84420034  lh          $v0, 0x34($v0)
    ctx->pc = 0x16cd90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16cd94: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cd98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cd98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cd9c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cda0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cda4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cda8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x16cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x16cdac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cdb0: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x16cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x16cdb4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cdb8: 0x84420036  lh          $v0, 0x36($v0)
    ctx->pc = 0x16cdb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x16cdbc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cdc0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cdc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cdc4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cdc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cdcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cdd0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x16cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x16cdd4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cdd8: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x16cdd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x16cddc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cde0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cde0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cde4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cde8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16cdec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cdf0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x16cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x16cdf4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cdf8: 0x8442003a  lh          $v0, 0x3A($v0)
    ctx->pc = 0x16cdf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x16cdfc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ce00: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ce00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ce04: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ce08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16ce0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ce10: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x16ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x16ce14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ce18: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x16ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x16ce1c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16ce20: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16ce24: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16CE24u;
    SET_GPR_U32(ctx, 31, 0x16CE2Cu);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16CE2Cu;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16CE2Cu) { return; }
    ctx->pc = 0x16CE2Cu;
label_16ce2c:
    // 0x16ce2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16ce30: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x16ce30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16ce34: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16CE34u;
    SET_GPR_U32(ctx, 31, 0x16CE3Cu);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16CE3Cu;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16CE3Cu) { return; }
    ctx->pc = 0x16CE3Cu;
label_16ce3c:
    // 0x16ce3c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x16ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16ce40: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16ce44: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16CE44u;
    SET_GPR_U32(ctx, 31, 0x16CE4Cu);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16CE4Cu;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16CE4Cu) { return; }
    ctx->pc = 0x16CE4Cu;
label_16ce4c:
    // 0x16ce4c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16ce50: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x16ce50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16ce54: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16CE54u;
    SET_GPR_U32(ctx, 31, 0x16CE5Cu);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16CE5Cu;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16CE5Cu) { return; }
    ctx->pc = 0x16CE5Cu;
label_16ce5c:
    // 0x16ce5c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16ce60: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16ce60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16ce64: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x16ce64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16ce68: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16CE68u;
    SET_GPR_U32(ctx, 31, 0x16CE70u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16CE68u, 0x16CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE70u;
label_16ce70:
    // 0x16ce70: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16ce74: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16ce74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16ce78: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x16ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16ce7c: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16CE7Cu;
    SET_GPR_U32(ctx, 31, 0x16CE84u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16CE7Cu, 0x16CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE84u;
label_16ce84:
    // 0x16ce84: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x16ce84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16ce88: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16ce88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16ce8c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x16ce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16ce90: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16CE90u;
    SET_GPR_U32(ctx, 31, 0x16CE98u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16CE90u, 0x16CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE98u;
label_16ce98:
    // 0x16ce98: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16ce9c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16ce9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16cea0: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x16cea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16cea4: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16CEA4u;
    SET_GPR_U32(ctx, 31, 0x16CEACu);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16CEA4u, 0x16CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CEACu;
label_16ceac:
    // 0x16ceac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16ceb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ceb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ceb4: 0x0  nop
    ctx->pc = 0x16ceb4u;
    // NOP
    // 0x16ceb8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x16ceb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x16cebc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16cec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cec4: 0x0  nop
    ctx->pc = 0x16cec4u;
    // NOP
    // 0x16cec8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x16cec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x16cecc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16ced0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ced0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ced4: 0x0  nop
    ctx->pc = 0x16ced4u;
    // NOP
    // 0x16ced8: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x16ced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x16cedc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16cee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cee4: 0x0  nop
    ctx->pc = 0x16cee4u;
    // NOP
    // 0x16cee8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x16cee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x16ceec: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cef0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x16cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cef4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cef8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x16cef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x16cefc: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf00: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x16cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf08: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x16cf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x16cf0c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf10: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x16cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf18: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x16cf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x16cf1c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf20: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x16cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf28: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x16cf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x16cf2c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf30: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x16cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf38: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x16cf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x16cf3c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf40: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x16cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf48: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x16cf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x16cf4c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf50: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x16cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf58: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x16cf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x16cf5c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16cf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf60: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x16cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf68: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x16cf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x16cf6c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf70: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x16cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf78: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x16cf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x16cf7c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16cf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf80: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x16cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf88: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x16cf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x16cf8c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16cf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cf90: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x16cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cf94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cf98: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x16cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x16cf9c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cfa0: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x16cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cfa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cfa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cfa8: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x16cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x16cfac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16cfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16cfb0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x16cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16cfb4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16CFB4u;
    SET_GPR_U32(ctx, 31, 0x16CFBCu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16CFBCu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16CFBCu) { return; }
    ctx->pc = 0x16CFBCu;
label_16cfbc:
    // 0x16cfbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16cfc0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x16cfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16cfc4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16CFC4u;
    SET_GPR_U32(ctx, 31, 0x16CFCCu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16CFCCu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16CFCCu) { return; }
    ctx->pc = 0x16CFCCu;
label_16cfcc:
    // 0x16cfcc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16cfd0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16cfd4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16CFD4u;
    SET_GPR_U32(ctx, 31, 0x16CFDCu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16CFDCu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16CFDCu) { return; }
    ctx->pc = 0x16CFDCu;
label_16cfdc:
    // 0x16cfdc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16cfe0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x16cfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16cfe4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16CFE4u;
    SET_GPR_U32(ctx, 31, 0x16CFECu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16CFECu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16CFECu) { return; }
    ctx->pc = 0x16CFECu;
label_16cfec:
    // 0x16cfec: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16cff0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16cff4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16cff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16cff8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16CFF8u;
    {
        const bool branch_taken_0x16cff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cff8) {
            ctx->pc = 0x16D010u;
            goto label_16d010;
        }
    }
    ctx->pc = 0x16D000u;
    // 0x16d000: 0x8fb300a0  lw          $s3, 0xA0($sp)
    ctx->pc = 0x16d000u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16d004: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x16d004u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16d008: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D008u;
    {
        const bool branch_taken_0x16d008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d008) {
            ctx->pc = 0x16D01Cu;
            goto label_16d01c;
        }
    }
    ctx->pc = 0x16D010u;
label_16d010:
    // 0x16d010: 0x8fb300b0  lw          $s3, 0xB0($sp)
    ctx->pc = 0x16d010u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16d014: 0x8fb600a0  lw          $s6, 0xA0($sp)
    ctx->pc = 0x16d014u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16d018: 0x0  nop
    ctx->pc = 0x16d018u;
    // NOP
label_16d01c:
    // 0x16d01c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16d020: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16d024: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d028: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D028u;
    {
        const bool branch_taken_0x16d028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d028) {
            ctx->pc = 0x16D040u;
            goto label_16d040;
        }
    }
    ctx->pc = 0x16D030u;
    // 0x16d030: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x16d030u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16d034: 0x8fb200d0  lw          $s2, 0xD0($sp)
    ctx->pc = 0x16d034u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16d038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D038u;
    {
        const bool branch_taken_0x16d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d038) {
            ctx->pc = 0x16D04Cu;
            goto label_16d04c;
        }
    }
    ctx->pc = 0x16D040u;
label_16d040:
    // 0x16d040: 0x8fb100d0  lw          $s1, 0xD0($sp)
    ctx->pc = 0x16d040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16d044: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x16d044u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16d048: 0x0  nop
    ctx->pc = 0x16d048u;
    // NOP
label_16d04c:
    // 0x16d04c: 0x271082a  slt         $at, $s3, $s1
    ctx->pc = 0x16d04cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16d050: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D050u;
    {
        const bool branch_taken_0x16d050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d050) {
            ctx->pc = 0x16D05Cu;
            goto label_16d05c;
        }
    }
    ctx->pc = 0x16D058u;
    // 0x16d058: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x16d058u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16d05c:
    // 0x16d05c: 0x256082a  slt         $at, $s2, $s6
    ctx->pc = 0x16d05cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x16d060: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D060u;
    {
        const bool branch_taken_0x16d060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d060) {
            ctx->pc = 0x16D06Cu;
            goto label_16d06c;
        }
    }
    ctx->pc = 0x16D068u;
    // 0x16d068: 0x7240b628  paddub      $s6, $s2, $zero
    ctx->pc = 0x16d068u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_16d06c:
    // 0x16d06c: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x16d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x16d070: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16d070u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16d074: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d078: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16d078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16d07c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d080: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d084: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x16d084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16d088: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d08c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d090: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x16d090u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d094: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x16d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16d098: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16d09c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d09cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d0a0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D0A0u;
    {
        const bool branch_taken_0x16d0a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0a0) {
            ctx->pc = 0x16D0B8u;
            goto label_16d0b8;
        }
    }
    ctx->pc = 0x16D0A8u;
    // 0x16d0a8: 0x8fb400a4  lw          $s4, 0xA4($sp)
    ctx->pc = 0x16d0a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16d0ac: 0x8fb700b4  lw          $s7, 0xB4($sp)
    ctx->pc = 0x16d0acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16d0b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D0B0u;
    {
        const bool branch_taken_0x16d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0b0) {
            ctx->pc = 0x16D0C4u;
            goto label_16d0c4;
        }
    }
    ctx->pc = 0x16D0B8u;
label_16d0b8:
    // 0x16d0b8: 0x8fb400b4  lw          $s4, 0xB4($sp)
    ctx->pc = 0x16d0b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16d0bc: 0x8fb700a4  lw          $s7, 0xA4($sp)
    ctx->pc = 0x16d0bcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16d0c0: 0x0  nop
    ctx->pc = 0x16d0c0u;
    // NOP
label_16d0c4:
    // 0x16d0c4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x16d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16d0c8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16d0cc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d0d0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D0D0u;
    {
        const bool branch_taken_0x16d0d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0d0) {
            ctx->pc = 0x16D0E8u;
            goto label_16d0e8;
        }
    }
    ctx->pc = 0x16D0D8u;
    // 0x16d0d8: 0x8fb100c4  lw          $s1, 0xC4($sp)
    ctx->pc = 0x16d0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16d0dc: 0x8fb200d4  lw          $s2, 0xD4($sp)
    ctx->pc = 0x16d0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16d0e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D0E0u;
    {
        const bool branch_taken_0x16d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0e0) {
            ctx->pc = 0x16D0F4u;
            goto label_16d0f4;
        }
    }
    ctx->pc = 0x16D0E8u;
label_16d0e8:
    // 0x16d0e8: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x16d0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16d0ec: 0x8fb200c4  lw          $s2, 0xC4($sp)
    ctx->pc = 0x16d0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16d0f0: 0x0  nop
    ctx->pc = 0x16d0f0u;
    // NOP
label_16d0f4:
    // 0x16d0f4: 0x291082a  slt         $at, $s4, $s1
    ctx->pc = 0x16d0f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16d0f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D0F8u;
    {
        const bool branch_taken_0x16d0f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0f8) {
            ctx->pc = 0x16D104u;
            goto label_16d104;
        }
    }
    ctx->pc = 0x16D100u;
    // 0x16d100: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x16d100u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16d104:
    // 0x16d104: 0x257082a  slt         $at, $s2, $s7
    ctx->pc = 0x16d104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x16d108: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D108u;
    {
        const bool branch_taken_0x16d108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d108) {
            ctx->pc = 0x16D114u;
            goto label_16d114;
        }
    }
    ctx->pc = 0x16D110u;
    // 0x16d110: 0x7240be28  paddub      $s7, $s2, $zero
    ctx->pc = 0x16d110u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_16d114:
    // 0x16d114: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x16d118: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16d118u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16d11c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d120: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16d120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16d124: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d128: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d12c: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x16d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16d130: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16d130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d134: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d138: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x16d138u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d13c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d140: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16d144: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d148: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D148u;
    {
        const bool branch_taken_0x16d148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d148) {
            ctx->pc = 0x16D160u;
            goto label_16d160;
        }
    }
    ctx->pc = 0x16D150u;
    // 0x16d150: 0x8fb500a8  lw          $s5, 0xA8($sp)
    ctx->pc = 0x16d150u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d154: 0x8fbe00b8  lw          $fp, 0xB8($sp)
    ctx->pc = 0x16d154u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16d158: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D158u;
    {
        const bool branch_taken_0x16d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d158) {
            ctx->pc = 0x16D16Cu;
            goto label_16d16c;
        }
    }
    ctx->pc = 0x16D160u;
label_16d160:
    // 0x16d160: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x16d160u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16d164: 0x8fbe00a8  lw          $fp, 0xA8($sp)
    ctx->pc = 0x16d164u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d168: 0x0  nop
    ctx->pc = 0x16d168u;
    // NOP
label_16d16c:
    // 0x16d16c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x16d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16d170: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16d174: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d178: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D178u;
    {
        const bool branch_taken_0x16d178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d178) {
            ctx->pc = 0x16D190u;
            goto label_16d190;
        }
    }
    ctx->pc = 0x16D180u;
    // 0x16d180: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x16d180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16d184: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x16d184u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16d188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D188u;
    {
        const bool branch_taken_0x16d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d188) {
            ctx->pc = 0x16D19Cu;
            goto label_16d19c;
        }
    }
    ctx->pc = 0x16D190u;
label_16d190:
    // 0x16d190: 0x8fb100d8  lw          $s1, 0xD8($sp)
    ctx->pc = 0x16d190u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16d194: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x16d194u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16d198: 0x0  nop
    ctx->pc = 0x16d198u;
    // NOP
label_16d19c:
    // 0x16d19c: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x16d19cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16d1a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D1A0u;
    {
        const bool branch_taken_0x16d1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1a0) {
            ctx->pc = 0x16D1ACu;
            goto label_16d1ac;
        }
    }
    ctx->pc = 0x16D1A8u;
    // 0x16d1a8: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x16d1a8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16d1ac:
    // 0x16d1ac: 0x25e082a  slt         $at, $s2, $fp
    ctx->pc = 0x16d1acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x16d1b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D1B0u;
    {
        const bool branch_taken_0x16d1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1b0) {
            ctx->pc = 0x16D1BCu;
            goto label_16d1bc;
        }
    }
    ctx->pc = 0x16D1B8u;
    // 0x16d1b8: 0x7240f628  paddub      $fp, $s2, $zero
    ctx->pc = 0x16d1b8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_16d1bc:
    // 0x16d1bc: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x16d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x16d1c0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16d1c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16d1c4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d1c8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16d1cc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d1d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d1d4: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x16d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16d1d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16d1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d1dc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d1e0: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x16d1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d1e4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16d1e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d1ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d1f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d1f4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d1f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d1f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d1fc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d200: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x16d200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d204: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d208: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d20c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16d210: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d214: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d218: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d218u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d21c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d220: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x16d220u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d224: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d228: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d22c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d230: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d234: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d238: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d238u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d23c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d240: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x16d240u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d244: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16d244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16d248: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d24c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d250: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16d250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d254: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d258: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d25c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d260: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x16d260u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d264: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d268: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d26c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16d270: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d270u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d274: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d278: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d278u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d27c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d280: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x16d280u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d284: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d288: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16d288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d28c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16d290: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d294: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d298: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d298u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d29c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2a0: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x16d2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d2a4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16d2a8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d2b0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d2b4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d2b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d2b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d2bc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2c0: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x16d2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d2c4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d2cc: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16d2d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d2d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d2d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d2d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d2dc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2e0: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x16d2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d2e4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d2ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16d2f0: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x16d2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d2f4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x16d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16d2f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d2f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d2fc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d300: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x16d300u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d304: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x16d304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16d308: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x16d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d30c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d310: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x16d310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d314: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d318: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d318u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d31c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d320: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x16d320u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d324: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d328: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d32c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16d330: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d334: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d338: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d33c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d340: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x16d340u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d344: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d348: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d34c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16d350: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d354: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d358: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d358u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d35c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d360: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x16d360u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d364: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16d368: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16d368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16d36c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x16d36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16d370: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x16d370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16d374: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x16D374u;
    SET_GPR_U32(ctx, 31, 0x16D37Cu);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x16D374u, 0x16D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D37Cu;
label_16d37c:
    // 0x16d37c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x16d37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d380: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d384: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x16d384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x16d388: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x16d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d38c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d390: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x16d390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x16d394: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x16d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d398: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d39c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x16d39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x16d3a0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d3a4: 0x0  nop
    ctx->pc = 0x16d3a4u;
    // NOP
label_16d3a8:
    // 0x16d3a8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x16d3a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16d3ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16d3acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16d3b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16d3b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16d3b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16d3b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16d3b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16d3b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d3bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16d3bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d3c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d3c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d3c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d3c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d3cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d3d0: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x16d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x16d3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D3DCu;
}
