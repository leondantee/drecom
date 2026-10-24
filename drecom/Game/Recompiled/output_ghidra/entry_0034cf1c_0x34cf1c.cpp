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

// Function: entry_0034cf1c
// Address: 0x34cf1c - 0x34d064
void entry_0034cf1c_0x34cf1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034cf1c_0x34cf1c");
#endif

    ctx->pc = 0x34cf1cu;

    // 0x34cf1c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf20: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x34cf20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34cf24: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x34cf24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34cf28: 0x30a60010  andi        $a2, $a1, 0x10
    ctx->pc = 0x34cf28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x34cf2c: 0x10c00059  beqz        $a2, . + 4 + (0x59 << 2)
    ctx->pc = 0x34CF2Cu;
    {
        const bool branch_taken_0x34cf2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cf2c) {
            ctx->pc = 0x34D094u;
            return;
        }
    }
    ctx->pc = 0x34CF34u;
    // 0x34cf34: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34cf34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf38: 0x84e8127e  lh          $t0, 0x127E($a3)
    ctx->pc = 0x34cf38u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4734)));
    // 0x34cf3c: 0x11000049  beqz        $t0, . + 4 + (0x49 << 2)
    ctx->pc = 0x34CF3Cu;
    {
        const bool branch_taken_0x34cf3c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cf3c) {
            ctx->pc = 0x34D064u;
            return;
        }
    }
    ctx->pc = 0x34CF44u;
    // 0x34cf44: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf4c: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34cf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cf50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34cf54: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf5c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x34cf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x34cf60: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x34cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x34cf64: 0x34908889  ori         $s0, $a0, 0x8889
    ctx->pc = 0x34cf64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x34cf68: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34cf68u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cf6c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf74: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34cf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34cf78: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf80: 0xa060008e  sb          $zero, 0x8E($v1)
    ctx->pc = 0x34cf80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cf84: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf8c: 0xa4800090  sh          $zero, 0x90($a0)
    ctx->pc = 0x34cf8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34cf90: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x34cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x34cf94: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34cf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34cf98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cf98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cf9c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cfa0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34cfa4: 0xe4a00094  swc1        $f0, 0x94($a1)
    ctx->pc = 0x34cfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 148), bits); }
    // 0x34cfa8: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x34cfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x34cfac: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x34cfacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x34cfb0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x34cfb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cfb4: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x34cfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cfb8: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x34cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x34cfbc: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x34cfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x34cfc0: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x34cfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x34cfc4: 0x34c3d70a  ori         $v1, $a2, 0xD70A
    ctx->pc = 0x34cfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x34cfc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cfc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cfcc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cfd0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34cfd4: 0xe4a0009c  swc1        $f0, 0x9C($a1)
    ctx->pc = 0x34cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 156), bits); }
    // 0x34cfd8: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x34cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
    // 0x34cfdc: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x34cfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34cfe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cfe4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cfe8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cfec: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x34cfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x34cff0: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x34cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x34cff4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34cff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34cff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cffc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d000: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x34d000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34d004: 0xe4e000a4  swc1        $f0, 0xA4($a3)
    ctx->pc = 0x34d004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 164), bits); }
    // 0x34d008: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x34d008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
    // 0x34d00c: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x34d00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34d010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d014: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d018: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34d018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d01c: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x34d01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x34d020: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x34d020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x34d024: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34d024u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d028: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34d028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d02c: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x34d02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x34d030: 0xe4e000ac  swc1        $f0, 0xAC($a3)
    ctx->pc = 0x34d030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 172), bits); }
    // 0x34d034: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x34d034u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x34d038: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x34d038u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d03c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d040: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d044: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x34d044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x34d048: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x34d048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x34d04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d050: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x34d050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d054: 0x26041330  addiu       $a0, $s0, 0x1330
    ctx->pc = 0x34d054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34d058: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x34d058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x34d05c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34D05Cu;
    {
        const bool branch_taken_0x34d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d05c) {
            ctx->pc = 0x34D094u;
            return;
        }
    }
    ctx->pc = 0x34D064u;
}
