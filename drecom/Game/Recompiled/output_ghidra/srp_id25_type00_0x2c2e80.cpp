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

// Function: srp_id25_type00
// Address: 0x2c2e80 - 0x2c300c
void srp_id25_type00_0x2c2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id25_type00_0x2c2e80");
#endif

    switch (ctx->pc) {
        case 0x2c2f00u: goto label_2c2f00;
        case 0x2c2f30u: goto label_2c2f30;
        case 0x2c2f50u: goto label_2c2f50;
        case 0x2c2f80u: goto label_2c2f80;
        default: break;
    }

    ctx->pc = 0x2c2e80u;

    // 0x2c2e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2e84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2e88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c2e8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2e90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2e94: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c2e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2e98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c2e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ea0: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c2ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c2ea4: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2c2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2c2ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2eac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2eb0: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c2eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c2eb4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2c2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2c2eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2ebc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ec0: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c2ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c2ec4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2ecc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ed0: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c2ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c2ed4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2ed8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2edc: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2edcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2ee0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2ee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ee8: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2eec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2ef0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ef4: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c2ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2ef8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C2EF8u;
    SET_GPR_U32(ctx, 31, 0x2C2F00u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C2EF8u, 0x2C2F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F00u;
label_2c2f00:
    // 0x2c2f00: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c2f04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c2f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2f08: 0x0  nop
    ctx->pc = 0x2c2f08u;
    // NOP
    // 0x2c2f0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2f0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2f10: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c2f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2f18: 0x0  nop
    ctx->pc = 0x2c2f18u;
    // NOP
    // 0x2c2f1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2f20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2f24: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c2f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c2f28: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C2F28u;
    SET_GPR_U32(ctx, 31, 0x2C2F30u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C2F28u, 0x2C2F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F30u;
label_2c2f30:
    // 0x2c2f30: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2c2f34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c2f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2f38: 0x0  nop
    ctx->pc = 0x2c2f38u;
    // NOP
    // 0x2c2f3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c2f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2f40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2f44: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c2f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c2f48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C2F48u;
    SET_GPR_U32(ctx, 31, 0x2C2F50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C2F48u, 0x2C2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F50u;
label_2c2f50:
    // 0x2c2f50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c2f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c2f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c2f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2f58: 0x0  nop
    ctx->pc = 0x2c2f58u;
    // NOP
    // 0x2c2f5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2f60: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2c2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2c2f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2f68: 0x0  nop
    ctx->pc = 0x2c2f68u;
    // NOP
    // 0x2c2f6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2f70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2f74: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c2f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c2f78: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C2F78u;
    SET_GPR_U32(ctx, 31, 0x2C2F80u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C2F78u, 0x2C2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F80u;
label_2c2f80:
    // 0x2c2f80: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c2f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c2f84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2f88: 0x0  nop
    ctx->pc = 0x2c2f88u;
    // NOP
    // 0x2c2f8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2f90: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2c2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2c2f94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2f98: 0x0  nop
    ctx->pc = 0x2c2f98u;
    // NOP
    // 0x2c2f9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2fa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2fa4: 0xe46002f8  swc1        $f0, 0x2F8($v1)
    ctx->pc = 0x2c2fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 760), bits); }
    // 0x2c2fa8: 0x3c03c060  lui         $v1, 0xC060
    ctx->pc = 0x2c2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49248 << 16));
    // 0x2c2fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2fb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2fb4: 0xe4600304  swc1        $f0, 0x304($v1)
    ctx->pc = 0x2c2fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x2c2fb8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2c2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2c2fbc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c2fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c2fc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2fc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2fc8: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x2c2fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x2c2fcc: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2c2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2c2fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2fd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2fd8: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x2c2fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x2c2fdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2fe0: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c2fe4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c2fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2c2fe8: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c2fec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c2fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ff0: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c2ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c2ff4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2c2ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2c2ff8: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c2ffc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c2ffcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3000: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c3000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c3004: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C300Cu;
}
