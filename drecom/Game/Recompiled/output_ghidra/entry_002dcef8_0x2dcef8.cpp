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

// Function: entry_002dcef8
// Address: 0x2dcef8 - 0x2dd030
void entry_002dcef8_0x2dcef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dcef8_0x2dcef8");
#endif

    switch (ctx->pc) {
        case 0x2dcf64u: goto label_2dcf64;
        case 0x2dcfa0u: goto label_2dcfa0;
        case 0x2dcfecu: goto label_2dcfec;
        case 0x2dd028u: goto label_2dd028;
        default: break;
    }

    ctx->pc = 0x2dcef8u;

    // 0x2dcef8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dcef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcefc: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2dcefcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2dcf00: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2DCF00u;
    {
        const bool branch_taken_0x2dcf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf00) {
            ctx->pc = 0x2DD030u;
            return;
        }
    }
    ctx->pc = 0x2DCF08u;
    // 0x2dcf08: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2dcf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcf0c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2dcf10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf14: 0x0  nop
    ctx->pc = 0x2dcf14u;
    // NOP
    // 0x2dcf18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dcf18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dcf1c: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2dcf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2dcf20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcf20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf24: 0x0  nop
    ctx->pc = 0x2dcf24u;
    // NOP
    // 0x2dcf28: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dcf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2dcf2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf30: 0x0  nop
    ctx->pc = 0x2dcf30u;
    // NOP
    // 0x2dcf34: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2dcf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2dcf38: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2dcf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2dcf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf40: 0x0  nop
    ctx->pc = 0x2dcf40u;
    // NOP
    // 0x2dcf44: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dcf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2dcf48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dcf4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcf50: 0x0  nop
    ctx->pc = 0x2dcf50u;
    // NOP
    // 0x2dcf54: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2dcf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2dcf58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2dcf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcf5c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DCF5Cu;
    SET_GPR_U32(ctx, 31, 0x2DCF64u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DCF5Cu, 0x2DCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF64u;
label_2dcf64:
    // 0x2dcf64: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2dcf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcf68: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2dcf68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dcf6c: 0x3c144300  lui         $s4, 0x4300
    ctx->pc = 0x2dcf6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcf70: 0x44947000  mtc1        $s4, $f14
    ctx->pc = 0x2dcf70u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dcf74: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2dcf74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2dcf78: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2dcf78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dcf7c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dcf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcf80: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2dcf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dcf84: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dcf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcf88: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dcf88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcf8c: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dcf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcf90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dcf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcf94: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dcf94u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcf98: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DCF98u;
    SET_GPR_U32(ctx, 31, 0x2DCFA0u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DCF98u, 0x2DCFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFA0u;
label_2dcfa0:
    // 0x2dcfa0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcfa4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dcfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dcfa8: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2dcfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcfac: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2dcfacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dcfb0: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2dcfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x2dcfb4: 0x44857800  mtc1        $a1, $f15
    ctx->pc = 0x2dcfb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dcfb8: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2dcfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcfbc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2dcfbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2dcfc0: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2dcfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dcfc4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2dcfc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2dcfc8: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2dcfc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcfcc: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2dcfccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2dcfd0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2dcfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcfd4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2dcfd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dcfd8: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dcfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcfdc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dcfdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcfe0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dcfe0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcfe4: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DCFE4u;
    SET_GPR_U32(ctx, 31, 0x2DCFECu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DCFE4u, 0x2DCFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFECu;
label_2dcfec:
    // 0x2dcfec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcff0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dcff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dcff4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcff8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dcff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dcffc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2dcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2dd000: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dd000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dd004: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dd004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd008: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2dd008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dd00c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dd00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dd010: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dd010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd014: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dd014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd018: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dd018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd01c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dd01cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd020: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DD020u;
    SET_GPR_U32(ctx, 31, 0x2DD028u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DD020u, 0x2DD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD028u;
label_2dd028:
    // 0x2dd028: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2DD028u;
    {
        const bool branch_taken_0x2dd028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd028) {
            ctx->pc = 0x2DD194u;
            return;
        }
    }
    ctx->pc = 0x2DD030u;
}
