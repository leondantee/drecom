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

// Function: entry_00190a0c
// Address: 0x190a0c - 0x190bf0
void entry_00190a0c_0x190a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190a0c_0x190a0c");
#endif

    switch (ctx->pc) {
        case 0x190a90u: goto label_190a90;
        case 0x190a9cu: goto label_190a9c;
        case 0x190aa8u: goto label_190aa8;
        case 0x190ab4u: goto label_190ab4;
        case 0x190bc0u: goto label_190bc0;
        case 0x190bd4u: goto label_190bd4;
        case 0x190be4u: goto label_190be4;
        default: break;
    }

    ctx->pc = 0x190a0cu;

    // 0x190a0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a14: 0x0  nop
    ctx->pc = 0x190a14u;
    // NOP
    // 0x190a18: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x190a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x190a1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a24: 0x0  nop
    ctx->pc = 0x190a24u;
    // NOP
    // 0x190a28: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x190a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x190a2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a34: 0x0  nop
    ctx->pc = 0x190a34u;
    // NOP
    // 0x190a38: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x190a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x190a3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a44: 0x0  nop
    ctx->pc = 0x190a44u;
    // NOP
    // 0x190a48: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x190a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x190a4c: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x190a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190a50: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x190a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x190a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x190a58: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x190a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a5c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x190a5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190a60: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x190a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a64: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x190a64u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190a68: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x190a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190a6c: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x190a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x190a70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x190a74: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x190a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a78: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x190a78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190a7c: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x190a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a80: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x190a80u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190a84: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190a88: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x190A88u;
    SET_GPR_U32(ctx, 31, 0x190A90u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x190A88u, 0x190A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A90u;
label_190a90:
    // 0x190a90: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x190a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190a94: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x190A94u;
    SET_GPR_U32(ctx, 31, 0x190A9Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x190A94u, 0x190A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A9Cu;
label_190a9c:
    // 0x190a9c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x190a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190aa0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x190AA0u;
    SET_GPR_U32(ctx, 31, 0x190AA8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x190AA0u, 0x190AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AA8u;
label_190aa8:
    // 0x190aa8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x190aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x190aac: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x190AACu;
    SET_GPR_U32(ctx, 31, 0x190AB4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x190AACu, 0x190AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AB4u;
label_190ab4:
    // 0x190ab4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190ab8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x190ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190abc: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x190abcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190ac0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x190ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ac4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190ac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190ac8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x190ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x190acc: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190ad0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x190ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ad4: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x190ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x190ad8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x190ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190adc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190ae0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x190ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x190ae4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190ae8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x190ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190aec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190af4: 0x0  nop
    ctx->pc = 0x190af4u;
    // NOP
    // 0x190af8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190afc: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x190afcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190b00: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x190b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190b08: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x190b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x190b0c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b10: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x190b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190b1c: 0x0  nop
    ctx->pc = 0x190b1cu;
    // NOP
    // 0x190b20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190b24: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x190b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x190b28: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x190b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190b30: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x190b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x190b34: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x190b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b3c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190b44: 0x0  nop
    ctx->pc = 0x190b44u;
    // NOP
    // 0x190b48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190b48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190b4c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x190b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190b50: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x190b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190b58: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x190b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x190b5c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x190b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b64: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x190b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x190b68: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x190b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190b70: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x190b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x190b74: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x190b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b7c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x190b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190b80: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x190b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190b88: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x190b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x190b8c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x190b90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x190b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190b9c: 0x0  nop
    ctx->pc = 0x190b9cu;
    // NOP
    // 0x190ba0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190ba4: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x190ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x190ba8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x190ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190bac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190bb0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x190bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x190bb4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x190bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190bb8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x190BB8u;
    SET_GPR_U32(ctx, 31, 0x190BC0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x190BC0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190BC0u) { return; }
    ctx->pc = 0x190BC0u;
label_190bc0:
    // 0x190bc0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x190bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190bc4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190bc8: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x190bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x190bcc: 0xc040d62  jal         func_103588
    ctx->pc = 0x190BCCu;
    SET_GPR_U32(ctx, 31, 0x190BD4u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x190BD4u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190BD4u) { return; }
    ctx->pc = 0x190BD4u;
label_190bd4:
    // 0x190bd4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x190bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x190bd8: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x190bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x190bdc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x190BDCu;
    SET_GPR_U32(ctx, 31, 0x190BE4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x190BE4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190BE4u) { return; }
    ctx->pc = 0x190BE4u;
label_190be4:
    // 0x190be4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x190be4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190be8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x190BE8u;
    {
        const bool branch_taken_0x190be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190be8) {
            ctx->pc = 0x190C18u;
            return;
        }
    }
    ctx->pc = 0x190BF0u;
}
