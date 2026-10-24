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

// Function: Set_effect_pl00_firewall
// Address: 0x313dd0 - 0x314188
void Set_effect_pl00_firewall_0x313dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_firewall_0x313dd0");
#endif

    switch (ctx->pc) {
        case 0x313e2cu: goto label_313e2c;
        case 0x313e88u: goto label_313e88;
        case 0x313ee4u: goto label_313ee4;
        case 0x313ef0u: goto label_313ef0;
        case 0x313ef8u: goto label_313ef8;
        case 0x313f14u: goto label_313f14;
        case 0x313f40u: goto label_313f40;
        case 0x314044u: goto label_314044;
        case 0x3140ecu: goto label_3140ec;
        default: break;
    }

    ctx->pc = 0x313dd0u;

    // 0x313dd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x313dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x313dd4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x313dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x313dd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x313dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x313ddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x313de0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x313de4: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x313de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x313de8: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x313de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x313dec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x313decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313df0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x313df0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313df4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x313df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x313df8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x313df8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x313dfc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x313dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313e00: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x313e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x313e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313e08: 0x0  nop
    ctx->pc = 0x313e08u;
    // NOP
    // 0x313e0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x313e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x313e10: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x313e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x313e14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x313e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x313e18: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x313e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313e1c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x313e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x313e20: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x313e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x313e24: 0xc059e1c  jal         func_167870
    ctx->pc = 0x313E24u;
    SET_GPR_U32(ctx, 31, 0x313E2Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x313E24u, 0x313E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E2Cu;
label_313e2c:
    // 0x313e2c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x313e2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x313e30: 0x124000ce  beqz        $s2, . + 4 + (0xCE << 2)
    ctx->pc = 0x313E30u;
    {
        const bool branch_taken_0x313e30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x313e30) {
            ctx->pc = 0x31416Cu;
            goto label_31416c;
        }
    }
    ctx->pc = 0x313E38u;
    // 0x313e38: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x313e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313e3c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x313e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313e40: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x313e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313e44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x313e44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x313e48: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x313e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x313e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x313e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313e50: 0x0  nop
    ctx->pc = 0x313e50u;
    // NOP
    // 0x313e54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x313e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313e58: 0x0  nop
    ctx->pc = 0x313e58u;
    // NOP
    // 0x313e5c: 0x450100c3  bc1t        . + 4 + (0xC3 << 2)
    ctx->pc = 0x313E5Cu;
    {
        const bool branch_taken_0x313e5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313e5c) {
            ctx->pc = 0x31416Cu;
            goto label_31416c;
        }
    }
    ctx->pc = 0x313E64u;
    // 0x313e64: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x313e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x313e68: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x313e68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313e6c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x313e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313e70: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x313e70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x313e74: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x313e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313e78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x313e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313e7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x313e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x313e80: 0xc06765c  jal         func_19D970
    ctx->pc = 0x313E80u;
    SET_GPR_U32(ctx, 31, 0x313E88u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x313E80u, 0x313E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E88u;
label_313e88:
    // 0x313e88: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x313e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x313e8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313e90: 0x0  nop
    ctx->pc = 0x313e90u;
    // NOP
    // 0x313e94: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x313e94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313e98: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x313e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313e9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x313e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313ea0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x313ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x313ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313ea8: 0x0  nop
    ctx->pc = 0x313ea8u;
    // NOP
    // 0x313eac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x313eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313eb0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x313eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x313eb4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x313eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x313eb8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x313eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313ebc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x313ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313ec0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x313ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x313ec4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x313ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x313ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313ecc: 0x0  nop
    ctx->pc = 0x313eccu;
    // NOP
    // 0x313ed0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x313ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x313ed4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x313ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313ed8: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x313ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x313edc: 0xc0c4d34  jal         func_3134D0
    ctx->pc = 0x313EDCu;
    SET_GPR_U32(ctx, 31, 0x313EE4u);
    ctx->pc = 0x3134D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3134D0u, 0x313EDCu, 0x313EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313EE4u;
label_313ee4:
    // 0x313ee4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x313ee4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313ee8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x313EE8u;
    {
        const bool branch_taken_0x313ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313ee8) {
            ctx->pc = 0x313F68u;
            goto label_313f68;
        }
    }
    ctx->pc = 0x313EF0u;
label_313ef0:
    // 0x313ef0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x313EF0u;
    SET_GPR_U32(ctx, 31, 0x313EF8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x313EF0u, 0x313EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313EF8u;
label_313ef8:
    // 0x313ef8: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x313ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x313efc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313f00: 0x0  nop
    ctx->pc = 0x313f00u;
    // NOP
    // 0x313f04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x313f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313f08: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x313f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x313f0c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x313F0Cu;
    SET_GPR_U32(ctx, 31, 0x313F14u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x313F0Cu, 0x313F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313F14u;
label_313f14:
    // 0x313f14: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x313f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x313f18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313f1c: 0x0  nop
    ctx->pc = 0x313f1cu;
    // NOP
    // 0x313f20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x313f20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313f24: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x313f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x313f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313f2c: 0x0  nop
    ctx->pc = 0x313f2cu;
    // NOP
    // 0x313f30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x313f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313f34: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x313f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x313f38: 0xc06765c  jal         func_19D970
    ctx->pc = 0x313F38u;
    SET_GPR_U32(ctx, 31, 0x313F40u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x313F38u, 0x313F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313F40u;
label_313f40:
    // 0x313f40: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x313f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x313f44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313f48: 0x0  nop
    ctx->pc = 0x313f48u;
    // NOP
    // 0x313f4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x313f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313f50: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x313f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x313f54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x313f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x313f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313f5c: 0x0  nop
    ctx->pc = 0x313f5cu;
    // NOP
    // 0x313f60: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x313f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x313f64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x313f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_313f68:
    // 0x313f68: 0x1220ffe1  beqz        $s1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x313F68u;
    {
        const bool branch_taken_0x313f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x313f68) {
            ctx->pc = 0x313EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313ef0;
        }
    }
    ctx->pc = 0x313F70u;
    // 0x313f70: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x313f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x313f74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x313f78: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x313F78u;
    {
        const bool branch_taken_0x313f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x313f78) {
            ctx->pc = 0x31400Cu;
            goto label_31400c;
        }
    }
    ctx->pc = 0x313F80u;
    // 0x313f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x313f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313f84: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x313F84u;
    {
        const bool branch_taken_0x313f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x313f84) {
            ctx->pc = 0x313FE8u;
            goto label_313fe8;
        }
    }
    ctx->pc = 0x313F8Cu;
    // 0x313f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313f90: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x313F90u;
    {
        const bool branch_taken_0x313f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x313f90) {
            ctx->pc = 0x313FC8u;
            goto label_313fc8;
        }
    }
    ctx->pc = 0x313F98u;
    // 0x313f98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313F98u;
    {
        const bool branch_taken_0x313f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x313f98) {
            ctx->pc = 0x313FA8u;
            goto label_313fa8;
        }
    }
    ctx->pc = 0x313FA0u;
    // 0x313fa0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x313FA0u;
    {
        const bool branch_taken_0x313fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313fa0) {
            ctx->pc = 0x314030u;
            goto label_314030;
        }
    }
    ctx->pc = 0x313FA8u;
label_313fa8:
    // 0x313fa8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x313fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x313fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313fb0: 0x0  nop
    ctx->pc = 0x313fb0u;
    // NOP
    // 0x313fb4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x313fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x313fb8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x313fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x313fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313fc0: 0x0  nop
    ctx->pc = 0x313fc0u;
    // NOP
    // 0x313fc4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x313fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_313fc8:
    // 0x313fc8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x313fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x313fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313fd0: 0x0  nop
    ctx->pc = 0x313fd0u;
    // NOP
    // 0x313fd4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x313fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x313fd8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x313fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x313fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313fe0: 0x0  nop
    ctx->pc = 0x313fe0u;
    // NOP
    // 0x313fe4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x313fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_313fe8:
    // 0x313fe8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x313fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x313fec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x313fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x313ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313ff4: 0x0  nop
    ctx->pc = 0x313ff4u;
    // NOP
    // 0x313ff8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x313ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x313ffc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x313ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x314000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314004: 0x0  nop
    ctx->pc = 0x314004u;
    // NOP
    // 0x314008: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x314008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_31400c:
    // 0x31400c: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x31400cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x314010: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x314010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x314014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314018: 0x0  nop
    ctx->pc = 0x314018u;
    // NOP
    // 0x31401c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x31401cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x314020: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x314020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x314024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314028: 0x0  nop
    ctx->pc = 0x314028u;
    // NOP
    // 0x31402c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x31402cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_314030:
    // 0x314030: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x314030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314034: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x314034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314038: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x314038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31403c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x31403Cu;
    SET_GPR_U32(ctx, 31, 0x314044u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x31403Cu, 0x314044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314044u;
label_314044:
    // 0x314044: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x314044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x314048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31404c: 0x0  nop
    ctx->pc = 0x31404cu;
    // NOP
    // 0x314050: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x314050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314054: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x314054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314058: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x314058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31405c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x31405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314060: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x314060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x314064: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x314064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x314068: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x314068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x31406c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314070: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x314070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314074: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x314074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x314078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x314078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31407c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31407cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314080: 0x0  nop
    ctx->pc = 0x314080u;
    // NOP
    // 0x314084: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x314084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x314088: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x314088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31408c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314090: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314094: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x314094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x314098: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31409c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3140a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3140a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3140a4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3140a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3140a8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3140a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3140ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3140acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3140b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3140b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3140b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3140b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3140b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3140b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3140bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3140bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3140c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3140c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3140c4: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x3140c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3140c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3140c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3140cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3140ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3140d0: 0x3c023c04  lui         $v0, 0x3C04
    ctx->pc = 0x3140d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15364 << 16));
    // 0x3140d4: 0x3442001e  ori         $v0, $v0, 0x1E
    ctx->pc = 0x3140d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
    // 0x3140d8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3140d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3140dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3140dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3140e0: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x3140e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3140e4: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x3140E4u;
    SET_GPR_U32(ctx, 31, 0x3140ECu);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x3140E4u, 0x3140ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140ECu;
label_3140ec:
    // 0x3140ec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3140ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3140f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3140f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3140f4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3140f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3140f8: 0x1203001c  beq         $s0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3140F8u;
    {
        const bool branch_taken_0x3140f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3140f8) {
            ctx->pc = 0x31416Cu;
            goto label_31416c;
        }
    }
    ctx->pc = 0x314100u;
    // 0x314100: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x314100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x314104: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x314104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x314108: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x314108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31410c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x31410cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x314110: 0xa200034e  sb          $zero, 0x34E($s0)
    ctx->pc = 0x314110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 846), (uint8_t)GPR_U32(ctx, 0));
    // 0x314114: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x314114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x314118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31411c: 0x0  nop
    ctx->pc = 0x31411cu;
    // NOP
    // 0x314120: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x314120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x314124: 0x3c034328  lui         $v1, 0x4328
    ctx->pc = 0x314124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17192 << 16));
    // 0x314128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31412c: 0x0  nop
    ctx->pc = 0x31412cu;
    // NOP
    // 0x314130: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x314130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x314134: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x314134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x314138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31413c: 0x0  nop
    ctx->pc = 0x31413cu;
    // NOP
    // 0x314140: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x314140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x314144: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x314144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x314148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31414c: 0x0  nop
    ctx->pc = 0x31414cu;
    // NOP
    // 0x314150: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x314150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x314154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314158: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x314158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x31415c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x31415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x314160: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x314160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x314164: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x314164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x314168: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x314168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_31416c:
    // 0x31416c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x31416cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314170: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x314170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31417c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x31417cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x314180: 0x3e00008  jr          $ra
    ctx->pc = 0x314180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314188u;
}
