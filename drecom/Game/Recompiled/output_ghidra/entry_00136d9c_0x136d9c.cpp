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

// Function: entry_00136d9c
// Address: 0x136d9c - 0x136ee0
void entry_00136d9c_0x136d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d9c_0x136d9c");
#endif

    switch (ctx->pc) {
        case 0x136e04u: goto label_136e04;
        case 0x136e14u: goto label_136e14;
        case 0x136e24u: goto label_136e24;
        case 0x136e34u: goto label_136e34;
        default: break;
    }

    ctx->pc = 0x136d9cu;

    // 0x136d9c: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x136d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x136da0: 0x2e32021  addu        $a0, $s7, $v1
    ctx->pc = 0x136da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x136da4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x136da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x136da8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x136da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136dac: 0x2471004c  addiu       $s1, $v1, 0x4C
    ctx->pc = 0x136dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x136db0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136db4: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x136db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x136db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136dbc: 0x0  nop
    ctx->pc = 0x136dbcu;
    // NOP
    // 0x136dc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x136dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x136dc4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x136dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x136dc8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x136dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x136dcc: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x136dccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x136dd0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x136dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x136dd4: 0x8c236844  lw          $v1, 0x6844($at)
    ctx->pc = 0x136dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6844u));
    // 0x136dd8: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x136dd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x136ddc: 0x1020018e  beqz        $at, . + 4 + (0x18E << 2)
    ctx->pc = 0x136DDCu;
    {
        const bool branch_taken_0x136ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ddc) {
            ctx->pc = 0x137418u;
            return;
        }
    }
    ctx->pc = 0x136DE4u;
    // 0x136de4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x136de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x136de8: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x136de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x136dec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x136decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x136df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136df4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x136df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136df8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x136df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x136dfc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136DFCu;
    SET_GPR_U32(ctx, 31, 0x136E04u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136E04u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136E04u) { return; }
    ctx->pc = 0x136E04u;
label_136e04:
    // 0x136e04: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x136e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x136e08: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x136e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136e0c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136E0Cu;
    SET_GPR_U32(ctx, 31, 0x136E14u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136E14u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136E14u) { return; }
    ctx->pc = 0x136E14u;
label_136e14:
    // 0x136e14: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x136e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x136e18: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x136e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136e1c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136E1Cu;
    SET_GPR_U32(ctx, 31, 0x136E24u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136E24u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136E24u) { return; }
    ctx->pc = 0x136E24u;
label_136e24:
    // 0x136e24: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x136e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x136e28: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x136e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136e2c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136E2Cu;
    SET_GPR_U32(ctx, 31, 0x136E34u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136E34u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136E34u) { return; }
    ctx->pc = 0x136E34u;
label_136e34:
    // 0x136e34: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136e38: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x136e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136e3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136e3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e40: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x136e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x136e44: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136e48: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x136e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x136e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136e50: 0x0  nop
    ctx->pc = 0x136e50u;
    // NOP
    // 0x136e54: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x136e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e58: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x136e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136e5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e60: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x136e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x136e64: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136e68: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x136e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x136e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136e70: 0x0  nop
    ctx->pc = 0x136e70u;
    // NOP
    // 0x136e74: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x136e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e78: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x136e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136e7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e80: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x136e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x136e84: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136e88: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x136e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x136e8c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x136e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x136e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136e94: 0x0  nop
    ctx->pc = 0x136e94u;
    // NOP
    // 0x136e98: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x136e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e9c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x136e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136ea4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x136ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x136ea8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x136ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136eac: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136eb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136eb4: 0x0  nop
    ctx->pc = 0x136eb4u;
    // NOP
    // 0x136eb8: 0x45000157  bc1f        . + 4 + (0x157 << 2)
    ctx->pc = 0x136EB8u;
    {
        const bool branch_taken_0x136eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x136eb8) {
            ctx->pc = 0x137418u;
            return;
        }
    }
    ctx->pc = 0x136EC0u;
    // 0x136ec0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x136ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136ec4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ec8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136ecc: 0x0  nop
    ctx->pc = 0x136eccu;
    // NOP
    // 0x136ed0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136ED0u;
    {
        const bool branch_taken_0x136ed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136ed0) {
            ctx->pc = 0x136EE0u;
            return;
        }
    }
    ctx->pc = 0x136ED8u;
    // 0x136ed8: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136edc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x136edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    ctx->pc = 0x136ee0u;
}
