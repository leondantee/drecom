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

// Function: entry_002cba98
// Address: 0x2cba98 - 0x2cbc24
void entry_002cba98_0x2cba98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cba98_0x2cba98");
#endif

    switch (ctx->pc) {
        case 0x2cbab0u: goto label_2cbab0;
        case 0x2cbad0u: goto label_2cbad0;
        case 0x2cbae0u: goto label_2cbae0;
        case 0x2cbaf0u: goto label_2cbaf0;
        case 0x2cbb28u: goto label_2cbb28;
        case 0x2cbc04u: goto label_2cbc04;
        default: break;
    }

    ctx->pc = 0x2cba98u;

    // 0x2cba98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba9c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2cba9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbaa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cbaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbaa4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cbaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cbaa8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CBAA8u;
    SET_GPR_U32(ctx, 31, 0x2CBAB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CBAA8u, 0x2CBAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAB0u;
label_2cbab0:
    // 0x2cbab0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cbab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbab8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbabc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cbabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cbac0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cbac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cbac4: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cbac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cbac8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CBAC8u;
    SET_GPR_U32(ctx, 31, 0x2CBAD0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CBAC8u, 0x2CBAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAD0u;
label_2cbad0:
    // 0x2cbad0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cbad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbad4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cbad4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cbad8: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CBAD8u;
    SET_GPR_U32(ctx, 31, 0x2CBAE0u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CBAD8u, 0x2CBAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAE0u;
label_2cbae0:
    // 0x2cbae0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cbae0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cbae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cbae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbae8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CBAE8u;
    SET_GPR_U32(ctx, 31, 0x2CBAF0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CBAE8u, 0x2CBAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAF0u;
label_2cbaf0:
    // 0x2cbaf0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cbaf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cbaf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbaf8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cbaf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cbafc: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2CBAFCu;
    {
        const bool branch_taken_0x2cbafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbafc) {
            ctx->pc = 0x2CBC24u;
            return;
        }
    }
    ctx->pc = 0x2CBB04u;
    // 0x2cbb04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb0c: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2cbb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2cbb10: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2cbb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2cbb14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2cbb14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb1c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cbb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cbb20: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CBB20u;
    SET_GPR_U32(ctx, 31, 0x2CBB28u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CBB20u, 0x2CBB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB28u;
label_2cbb28:
    // 0x2cbb28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cbb28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cbb2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cbb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cbb30: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2cbb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2cbb34: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x2cbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2cbb38: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2cbb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cbb3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cbb3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cbb40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb44: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cbb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbb48: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x2cbb48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cbb4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb50: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2cbb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb54: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2cbb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2cbb58: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x2cbb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x2cbb5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb60: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2cbb60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb64: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2cbb64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2cbb68: 0xe5000044  swc1        $f0, 0x44($t0)
    ctx->pc = 0x2cbb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 68), bits); }
    // 0x2cbb6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb74: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbb78: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cbb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cbb7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb84: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cbb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cbb88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb90: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cbb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cbb94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb9c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cbb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cbba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbba4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbba8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cbba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cbbac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbbb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbb4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2cbbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cbbb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbbc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2cbbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbbc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbc4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2cbbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbbc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbcc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2cbbccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbbd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbd4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cbbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cbbd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbdc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cbbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbbe0: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2cbbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cbbe4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2cbbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2cbbe8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2cbbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2cbbec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbbf0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbf4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbbf8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2cbbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cbbfc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CBBFCu;
    SET_GPR_U32(ctx, 31, 0x2CBC04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CBBFCu, 0x2CBC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC04u;
label_2cbc04:
    // 0x2cbc04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2cbc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cbc08: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2cbc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2cbc0c: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2cbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2cbc10: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2cbc10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2cbc14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2cbc14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2cbc18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbc1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cbc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cbc20: 0xa4850058  sh          $a1, 0x58($a0)
    ctx->pc = 0x2cbc20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x2cbc24u;
}
