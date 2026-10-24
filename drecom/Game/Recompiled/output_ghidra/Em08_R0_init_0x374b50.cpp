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

// Function: Em08_R0_init
// Address: 0x374b50 - 0x374f30
void Em08_R0_init_0x374b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R0_init_0x374b50");
#endif

    switch (ctx->pc) {
        case 0x374c50u: goto label_374c50;
        case 0x374e08u: goto label_374e08;
        case 0x374e18u: goto label_374e18;
        case 0x374e24u: goto label_374e24;
        case 0x374e34u: goto label_374e34;
        case 0x374e50u: goto label_374e50;
        case 0x374e64u: goto label_374e64;
        case 0x374e84u: goto label_374e84;
        case 0x374e98u: goto label_374e98;
        default: break;
    }

    ctx->pc = 0x374b50u;

    // 0x374b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x374b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x374b54: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x374b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x374b58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x374b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x374b5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374b60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374b64: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x374b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x374b68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x374b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374b6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374b70: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x374b70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x374b74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374b78: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x374b78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x374b7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374b80: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x374b80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x374b84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374b88: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x374b88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x374b8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374b90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x374b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x374b94: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x374b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x374b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374b9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374ba0: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x374ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x374ba4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x374ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x374ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374bac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374bb0: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x374bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x374bb4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x374bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x374bb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374bbc: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x374bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x374bc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374bc4: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x374bc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x374bc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x374bcc: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x374bccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x374bd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374bd4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x374bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x374bd8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x374bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x374bdc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x374bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x374be0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374be4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x374be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374be8: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x374be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x374bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374bf0: 0x0  nop
    ctx->pc = 0x374bf0u;
    // NOP
    // 0x374bf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x374bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x374bf8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x374bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x374bfc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374c00: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x374c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374c04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374c08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x374c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x374c0c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x374c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x374c10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374c14: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x374c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374c18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374c1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x374c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x374c20: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x374c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x374c24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374c28: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x374c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374c2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374c30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x374c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x374c34: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x374c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x374c38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374c3c: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x374c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x374c40: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x374c40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x374c44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x374c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374c48: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x374C48u;
    SET_GPR_U32(ctx, 31, 0x374C50u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x374C48u, 0x374C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C50u;
label_374c50:
    // 0x374c50: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x374c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x374c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374c58: 0x0  nop
    ctx->pc = 0x374c58u;
    // NOP
    // 0x374c5c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x374c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x374c60: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x374c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x374c64: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x374c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x374c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374c6c: 0x0  nop
    ctx->pc = 0x374c6cu;
    // NOP
    // 0x374c70: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x374c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x374c74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374c78: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x374c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x374c7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x374c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x374c80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x374c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x374c84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374c88: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x374c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x374c8c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x374c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x374c90: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x374c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x374c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374c98: 0x0  nop
    ctx->pc = 0x374c98u;
    // NOP
    // 0x374c9c: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x374c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x374ca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374ca4: 0x0  nop
    ctx->pc = 0x374ca4u;
    // NOP
    // 0x374ca8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x374ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x374cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374cb0: 0x0  nop
    ctx->pc = 0x374cb0u;
    // NOP
    // 0x374cb4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x374cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x374cb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374cbc: 0x0  nop
    ctx->pc = 0x374cbcu;
    // NOP
    // 0x374cc0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x374cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x374cc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x374cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x374cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374ccc: 0x0  nop
    ctx->pc = 0x374cccu;
    // NOP
    // 0x374cd0: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x374cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x374cd4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374cd8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x374cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374cdc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x374cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x374ce0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x374ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x374ce4: 0x2443b600  addiu       $v1, $v0, -0x4A00
    ctx->pc = 0x374ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948352));
    // 0x374ce8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374cec: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x374cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x374cf0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x374cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x374cf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374cf8: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x374cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x374cfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x374cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374d00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d04: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x374d04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x374d08: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x374d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x374d0c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x374d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x374d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374d14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d18: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x374d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x374d1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d20: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x374d20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x374d24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d28: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x374d28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x374d2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d30: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x374d30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x374d34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d38: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x374d38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x374d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374d40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d44: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x374d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x374d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374d4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d50: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x374d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x374d54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374d58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d5c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x374d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x374d60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d64: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x374d64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x374d68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x374d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x374d6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x374d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x374d70: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x374D70u;
    {
        const bool branch_taken_0x374d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x374d70) {
            ctx->pc = 0x374DE8u;
            goto label_374de8;
        }
    }
    ctx->pc = 0x374D78u;
    // 0x374d78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x374d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x374d80: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x374d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x374d84: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x374d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x374d88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x374d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x374d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374d90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374d94: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x374d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x374d98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x374d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x374d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374da0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374da4: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x374da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x374da8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x374da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x374dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374db0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374db4: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x374db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x374db8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x374db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x374dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374dc0: 0x0  nop
    ctx->pc = 0x374dc0u;
    // NOP
    // 0x374dc4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x374dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x374dc8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x374dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x374dcc: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x374dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x374dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374dd4: 0x0  nop
    ctx->pc = 0x374dd4u;
    // NOP
    // 0x374dd8: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x374dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x374ddc: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x374ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x374de0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374de4: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x374de4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_374de8:
    // 0x374de8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374dec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x374decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374df0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x374df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x374df4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x374df4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374df8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x374df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374dfc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x374dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x374e00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x374E00u;
    SET_GPR_U32(ctx, 31, 0x374E08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x374E00u, 0x374E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E08u;
label_374e08:
    // 0x374e08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x374e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x374e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x374e10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x374E10u;
    SET_GPR_U32(ctx, 31, 0x374E18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x374E10u, 0x374E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E18u;
label_374e18:
    // 0x374e18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x374e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e1c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x374E1Cu;
    SET_GPR_U32(ctx, 31, 0x374E24u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x374E1Cu, 0x374E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E24u;
label_374e24:
    // 0x374e24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x374e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e28: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x374e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x374e2c: 0xc096188  jal         func_258620
    ctx->pc = 0x374E2Cu;
    SET_GPR_U32(ctx, 31, 0x374E34u);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x374E2Cu, 0x374E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E34u;
label_374e34:
    // 0x374e34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e38: 0x8c520058  lw          $s2, 0x58($v0)
    ctx->pc = 0x374e38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x374e3c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x374e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x374e40: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x374e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374e44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x374e44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374e48: 0xc096254  jal         func_258950
    ctx->pc = 0x374E48u;
    SET_GPR_U32(ctx, 31, 0x374E50u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x374E48u, 0x374E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E50u;
label_374e50:
    // 0x374e50: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x374e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x374e54: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x374e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374e58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x374e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374e5c: 0xc096254  jal         func_258950
    ctx->pc = 0x374E5Cu;
    SET_GPR_U32(ctx, 31, 0x374E64u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x374E5Cu, 0x374E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E64u;
label_374e64:
    // 0x374e64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e68: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x374e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x374e6c: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x374e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x374e70: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x374e70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x374e74: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x374e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374e78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x374e78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374e7c: 0xc096254  jal         func_258950
    ctx->pc = 0x374E7Cu;
    SET_GPR_U32(ctx, 31, 0x374E84u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x374E7Cu, 0x374E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E84u;
label_374e84:
    // 0x374e84: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x374e84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x374e88: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x374e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374e8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x374e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374e90: 0xc096254  jal         func_258950
    ctx->pc = 0x374E90u;
    SET_GPR_U32(ctx, 31, 0x374E98u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x374E90u, 0x374E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E98u;
label_374e98:
    // 0x374e98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e9c: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x374e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x374ea0: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x374ea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x374ea4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x374ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x374ea8: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x374ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x374eac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374eb0: 0x0  nop
    ctx->pc = 0x374eb0u;
    // NOP
    // 0x374eb4: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x374eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x374eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374ebc: 0x0  nop
    ctx->pc = 0x374ebcu;
    // NOP
    // 0x374ec0: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x374ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x374ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374ec8: 0x0  nop
    ctx->pc = 0x374ec8u;
    // NOP
    // 0x374ecc: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x374eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x374ed0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374ed4: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x374ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x374ed8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x374ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x374edc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x374edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x374ee0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x374EE0u;
    {
        const bool branch_taken_0x374ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374ee0) {
            ctx->pc = 0x374F14u;
            goto label_374f14;
        }
    }
    ctx->pc = 0x374EE8u;
    // 0x374ee8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x374ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374eec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374ef0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x374ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x374ef4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374ef8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x374ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x374efc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374f00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x374f00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x374f04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374f08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x374f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x374f0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374f10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x374f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_374f14:
    // 0x374f14: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x374f14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374f18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x374f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374f24: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x374f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x374f28: 0x3e00008  jr          $ra
    ctx->pc = 0x374F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374F30u;
}
