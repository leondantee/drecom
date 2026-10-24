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

// Function: Get_height
// Address: 0x173df0 - 0x173f6c
void Get_height_0x173df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_height_0x173df0");
#endif

    switch (ctx->pc) {
        case 0x173e14u: goto label_173e14;
        case 0x173e24u: goto label_173e24;
        case 0x173e70u: goto label_173e70;
        case 0x173ec4u: goto label_173ec4;
        case 0x173f4cu: goto label_173f4c;
        default: break;
    }

    ctx->pc = 0x173df0u;

    // 0x173df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x173df4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x173df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x173df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173dfc: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x173dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x173e00: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x173e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x173e04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173e08: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x173e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173e0c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x173E0Cu;
    SET_GPR_U32(ctx, 31, 0x173E14u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x173E14u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173E14u) { return; }
    ctx->pc = 0x173E14u;
label_173e14:
    // 0x173e14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x173e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173e18: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x173e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173e1c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x173E1Cu;
    SET_GPR_U32(ctx, 31, 0x173E24u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x173E24u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173E24u) { return; }
    ctx->pc = 0x173E24u;
label_173e24:
    // 0x173e24: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x173e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173e28: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x173e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x173e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173e30: 0x0  nop
    ctx->pc = 0x173e30u;
    // NOP
    // 0x173e34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x173e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x173e38: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x173e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x173e3c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x173e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173e40: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x173e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x173e44: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x173e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x173e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173e4c: 0x0  nop
    ctx->pc = 0x173e4cu;
    // NOP
    // 0x173e50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173e50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173e54: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x173e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x173e58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173e5c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x173e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173e60: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x173e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173e64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x173e64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x173e68: 0xc059e1c  jal         func_167870
    ctx->pc = 0x173E68u;
    SET_GPR_U32(ctx, 31, 0x173E70u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x173E68u, 0x173E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E70u;
label_173e70:
    // 0x173e70: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x173e70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x173e74: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x173E74u;
    {
        const bool branch_taken_0x173e74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e74) {
            ctx->pc = 0x173EC8u;
            goto label_173ec8;
        }
    }
    ctx->pc = 0x173E7Cu;
    // 0x173e7c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x173e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x173e80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173e84: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x173e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x173e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x173e8c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x173e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x173e90: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x173e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173e94: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x173e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x173e98: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x173e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x173e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173ea0: 0x0  nop
    ctx->pc = 0x173ea0u;
    // NOP
    // 0x173ea4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173ea8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x173ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x173eac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173eb0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x173eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173eb4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x173eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173eb8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x173eb8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x173ebc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x173EBCu;
    SET_GPR_U32(ctx, 31, 0x173EC4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x173EBCu, 0x173EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173EC4u;
label_173ec4:
    // 0x173ec4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x173ec4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_173ec8:
    // 0x173ec8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x173EC8u;
    {
        const bool branch_taken_0x173ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ec8) {
            ctx->pc = 0x173F28u;
            goto label_173f28;
        }
    }
    ctx->pc = 0x173ED0u;
    // 0x173ed0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x173ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ed4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173ed8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x173ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x173edc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x173edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x173ee0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173ee4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x173ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x173ee8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x173ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173eec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173ef0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x173ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x173ef4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x173ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173efc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x173efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x173f00: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x173f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173f04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f08: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x173f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x173f0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173f14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f18: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x173f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x173f1c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x173f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173f20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173F20u;
    {
        const bool branch_taken_0x173f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f20) {
            ctx->pc = 0x173F58u;
            goto label_173f58;
        }
    }
    ctx->pc = 0x173F28u;
label_173f28:
    // 0x173f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173f2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f30: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x173f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x173f34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f38: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x173f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x173f3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f40: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x173f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x173f44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x173F44u;
    SET_GPR_U32(ctx, 31, 0x173F4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x173F44u, 0x173F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F4Cu;
label_173f4c:
    // 0x173f4c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x173f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x173f50: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x173f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x173f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173f58:
    // 0x173f58: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x173f58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173f60: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x173f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173f64: 0x3e00008  jr          $ra
    ctx->pc = 0x173F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173F6Cu;
}
