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

// Function: Scr_parts_tex_move_kan
// Address: 0x13df80 - 0x13e240
void Scr_parts_tex_move_kan_0x13df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_tex_move_kan_0x13df80");
#endif

    switch (ctx->pc) {
        case 0x13dfe0u: goto label_13dfe0;
        case 0x13dff0u: goto label_13dff0;
        case 0x13e00cu: goto label_13e00c;
        case 0x13e048u: goto label_13e048;
        case 0x13e084u: goto label_13e084;
        case 0x13e0f4u: goto label_13e0f4;
        case 0x13e1acu: goto label_13e1ac;
        case 0x13e1d4u: goto label_13e1d4;
        default: break;
    }

    ctx->pc = 0x13df80u;

    // 0x13df80: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x13df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x13df84: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x13df84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x13df88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13df8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13df90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13df90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13df94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13df98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13df9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13df9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13dfa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13dfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13dfa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13dfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13dfa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13dfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13dfac: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x13dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x13dfb0: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x13dfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
    // 0x13dfb4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x13dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13dfb8: 0x8c540020  lw          $s4, 0x20($v0)
    ctx->pc = 0x13dfb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13dfbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13dfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13dfc0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x13dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13dfc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13dfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13dfc8: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13dfcc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x13dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13dfd0: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x13dfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x13dfd4: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x13dfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x13dfd8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x13DFD8u;
    SET_GPR_U32(ctx, 31, 0x13DFE0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x13DFD8u, 0x13DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFE0u;
label_13dfe0:
    // 0x13dfe0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x13dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13dfe4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x13dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13dfe8: 0xc0675b8  jal         func_19D6E0
    ctx->pc = 0x13DFE8u;
    SET_GPR_U32(ctx, 31, 0x13DFF0u);
    ctx->pc = 0x19D6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6E0u, 0x13DFE8u, 0x13DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFF0u;
label_13dff0:
    // 0x13dff0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x13dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13dff4: 0x8c5e00a0  lw          $fp, 0xA0($v0)
    ctx->pc = 0x13dff4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x13dff8: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x13dff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13dffc: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x13dffcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e000: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x13e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13e004: 0x8c560034  lw          $s6, 0x34($v0)
    ctx->pc = 0x13e004u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13e008: 0x0  nop
    ctx->pc = 0x13e008u;
    // NOP
label_13e00c:
    // 0x13e00c: 0x8ed300b0  lw          $s3, 0xB0($s6)
    ctx->pc = 0x13e00cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
    // 0x13e010: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x13e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e014: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e018: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x13e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x13e01c: 0x8c520038  lw          $s2, 0x38($v0)
    ctx->pc = 0x13e01cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13e020: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x13e020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e028: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x13e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x13e02c: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x13e02cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13e030: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x13e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e038: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x13e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x13e03c: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x13e03cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13e040: 0x8ed50020  lw          $s5, 0x20($s6)
    ctx->pc = 0x13e040u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x13e044: 0x0  nop
    ctx->pc = 0x13e044u;
    // NOP
label_13e048:
    // 0x13e048: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x13e048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e04c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x13e04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x13e050: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x13e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e054: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x13e054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x13e058: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x13e058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e05c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x13e05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x13e060: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13e060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13e064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e068: 0x0  nop
    ctx->pc = 0x13e068u;
    // NOP
    // 0x13e06c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x13e06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x13e070: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13e070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13e074: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x13e074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x13e078: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x13e078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13e07c: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x13E07Cu;
    SET_GPR_U32(ctx, 31, 0x13E084u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x13E07Cu, 0x13E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E084u;
label_13e084:
    // 0x13e084: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x13e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e088: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x13e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e08c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13e08cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e090: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x13e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e094: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13e094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13e098: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x13e098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x13e09c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x13e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e0a0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x13e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e0a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13e0a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e0a8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x13e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e0ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13e0acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13e0b0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x13e0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x13e0b4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x13e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e0b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x13e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e0bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13e0bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e0c0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x13e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e0c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13e0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13e0c8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x13e0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x13e0cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13e0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e0d4: 0x0  nop
    ctx->pc = 0x13e0d4u;
    // NOP
    // 0x13e0d8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x13e0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x13e0dc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x13e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13e0e0: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x13e0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x13e0e4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x13e0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13e0e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13e0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e0ec: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x13E0ECu;
    SET_GPR_U32(ctx, 31, 0x13E0F4u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x13E0F4u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13E0F4u) { return; }
    ctx->pc = 0x13E0F4u;
label_13e0f4:
    // 0x13e0f4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x13e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13e0f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e0fc: 0x0  nop
    ctx->pc = 0x13e0fcu;
    // NOP
    // 0x13e100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13e104: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x13e104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x13e108: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x13e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x13e10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e110: 0x0  nop
    ctx->pc = 0x13e110u;
    // NOP
    // 0x13e114: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13e118: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x13e118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x13e11c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x13e11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e120: 0x3c024700  lui         $v0, 0x4700
    ctx->pc = 0x13e120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
    // 0x13e124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e128: 0x0  nop
    ctx->pc = 0x13e128u;
    // NOP
    // 0x13e12c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13e12cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13e130: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x13e130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x13e134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e138: 0x0  nop
    ctx->pc = 0x13e138u;
    // NOP
    // 0x13e13c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x13e13cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13e140: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x13e140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x13e144: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x13e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e148: 0x3c024700  lui         $v0, 0x4700
    ctx->pc = 0x13e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
    // 0x13e14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e150: 0x0  nop
    ctx->pc = 0x13e150u;
    // NOP
    // 0x13e154: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13e154u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13e158: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x13e158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x13e15c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e160: 0x0  nop
    ctx->pc = 0x13e160u;
    // NOP
    // 0x13e164: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x13e164u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13e168: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x13e168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x13e16c: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x13e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x13e170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e174: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x13e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e178: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13e178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13e17c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x13e17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x13e180: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x13e180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x13e184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e188: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x13e188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e18c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13e18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13e190: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x13e190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x13e194: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x13e194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13e198: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13e19c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x13e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x13e1a0: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x13e1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e1a4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x13E1A4u;
    SET_GPR_U32(ctx, 31, 0x13E1ACu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x13E1A4u, 0x13E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E1ACu;
label_13e1ac:
    // 0x13e1ac: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x13e1acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13e1b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e1b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13e1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13e1b8: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x13e1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13e1bc: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x13e1bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x13e1c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13e1c4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x13e1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x13e1c8: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x13e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e1cc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x13E1CCu;
    SET_GPR_U32(ctx, 31, 0x13E1D4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x13E1CCu, 0x13E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E1D4u;
label_13e1d4:
    // 0x13e1d4: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x13e1d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13e1d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e1dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13e1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13e1e0: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x13e1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x13e1e4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x13e1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x13e1e8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x13e1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x13e1ec: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x13e1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x13e1f0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x13e1f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x13e1f4: 0x16a0ff94  bnez        $s5, . + 4 + (-0x6C << 2)
    ctx->pc = 0x13E1F4u;
    {
        const bool branch_taken_0x13e1f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e1f4) {
            ctx->pc = 0x13E048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e048;
        }
    }
    ctx->pc = 0x13E1FCu;
    // 0x13e1fc: 0x26d600c0  addiu       $s6, $s6, 0xC0
    ctx->pc = 0x13e1fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x13e200: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x13e200u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x13e204: 0x16e0ff81  bnez        $s7, . + 4 + (-0x7F << 2)
    ctx->pc = 0x13E204u;
    {
        const bool branch_taken_0x13e204 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e204) {
            ctx->pc = 0x13E00Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e00c;
        }
    }
    ctx->pc = 0x13E20Cu;
    // 0x13e20c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x13e20cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13e210: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13e210u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13e214: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13e214u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13e218: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13e218u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13e21c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13e21cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e220: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13e220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e224: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13e224u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e228: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13e228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e22c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e234: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x13e234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13e238: 0x3e00008  jr          $ra
    ctx->pc = 0x13E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E240u;
}
