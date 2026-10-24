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

// Function: srp_id16_type00
// Address: 0x2c0df0 - 0x2c0f80
void srp_id16_type00_0x2c0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id16_type00_0x2c0df0");
#endif

    switch (ctx->pc) {
        case 0x2c0e98u: goto label_2c0e98;
        case 0x2c0ec8u: goto label_2c0ec8;
        case 0x2c0ee8u: goto label_2c0ee8;
        default: break;
    }

    ctx->pc = 0x2c0df0u;

    // 0x2c0df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0df4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c0df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c0df8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c0dfc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2c0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2c0e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0e08: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c0e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c0e0c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0e18: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c0e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c0e1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0e28: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c0e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c0e2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0e38: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c0e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c0e3c: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0e40: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c0e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c0e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0e4c: 0xe44002e0  swc1        $f0, 0x2E0($v0)
    ctx->pc = 0x2c0e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 736), bits); }
    // 0x2c0e50: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0e54: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c0e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c0e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0e60: 0xe44002e4  swc1        $f0, 0x2E4($v0)
    ctx->pc = 0x2c0e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 740), bits); }
    // 0x2c0e64: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0e68: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c0e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c0e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0e74: 0xe44002e8  swc1        $f0, 0x2E8($v0)
    ctx->pc = 0x2c0e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 744), bits); }
    // 0x2c0e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0e80: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c0e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c0e84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0e8c: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c0e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c0e90: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C0E90u;
    SET_GPR_U32(ctx, 31, 0x2C0E98u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C0E90u, 0x2C0E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0E98u;
label_2c0e98:
    // 0x2c0e98: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2c0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2c0e9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c0e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0ea0: 0x0  nop
    ctx->pc = 0x2c0ea0u;
    // NOP
    // 0x2c0ea4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0ea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c0eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0eb0: 0x0  nop
    ctx->pc = 0x2c0eb0u;
    // NOP
    // 0x2c0eb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0eb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0ebc: 0xe44002f8  swc1        $f0, 0x2F8($v0)
    ctx->pc = 0x2c0ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 760), bits); }
    // 0x2c0ec0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C0EC0u;
    SET_GPR_U32(ctx, 31, 0x2C0EC8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C0EC0u, 0x2C0EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EC8u;
label_2c0ec8:
    // 0x2c0ec8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0ecc: 0xe4400300  swc1        $f0, 0x300($v0)
    ctx->pc = 0x2c0eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 768), bits); }
    // 0x2c0ed0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x2c0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x2c0ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0ed8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0edc: 0xe4400304  swc1        $f0, 0x304($v0)
    ctx->pc = 0x2c0edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 772), bits); }
    // 0x2c0ee0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C0EE0u;
    SET_GPR_U32(ctx, 31, 0x2C0EE8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C0EE0u, 0x2C0EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EE8u;
label_2c0ee8:
    // 0x2c0ee8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0eec: 0xe4600308  swc1        $f0, 0x308($v1)
    ctx->pc = 0x2c0eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 776), bits); }
    // 0x2c0ef0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0ef4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0ef8: 0xa0640342  sb          $a0, 0x342($v1)
    ctx->pc = 0x2c0ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0efc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0f00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0f04: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c0f04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0f08: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c0f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0f0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0f10: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c0f10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0f14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0f18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0f1c: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c0f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0f20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c0f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0f24: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c0f28: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c0f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c0f2c: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c0f30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0f34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0f38: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2c0f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0f3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0f40: 0xa060036a  sb          $zero, 0x36A($v1)
    ctx->pc = 0x2c0f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0f44: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2c0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2c0f48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0f4c: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c0f50: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c0f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0f58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0f5c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c0f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c0f60: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c0f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c0f64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0f64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0f68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0f6c: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c0f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c0f70: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c0f70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0f74: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c0f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c0f78: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0F80u;
}
