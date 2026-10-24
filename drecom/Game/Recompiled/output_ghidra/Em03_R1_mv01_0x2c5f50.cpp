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

// Function: Em03_R1_mv01
// Address: 0x2c5f50 - 0x2c6298
void Em03_R1_mv01_0x2c5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_mv01_0x2c5f50");
#endif

    switch (ctx->pc) {
        case 0x2c5fa8u: goto label_2c5fa8;
        case 0x2c5fe4u: goto label_2c5fe4;
        case 0x2c5fecu: goto label_2c5fec;
        case 0x2c60acu: goto label_2c60ac;
        case 0x2c60b8u: goto label_2c60b8;
        case 0x2c60c8u: goto label_2c60c8;
        case 0x2c60d4u: goto label_2c60d4;
        case 0x2c6120u: goto label_2c6120;
        case 0x2c616cu: goto label_2c616c;
        case 0x2c61c8u: goto label_2c61c8;
        default: break;
    }

    ctx->pc = 0x2c5f50u;

    // 0x2c5f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c5f54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c5f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c5f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5f5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2c5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2c5f60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5f64: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2c5f64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c5f68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5f6c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c5f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c5f70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c5f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c5f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5f78: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2C5F78u;
    {
        const bool branch_taken_0x2c5f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c5f78) {
            ctx->pc = 0x2C609Cu;
            goto label_2c609c;
        }
    }
    ctx->pc = 0x2C5F80u;
    // 0x2c5f80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5F80u;
    {
        const bool branch_taken_0x2c5f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5f80) {
            ctx->pc = 0x2C5F90u;
            goto label_2c5f90;
        }
    }
    ctx->pc = 0x2C5F88u;
    // 0x2c5f88: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2C5F88u;
    {
        const bool branch_taken_0x2c5f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5f88) {
            ctx->pc = 0x2C6284u;
            goto label_2c6284;
        }
    }
    ctx->pc = 0x2C5F90u;
label_2c5f90:
    // 0x2c5f90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5f94: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2c5f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c5f98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c5f9c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2c5f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c5fa0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5FA0u;
    SET_GPR_U32(ctx, 31, 0x2C5FA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5FA0u, 0x2C5FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FA8u;
label_2c5fa8:
    // 0x2c5fa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5fac: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2c5facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c5fb0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2c5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2c5fb4: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x2c5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x2c5fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5fbc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2c5fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5fc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5fc4: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x2c5fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2c5fc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5fcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c5fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5fd0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c5fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c5fd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c5fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5fd8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c5fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c5fdc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C5FDCu;
    SET_GPR_U32(ctx, 31, 0x2C5FE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C5FDCu, 0x2C5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FE4u;
label_2c5fe4:
    // 0x2c5fe4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5FE4u;
    SET_GPR_U32(ctx, 31, 0x2C5FECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5FE4u, 0x2C5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FECu;
label_2c5fec:
    // 0x2c5fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5ff0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2c5ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2c5ff4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x2c5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2c5ff8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c5ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5ffc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c5ffcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c6000: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6004: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2c6004u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6008: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c600c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6010: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c6014: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c6014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c6018: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c6018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c601c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6020: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c6020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6024: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c6024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c6028: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2c6028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2c602c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c602cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c6030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6034: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6038: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c6038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c603c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c603cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6040: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6044: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6048: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c6048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c604c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c604cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6050: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6054: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6058: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c6058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c605c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c605cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6060: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6064: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6068: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c6068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c606c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c606cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6074: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6078: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c6078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2c607c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c607cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6080: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6084: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6088: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c6088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c608c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c608cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6090: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6094: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6098: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c6098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_2c609c:
    // 0x2c609c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c60a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c60a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C60A4u;
    SET_GPR_U32(ctx, 31, 0x2C60ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C60A4u, 0x2C60ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60ACu;
label_2c60ac:
    // 0x2c60ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c60acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60b0: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2C60B0u;
    SET_GPR_U32(ctx, 31, 0x2C60B8u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2C60B0u, 0x2C60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60B8u;
label_2c60b8:
    // 0x2c60b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c60bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c60c0: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C60C0u;
    SET_GPR_U32(ctx, 31, 0x2C60C8u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C60C0u, 0x2C60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60C8u;
label_2c60c8:
    // 0x2c60c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60cc: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C60CCu;
    SET_GPR_U32(ctx, 31, 0x2C60D4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C60CCu, 0x2C60D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60D4u;
label_2c60d4:
    // 0x2c60d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2c60d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60d8: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x2c60d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2c60dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c60e0: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x2c60e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c60e4: 0x14800067  bnez        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2C60E4u;
    {
        const bool branch_taken_0x2c60e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c60e4) {
            ctx->pc = 0x2C6284u;
            goto label_2c6284;
        }
    }
    ctx->pc = 0x2C60ECu;
    // 0x2c60ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c60f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60f4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c60f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c60f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60fc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c60fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6100: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6104: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6108: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c610c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c610cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6110: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6114: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c6118: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6118u;
    SET_GPR_U32(ctx, 31, 0x2C6120u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6118u, 0x2C6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6120u;
label_2c6120:
    // 0x2c6120: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c6120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c6124: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c6124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c6128: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c6128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c612c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C612Cu;
    {
        const bool branch_taken_0x2c612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c612c) {
            ctx->pc = 0x2C6164u;
            goto label_2c6164;
        }
    }
    ctx->pc = 0x2C6134u;
    // 0x2c6134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6138: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c613c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c613cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6140: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c6140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6144: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6148: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c6148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c614c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6150: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6150u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6154: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6158: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c6158u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c615c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6160: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2c6164:
    // 0x2c6164: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6164u;
    SET_GPR_U32(ctx, 31, 0x2C616Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6164u, 0x2C616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C616Cu;
label_2c616c:
    // 0x2c616c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6170: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2c6170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2c6174: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2c6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2c6178: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c6178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c617c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c617cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c6180: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6188: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2c6188u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c618c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6190: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c6190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6194: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c6194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c6198: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2c6198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2c619c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c61a0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c61a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61a8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c61ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2c61acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2c61b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2c61b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2c61b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c61b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c61b8: 0x0  nop
    ctx->pc = 0x2c61b8u;
    // NOP
    // 0x2c61bc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2c61bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c61c0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C61C0u;
    SET_GPR_U32(ctx, 31, 0x2C61C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C61C0u, 0x2C61C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61C8u;
label_2c61c8:
    // 0x2c61c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61cc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2c61ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2c61d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c61d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c61d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c61dc: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2c61dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2c61e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c61e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c61e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c61ec: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2c61ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2c61f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c61f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c61f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c61f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c61fc: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x2c61fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6200: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6204: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6208: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c6208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c620c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c6210: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6214: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2c6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6218: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c6218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c621c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6220: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x2c6220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6224: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6228: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x2c6228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x2c622c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6230: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6234: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c6234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c6238: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c6238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c623c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c623cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6240: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2c6240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6244: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c6244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6248: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c6248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c624c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2c624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6254: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2c6254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2c6258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c6258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c625c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6260: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c6260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c6264: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c6264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c6268: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c626c: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2c626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c6270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6278: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x2c6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c627c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c627cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6280: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x2c6280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
label_2c6284:
    // 0x2c6284: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c6284u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c628c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c628cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c6290: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6298u;
}
