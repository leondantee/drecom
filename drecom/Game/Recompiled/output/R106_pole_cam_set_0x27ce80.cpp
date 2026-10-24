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

// Function: R106_pole_cam_set
// Address: 0x27ce80 - 0x27d088
void R106_pole_cam_set_0x27ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_pole_cam_set_0x27ce80");
#endif

    switch (ctx->pc) {
        case 0x27cf08u: goto label_27cf08;
        case 0x27cf54u: goto label_27cf54;
        case 0x27cfb4u: goto label_27cfb4;
        case 0x27d070u: goto label_27d070;
        default: break;
    }

    ctx->pc = 0x27ce80u;

    // 0x27ce80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27ce84: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x27ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x27ce88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27ce8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ce90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ce90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ce94: 0x8c31f9ec  lw          $s1, -0x614($at)
    ctx->pc = 0x27ce94u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x27ce98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ce98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ce9c: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x27ce9cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x27cea0: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x27cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x27cea4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27cea4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27cea8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27ceac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27ceb0: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x27ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ceb4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27ceb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27ceb8: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x27ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x27cebc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27cebcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27cec0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x27cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27cec4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27cec8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27cecc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x27ced0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27ced4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x27ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x27ced8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27ced8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27cedc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27cedcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27cee0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27cee0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cee4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27cee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cee8: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x27cee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x27ceec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ceecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cef0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x27cef0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cef4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x27cef4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cef8: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x27cef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27cefc: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x27cefcu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cf00: 0xc0612a8  jal         func_184AA0
    ctx->pc = 0x27CF00u;
    SET_GPR_U32(ctx, 31, 0x27CF08u);
    ctx->pc = 0x184AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184AA0u, 0x27CF00u, 0x27CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF08u;
label_27cf08:
    // 0x27cf08: 0xc6000190  lwc1        $f0, 0x190($s0)
    ctx->pc = 0x27cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cf0c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x27cf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27cf10: 0x3c02448e  lui         $v0, 0x448E
    ctx->pc = 0x27cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17550 << 16));
    // 0x27cf14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27cf14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cf18: 0x0  nop
    ctx->pc = 0x27cf18u;
    // NOP
    // 0x27cf1c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27cf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27cf20: 0xc6000198  lwc1        $f0, 0x198($s0)
    ctx->pc = 0x27cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cf24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27cf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27cf28: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27cf2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27cf2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27cf30: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x27cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27cf34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27cf38: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x27cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x27cf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27cf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cf40: 0x0  nop
    ctx->pc = 0x27cf40u;
    // NOP
    // 0x27cf44: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27cf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x27cf48: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x27cf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27cf4c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x27CF4Cu;
    SET_GPR_U32(ctx, 31, 0x27CF54u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x27CF4Cu, 0x27CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF54u;
label_27cf54:
    // 0x27cf54: 0x3c024695  lui         $v0, 0x4695
    ctx->pc = 0x27cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18069 << 16));
    // 0x27cf58: 0x34429c00  ori         $v0, $v0, 0x9C00
    ctx->pc = 0x27cf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39936);
    // 0x27cf5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27cf5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cf60: 0x0  nop
    ctx->pc = 0x27cf60u;
    // NOP
    // 0x27cf64: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x27cf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x27cf68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27cf68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cf6c: 0x0  nop
    ctx->pc = 0x27cf6cu;
    // NOP
    // 0x27cf70: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x27cf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x27cf74: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27cf78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x27cf7c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x27cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27cf80: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x27cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x27cf84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27cf84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27cf88: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27cf88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27cf8c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27cf8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cf90: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x27cf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x27cf94: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x27cf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x27cf98: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27cf98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cf9c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x27cf9cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cfa0: 0x262900e0  addiu       $t1, $s1, 0xE0
    ctx->pc = 0x27cfa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x27cfa4: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x27cfa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27cfa8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x27cfa8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27cfac: 0xc0612a8  jal         func_184AA0
    ctx->pc = 0x27CFACu;
    SET_GPR_U32(ctx, 31, 0x27CFB4u);
    ctx->pc = 0x184AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184AA0u, 0x27CFACu, 0x27CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFB4u;
label_27cfb4:
    // 0x27cfb4: 0xc6000190  lwc1        $f0, 0x190($s0)
    ctx->pc = 0x27cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cfb8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x27cfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27cfbc: 0x3c02469e  lui         $v0, 0x469E
    ctx->pc = 0x27cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18078 << 16));
    // 0x27cfc0: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x27cfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
    // 0x27cfc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27cfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cfc8: 0x0  nop
    ctx->pc = 0x27cfc8u;
    // NOP
    // 0x27cfcc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27cfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27cfd0: 0xc6000198  lwc1        $f0, 0x198($s0)
    ctx->pc = 0x27cfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cfd4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27cfd8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x27cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x27cfdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27cfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cfe0: 0x0  nop
    ctx->pc = 0x27cfe0u;
    // NOP
    // 0x27cfe4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27cfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27cfe8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27cfec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27cfecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27cff0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x27cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27cff4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27cff8: 0x3c024403  lui         $v0, 0x4403
    ctx->pc = 0x27cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17411 << 16));
    // 0x27cffc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27cffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x27d000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d004: 0x0  nop
    ctx->pc = 0x27d004u;
    // NOP
    // 0x27d008: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x27d008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27d00c: 0x3c02c548  lui         $v0, 0xC548
    ctx->pc = 0x27d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50504 << 16));
    // 0x27d010: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27d010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x27d014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d018: 0x0  nop
    ctx->pc = 0x27d018u;
    // NOP
    // 0x27d01c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x27d01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27d020: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x27d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x27d024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d028: 0x0  nop
    ctx->pc = 0x27d028u;
    // NOP
    // 0x27d02c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27d02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x27d030: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27d030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d034: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d038: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27d038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x27d03c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x27d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27d040: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x27d040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x27d044: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27d044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27d048: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27d048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d04c: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x27d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x27d050: 0x240600b5  addiu       $a2, $zero, 0xB5
    ctx->pc = 0x27d050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x27d054: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d054u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d058: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x27d058u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d05c: 0x262900e0  addiu       $t1, $s1, 0xE0
    ctx->pc = 0x27d05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x27d060: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x27d060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27d064: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x27d064u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d068: 0xc0612a8  jal         func_184AA0
    ctx->pc = 0x27D068u;
    SET_GPR_U32(ctx, 31, 0x27D070u);
    ctx->pc = 0x184AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184AA0u, 0x27D068u, 0x27D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D070u;
label_27d070:
    // 0x27d070: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27d070u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d074: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27d074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d078: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27d078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d07c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x27d07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27d080: 0x3e00008  jr          $ra
    ctx->pc = 0x27D080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D088u;
}
