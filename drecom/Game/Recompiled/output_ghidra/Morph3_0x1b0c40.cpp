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

// Function: Morph3
// Address: 0x1b0c40 - 0x1b101c
void Morph3_0x1b0c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Morph3_0x1b0c40");
#endif

    switch (ctx->pc) {
        case 0x1b0e0cu: goto label_1b0e0c;
        case 0x1b0e88u: goto label_1b0e88;
        case 0x1b0ea0u: goto label_1b0ea0;
        case 0x1b0eb8u: goto label_1b0eb8;
        default: break;
    }

    ctx->pc = 0x1b0c40u;

    // 0x1b0c40: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1b0c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1b0c44: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1b0c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1b0c48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b0c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b0c4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b0c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b0c50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b0c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b0c54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b0c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b0c58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b0c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b0c5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b0c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b0c60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b0c64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0c6c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1b0c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1b0c70: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x1b0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x1b0c74: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1b0c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0c78: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0c7c: 0x9042001a  lbu         $v0, 0x1A($v0)
    ctx->pc = 0x1b0c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x1b0c80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b0c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0c84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b0c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0c8c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b0c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0c90: 0xa3a200fc  sb          $v0, 0xFC($sp)
    ctx->pc = 0x1b0c90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0c94: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1b0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0c98: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0c9c: 0x9042001b  lbu         $v0, 0x1B($v0)
    ctx->pc = 0x1b0c9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x1b0ca0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b0ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0ca4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b0ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0cac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b0cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0cb0: 0xa3a200fd  sb          $v0, 0xFD($sp)
    ctx->pc = 0x1b0cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 253), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0cb4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1b0cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0cb8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0cbc: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x1b0cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b0cc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b0cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0cc4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b0cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0ccc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b0cccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0cd0: 0xa3a200fe  sb          $v0, 0xFE($sp)
    ctx->pc = 0x1b0cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 254), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0cd4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1b0cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0cd8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0cdc: 0x90420019  lbu         $v0, 0x19($v0)
    ctx->pc = 0x1b0cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1b0ce0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b0ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0ce4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b0ce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0cec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b0cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0cf0: 0xa3a200ff  sb          $v0, 0xFF($sp)
    ctx->pc = 0x1b0cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0cf4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0cf8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1b0cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0cfc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1b0cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1b0d00: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0d04: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1b0d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0d08: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1b0d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1b0d0c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b0d10: 0x8c5e008c  lw          $fp, 0x8C($v0)
    ctx->pc = 0x1b0d10u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1b0d14: 0x93a200fc  lbu         $v0, 0xFC($sp)
    ctx->pc = 0x1b0d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1b0d18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0d1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0d20: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0d24: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b0d28: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0d2c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1b0d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1b0d30: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x1b0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1b0d34: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1b0d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1b0d38: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1b0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1b0d3c: 0x24560004  addiu       $s6, $v0, 0x4
    ctx->pc = 0x1b0d3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b0d40: 0x93a200fd  lbu         $v0, 0xFD($sp)
    ctx->pc = 0x1b0d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 253)));
    // 0x1b0d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0d48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0d4c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0d50: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b0d54: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0d58: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1b0d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x1b0d5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1b0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1b0d60: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1b0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1b0d64: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1b0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1b0d68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b0d6c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x1b0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x1b0d70: 0x93a200fe  lbu         $v0, 0xFE($sp)
    ctx->pc = 0x1b0d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 254)));
    // 0x1b0d74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0d7c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0d80: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b0d84: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0d88: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1b0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x1b0d8c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1b0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1b0d90: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1b0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1b0d94: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1b0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1b0d98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b0d9c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1b0d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x1b0da0: 0x93a200ff  lbu         $v0, 0xFF($sp)
    ctx->pc = 0x1b0da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 255)));
    // 0x1b0da4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0da8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0dac: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0db0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b0db4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0db8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1b0db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1b0dbc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b0dc0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1b0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1b0dc4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1b0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b0dc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b0dcc: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1b0dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1b0dd0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b0dd4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1b0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1b0dd8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1b0ddc: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1b0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1b0de0: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b0de0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b0de4: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x1b0de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b0de8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b0dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0df0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0df4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0df8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0dfc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1b0e00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0e04: 0x8c570034  lw          $s7, 0x34($v0)
    ctx->pc = 0x1b0e04u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b0e08: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1b0e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1b0e0c:
    // 0x1b0e0c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x1b0e0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b0e10: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x1b0e10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e14: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x1b0e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1b0e18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0e20: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1b0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1b0e24: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1b0e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0e28: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x1b0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1b0e2c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b0e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b0e30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0e38: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1b0e3c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1b0e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0e40: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1b0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1b0e44: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b0e44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b0e48: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e4c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0e50: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1b0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1b0e54: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1b0e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0e58: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1b0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1b0e5c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b0e5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b0e60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0e68: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1b0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b0e6c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1b0e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0e70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b0e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b0e74: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1b0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b0e78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0e7c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1b0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1b0e80: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x1b0e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1b0e84: 0x0  nop
    ctx->pc = 0x1b0e84u;
    // NOP
label_1b0e88:
    // 0x1b0e88: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b0e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b0e8c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1b0e8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b0e90: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1b0e90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b0e94: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x1b0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0e98: 0xc06c560  jal         func_1B1580
    ctx->pc = 0x1B0E98u;
    SET_GPR_U32(ctx, 31, 0x1B0EA0u);
    ctx->pc = 0x1B1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1580u, 0x1B0E98u, 0x1B0EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EA0u;
label_1b0ea0:
    // 0x1b0ea0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x1b0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1b0ea4: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1b0ea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b0ea8: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1b0ea8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b0eac: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x1b0eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0eb0: 0xc06c560  jal         func_1B1580
    ctx->pc = 0x1B0EB0u;
    SET_GPR_U32(ctx, 31, 0x1B0EB8u);
    ctx->pc = 0x1B1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1580u, 0x1B0EB0u, 0x1B0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EB8u;
label_1b0eb8:
    // 0x1b0eb8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0ebc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1b0ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0ec0: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1b0ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0ec4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b0ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0ec8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b0ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b0ecc: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0ed0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1b0ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0ed4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1b0ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0ed8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b0ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0edc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b0edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b0ee0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0ee4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1b0ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0ee8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1b0ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0eec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b0eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0ef0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b0ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b0ef4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0ef8: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1b0ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0efc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f04: 0x0  nop
    ctx->pc = 0x1b0f04u;
    // NOP
    // 0x1b0f08: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f0c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1b0f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f10: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f14: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b0f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f1c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b0f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b0f20: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0f24: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1b0f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0f28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f30: 0x0  nop
    ctx->pc = 0x1b0f30u;
    // NOP
    // 0x1b0f34: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f38: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1b0f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f3c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f40: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b0f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f48: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b0f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b0f4c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0f50: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1b0f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0f54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f5c: 0x0  nop
    ctx->pc = 0x1b0f5cu;
    // NOP
    // 0x1b0f60: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f64: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1b0f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f6c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b0f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b0f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b0f78: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b0f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b0f7c: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x1b0f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1b0f80: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x1b0f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x1b0f84: 0x26730006  addiu       $s3, $s3, 0x6
    ctx->pc = 0x1b0f84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x1b0f88: 0x26940006  addiu       $s4, $s4, 0x6
    ctx->pc = 0x1b0f88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
    // 0x1b0f8c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1b0f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1b0f90: 0x16a0ffbd  bnez        $s5, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1B0F90u;
    {
        const bool branch_taken_0x1b0f90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f90) {
            ctx->pc = 0x1B0E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0e88;
        }
    }
    ctx->pc = 0x1B0F98u;
    // 0x1b0f98: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b0f98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b0f9c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x1b0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1b0fa0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b0fa4: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x1b0fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x1b0fa8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1b0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1b0fac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b0facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b0fb0: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x1b0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x1b0fb4: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x1b0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1b0fb8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b0fbc: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x1b0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x1b0fc0: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x1b0fc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x1b0fc4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1b0fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b0fc8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0fcc: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1b0fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x1b0fd0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0fd4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1b0fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1b0fd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0fdc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0fdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0fe0: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
    ctx->pc = 0x1B0FE0u;
    {
        const bool branch_taken_0x1b0fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0fe0) {
            ctx->pc = 0x1B0E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0e0c;
        }
    }
    ctx->pc = 0x1B0FE8u;
    // 0x1b0fe8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b0fe8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0fec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b0fecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0ff0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0ff0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0ff4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0ff4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0ff8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0ff8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0ffc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0ffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1000: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1004: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b100c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b100cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1010: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1b1010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b1014: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B101Cu;
}
