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

// Function: entry_001b2ef4
// Address: 0x1b2ef4 - 0x1b300c
void entry_001b2ef4_0x1b2ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2ef4_0x1b2ef4");
#endif

    switch (ctx->pc) {
        case 0x1b2f60u: goto label_1b2f60;
        case 0x1b2f74u: goto label_1b2f74;
        case 0x1b2f98u: goto label_1b2f98;
        default: break;
    }

    ctx->pc = 0x1b2ef4u;

    // 0x1b2ef4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b2ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b2ef8: 0x12c00167  beqz        $s6, . + 4 + (0x167 << 2)
    ctx->pc = 0x1B2EF8u;
    {
        const bool branch_taken_0x1b2ef8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2ef8) {
            ctx->pc = 0x1B3498u;
            return;
        }
    }
    ctx->pc = 0x1B2F00u;
    // 0x1b2f00: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x1b2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1b2f04: 0x2821006  srlv        $v0, $v0, $s4
    ctx->pc = 0x1b2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1b2f08: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1b2f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b2f0c: 0x1040015b  beqz        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x1B2F0Cu;
    {
        const bool branch_taken_0x1b2f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f0c) {
            ctx->pc = 0x1B347Cu;
            return;
        }
    }
    ctx->pc = 0x1B2F14u;
    // 0x1b2f14: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x1b2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1b2f18: 0x401027  not         $v0, $v0
    ctx->pc = 0x1b2f18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1b2f1c: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x1b2f1cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b2f20: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b2f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b2f24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2f28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b2f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b2f2c: 0x14400153  bnez        $v0, . + 4 + (0x153 << 2)
    ctx->pc = 0x1B2F2Cu;
    {
        const bool branch_taken_0x1b2f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f2c) {
            ctx->pc = 0x1B347Cu;
            return;
        }
    }
    ctx->pc = 0x1B2F34u;
    // 0x1b2f34: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b2f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2f38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2f3c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1b2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1b2f40: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b2f44: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b2f48: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b2f4c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b2f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2f50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b2f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b2f54: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1b2f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b2f58: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B2F58u;
    SET_GPR_U32(ctx, 31, 0x1B2F60u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B2F60u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2F60u) { return; }
    ctx->pc = 0x1B2F60u;
label_1b2f60:
    // 0x1b2f60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b2f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b2f64: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b2f68: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x1b2f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2f6c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B2F6Cu;
    SET_GPR_U32(ctx, 31, 0x1B2F74u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B2F6Cu, 0x1B2F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F74u;
label_1b2f74:
    // 0x1b2f74: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1b2f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2f78: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1b2f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2f7c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b2f7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2f80: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1b2f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2f84: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1b2f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2f88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2f8c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b2f8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b2f90: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B2F90u;
    SET_GPR_U32(ctx, 31, 0x1B2F98u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B2F90u, 0x1B2F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F98u;
label_1b2f98:
    // 0x1b2f98: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b2f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1b2f9c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b2f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2fa0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b2fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fa4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1b2fa4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b2fa8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1b2fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2facu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2fb0: 0x0  nop
    ctx->pc = 0x1b2fb0u;
    // NOP
    // 0x1b2fb4: 0x45000131  bc1f        . + 4 + (0x131 << 2)
    ctx->pc = 0x1B2FB4u;
    {
        const bool branch_taken_0x1b2fb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2fb4) {
            ctx->pc = 0x1B347Cu;
            return;
        }
    }
    ctx->pc = 0x1B2FBCu;
    // 0x1b2fbc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b2fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2fc0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1b2fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fc4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b2fc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b2fc8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2fcc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b2fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2fd4: 0x0  nop
    ctx->pc = 0x1b2fd4u;
    // NOP
    // 0x1b2fd8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B2FD8u;
    {
        const bool branch_taken_0x1b2fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2fd8) {
            ctx->pc = 0x1B300Cu;
            return;
        }
    }
    ctx->pc = 0x1B2FE0u;
    // 0x1b2fe0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2fe4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1b2fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fe8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b2fe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b2fec: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2ff0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2ff8: 0x0  nop
    ctx->pc = 0x1b2ff8u;
    // NOP
    // 0x1b2ffc: 0x4501011f  bc1t        . + 4 + (0x11F << 2)
    ctx->pc = 0x1B2FFCu;
    {
        const bool branch_taken_0x1b2ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2ffc) {
            ctx->pc = 0x1B347Cu;
            return;
        }
    }
    ctx->pc = 0x1B3004u;
    // 0x1b3004: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B3004u;
    {
        const bool branch_taken_0x1b3004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3004) {
            ctx->pc = 0x1B3058u;
            return;
        }
    }
    ctx->pc = 0x1B300Cu;
}
