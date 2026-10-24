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

// Function: entry_0021ff38
// Address: 0x21ff38 - 0x21fff0
void entry_0021ff38_0x21ff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ff38_0x21ff38");
#endif

    switch (ctx->pc) {
        case 0x21ff54u: goto label_21ff54;
        case 0x21ff70u: goto label_21ff70;
        case 0x21ff8cu: goto label_21ff8c;
        case 0x21ffe0u: goto label_21ffe0;
        case 0x21ffecu: goto label_21ffec;
        default: break;
    }

    ctx->pc = 0x21ff38u;

    // 0x21ff38: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21ff3c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x21ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21ff40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21ff40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ff44: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x21ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21ff48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x21ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x21ff4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21FF4Cu;
    SET_GPR_U32(ctx, 31, 0x21FF54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21FF4Cu, 0x21FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF54u;
label_21ff54:
    // 0x21ff54: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x21ff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ff58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ff58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ff5c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x21ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ff60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ff60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ff64: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x21ff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x21ff68: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21FF68u;
    SET_GPR_U32(ctx, 31, 0x21FF70u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21FF68u, 0x21FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF70u;
label_21ff70:
    // 0x21ff70: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x21ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ff74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ff74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ff78: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x21ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ff7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ff7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ff80: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x21ff80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x21ff84: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21FF84u;
    SET_GPR_U32(ctx, 31, 0x21FF8Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21FF84u, 0x21FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF8Cu;
label_21ff8c:
    // 0x21ff8c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x21ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ff90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ff90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ff94: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21ff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ff98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ff98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ff9c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x21ff9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x21ffa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21ffa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ffa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ffa8: 0x0  nop
    ctx->pc = 0x21ffa8u;
    // NOP
    // 0x21ffac: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x21ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x21ffb0: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x21ffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x21ffb4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ffb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21ffb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ffbc: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x21ffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x21ffc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ffc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ffc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ffc8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x21ffc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21ffcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21ffccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ffd0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x21ffd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21ffd4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21ffd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ffd8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21FFD8u;
    SET_GPR_U32(ctx, 31, 0x21FFE0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21FFD8u, 0x21FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFE0u;
label_21ffe0:
    // 0x21ffe0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21ffe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ffe4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21FFE4u;
    SET_GPR_U32(ctx, 31, 0x21FFECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21FFE4u, 0x21FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFECu;
label_21ffec:
    // 0x21ffec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ffecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x21fff0u;
}
