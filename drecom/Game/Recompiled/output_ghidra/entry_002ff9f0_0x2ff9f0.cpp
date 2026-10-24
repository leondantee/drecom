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

// Function: entry_002ff9f0
// Address: 0x2ff9f0 - 0x2ffc48
void entry_002ff9f0_0x2ff9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ff9f0_0x2ff9f0");
#endif

    switch (ctx->pc) {
        case 0x2ffa44u: goto label_2ffa44;
        case 0x2ffa50u: goto label_2ffa50;
        case 0x2ffa80u: goto label_2ffa80;
        case 0x2ffaacu: goto label_2ffaac;
        case 0x2ffadcu: goto label_2ffadc;
        case 0x2ffbdcu: goto label_2ffbdc;
        case 0x2ffbe8u: goto label_2ffbe8;
        case 0x2ffc34u: goto label_2ffc34;
        case 0x2ffc40u: goto label_2ffc40;
        default: break;
    }

    ctx->pc = 0x2ff9f0u;

    // 0x2ff9f0: 0x3c0446ab  lui         $a0, 0x46AB
    ctx->pc = 0x2ff9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18091 << 16));
    // 0x2ff9f4: 0x3482e000  ori         $v0, $a0, 0xE000
    ctx->pc = 0x2ff9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x2ff9f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ff9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff9fc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ff9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ffa00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ffa00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ffa04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffa08: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ffa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ffa0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ffa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ffa10: 0x3c074270  lui         $a3, 0x4270
    ctx->pc = 0x2ffa10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17008 << 16));
    // 0x2ffa14: 0x44877800  mtc1        $a3, $f15
    ctx->pc = 0x2ffa14u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ffa18: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2ffa18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffa1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ffa1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffa20: 0x246600a0  addiu       $a2, $v1, 0xA0
    ctx->pc = 0x2ffa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x2ffa24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ffa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ffa28: 0x24421b40  addiu       $v0, $v0, 0x1B40
    ctx->pc = 0x2ffa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x2ffa2c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2ffa2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffa30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffa34: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2ffa34u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffa38: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2ffa38u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffa3c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2FFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2FFA44u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2FFA3Cu, 0x2FFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA44u;
label_2ffa44:
    // 0x2ffa44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ffa44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffa48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFA48u;
    SET_GPR_U32(ctx, 31, 0x2FFA50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFA48u, 0x2FFA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA50u;
label_2ffa50:
    // 0x2ffa50: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ffa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ffa54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ffa54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffa58: 0x0  nop
    ctx->pc = 0x2ffa58u;
    // NOP
    // 0x2ffa5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffa5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffa60: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ffa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ffa64: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x2ffa64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x2ffa68: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2ffa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2ffa6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffa6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffa70: 0x0  nop
    ctx->pc = 0x2ffa70u;
    // NOP
    // 0x2ffa74: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ffa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ffa78: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFA78u;
    SET_GPR_U32(ctx, 31, 0x2FFA80u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFA78u, 0x2FFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA80u;
label_2ffa80:
    // 0x2ffa80: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ffa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ffa84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ffa84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffa88: 0x0  nop
    ctx->pc = 0x2ffa88u;
    // NOP
    // 0x2ffa8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffa8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffa90: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ffa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ffa94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ffa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffa98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffa98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffa9c: 0x0  nop
    ctx->pc = 0x2ffa9cu;
    // NOP
    // 0x2ffaa0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ffaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ffaa4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFAA4u;
    SET_GPR_U32(ctx, 31, 0x2FFAACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFAA4u, 0x2FFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAACu;
label_2ffaac:
    // 0x2ffaac: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x2ffaacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
    // 0x2ffab0: 0x34c38000  ori         $v1, $a2, 0x8000
    ctx->pc = 0x2ffab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x2ffab4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ffab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffab8: 0x0  nop
    ctx->pc = 0x2ffab8u;
    // NOP
    // 0x2ffabc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffabcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffac0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ffac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ffac4: 0x3c03c5fa  lui         $v1, 0xC5FA
    ctx->pc = 0x2ffac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50682 << 16));
    // 0x2ffac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffacc: 0x0  nop
    ctx->pc = 0x2ffaccu;
    // NOP
    // 0x2ffad0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ffad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ffad4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFAD4u;
    SET_GPR_U32(ctx, 31, 0x2FFADCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFAD4u, 0x2FFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFADCu;
label_2ffadc:
    // 0x2ffadc: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2ffadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x2ffae0: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2ffae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ffae4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ffae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffae8: 0x0  nop
    ctx->pc = 0x2ffae8u;
    // NOP
    // 0x2ffaec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffaf0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ffaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ffaf4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ffaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffaf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffaf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffafc: 0x0  nop
    ctx->pc = 0x2ffafcu;
    // NOP
    // 0x2ffb00: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ffb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ffb04: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2ffb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffb08: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2ffb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb0c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ffb0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ffb10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb14: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2ffb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2ffb18: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2ffb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ffb1c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ffb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ffb20: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ffb20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb24: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2ffb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ffb28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ffb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffb2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffb30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ffb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ffb38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ffb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffb3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ffb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ffb40: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2ffb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ffb44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffb48: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ffb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb4c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ffb4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ffb50: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb54: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ffb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ffb58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ffb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffb5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ffb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ffb60: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2ffb60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffb68: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2ffb68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb6c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ffb6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ffb70: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb74: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2ffb74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2ffb78: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2ffb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ffb7c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ffb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ffb80: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2ffb80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2ffb84: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffb88: 0x24680060  addiu       $t0, $v1, 0x60
    ctx->pc = 0x2ffb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ffb8c: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x2ffb8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2ffb90: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ffb90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ffb94: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ffb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb98: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2ffb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2ffb9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ffb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffba0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ffba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ffba4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ffba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffba8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2ffba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffbac: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x2ffbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x2ffbb0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ffbb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffbb4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ffbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ffbb8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffbbc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ffbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ffbc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ffbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffbc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ffbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ffbc8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2ffbc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2ffbcc: 0x24043303  addiu       $a0, $zero, 0x3303
    ctx->pc = 0x2ffbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13059));
    // 0x2ffbd0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2ffbd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffbd4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FFBD4u;
    SET_GPR_U32(ctx, 31, 0x2FFBDCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FFBD4u, 0x2FFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBDCu;
label_2ffbdc:
    // 0x2ffbdc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ffbdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffbe0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FFBE0u;
    SET_GPR_U32(ctx, 31, 0x2FFBE8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FFBE0u, 0x2FFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBE8u;
label_2ffbe8:
    // 0x2ffbe8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2ffbe8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffbec: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ffbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ffbf0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ffbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ffbf4: 0x2631026  xor         $v0, $s3, $v1
    ctx->pc = 0x2ffbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 3));
    // 0x2ffbf8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ffbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ffbfc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2ffbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffc00: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x2ffc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x2ffc04: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2ffc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffc08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ffc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ffc0c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffc10: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2ffc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2ffc14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ffc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffc18: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2ffc18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ffc1c: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x2ffc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ffc20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ffc20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffc24: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2ffc24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffc28: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2ffc28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2ffc2c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FFC2Cu;
    SET_GPR_U32(ctx, 31, 0x2FFC34u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FFC2Cu, 0x2FFC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC34u;
label_2ffc34:
    // 0x2ffc34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ffc34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffc38: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FFC38u;
    SET_GPR_U32(ctx, 31, 0x2FFC40u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FFC38u, 0x2FFC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC40u;
label_2ffc40:
    // 0x2ffc40: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x2FFC40u;
    {
        const bool branch_taken_0x2ffc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc40) {
            ctx->pc = 0x30009Cu;
            return;
        }
    }
    ctx->pc = 0x2FFC48u;
}
