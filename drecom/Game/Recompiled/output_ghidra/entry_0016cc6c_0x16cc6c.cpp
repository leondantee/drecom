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

// Function: entry_0016cc6c
// Address: 0x16cc6c - 0x16d010
void entry_0016cc6c_0x16cc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cc6c_0x16cc6c");
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
        default: break;
    }

    ctx->pc = 0x16cc6cu;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x16D010u;
}
