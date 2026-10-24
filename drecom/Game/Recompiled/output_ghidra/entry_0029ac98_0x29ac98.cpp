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

// Function: entry_0029ac98
// Address: 0x29ac98 - 0x29adc4
void entry_0029ac98_0x29ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ac98_0x29ac98");
#endif

    switch (ctx->pc) {
        case 0x29acd4u: goto label_29acd4;
        case 0x29ace8u: goto label_29ace8;
        case 0x29ad04u: goto label_29ad04;
        default: break;
    }

    ctx->pc = 0x29ac98u;

    // 0x29ac98: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x29ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x29ac9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29ac9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29aca0: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aca4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29aca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29aca8: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29acac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29acacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29acb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29acb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29acb4: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x29acb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29acb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29acbc: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x29acbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x29acc0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x29acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29acc4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29acc8: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29acc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29accc: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29ACCCu;
    SET_GPR_U32(ctx, 31, 0x29ACD4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29ACD4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29ACD4u) { return; }
    ctx->pc = 0x29ACD4u;
label_29acd4:
    // 0x29acd4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29acd8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29acd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29acdc: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29acdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29ace0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29ACE0u;
    SET_GPR_U32(ctx, 31, 0x29ACE8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29ACE8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29ACE8u) { return; }
    ctx->pc = 0x29ACE8u;
label_29ace8:
    // 0x29ace8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x29ace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acec: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29acecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29acf0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29acf4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x29acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29acf8: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29acfc: 0xc040c60  jal         func_103180
    ctx->pc = 0x29ACFCu;
    SET_GPR_U32(ctx, 31, 0x29AD04u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29AD04u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AD04u) { return; }
    ctx->pc = 0x29AD04u;
label_29ad04:
    // 0x29ad04: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29ad08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ad08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ad0c: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ad10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad14: 0x0  nop
    ctx->pc = 0x29ad14u;
    // NOP
    // 0x29ad18: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29AD18u;
    {
        const bool branch_taken_0x29ad18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad18) {
            ctx->pc = 0x29ADC4u;
            return;
        }
    }
    ctx->pc = 0x29AD20u;
    // 0x29ad20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29ad24: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29ad24u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad28: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29ad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ad2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad30: 0x0  nop
    ctx->pc = 0x29ad30u;
    // NOP
    // 0x29ad34: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29AD34u;
    {
        const bool branch_taken_0x29ad34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad34) {
            ctx->pc = 0x29ADC4u;
            return;
        }
    }
    ctx->pc = 0x29AD3Cu;
    // 0x29ad3c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x29ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad40: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29ad44: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29ad44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29ad48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ad48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad4c: 0x0  nop
    ctx->pc = 0x29ad4cu;
    // NOP
    // 0x29ad50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ad50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad54: 0x0  nop
    ctx->pc = 0x29ad54u;
    // NOP
    // 0x29ad58: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29AD58u;
    {
        const bool branch_taken_0x29ad58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad58) {
            ctx->pc = 0x29ADC4u;
            return;
        }
    }
    ctx->pc = 0x29AD60u;
    // 0x29ad60: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x29ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad64: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x29ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x29ad68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ad68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad6c: 0x0  nop
    ctx->pc = 0x29ad6cu;
    // NOP
    // 0x29ad70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ad70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad74: 0x0  nop
    ctx->pc = 0x29ad74u;
    // NOP
    // 0x29ad78: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29AD78u;
    {
        const bool branch_taken_0x29ad78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad78) {
            ctx->pc = 0x29ADC4u;
            return;
        }
    }
    ctx->pc = 0x29AD80u;
    // 0x29ad80: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x29ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad84: 0x3c0544e1  lui         $a1, 0x44E1
    ctx->pc = 0x29ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17633 << 16));
    // 0x29ad88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29ad88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad8c: 0x0  nop
    ctx->pc = 0x29ad8cu;
    // NOP
    // 0x29ad90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ad90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad94: 0x0  nop
    ctx->pc = 0x29ad94u;
    // NOP
    // 0x29ad98: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29AD98u;
    {
        const bool branch_taken_0x29ad98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad98) {
            ctx->pc = 0x29ADC4u;
            return;
        }
    }
    ctx->pc = 0x29ADA0u;
    // 0x29ada0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x29ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ada4: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29ada8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29adac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29adacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29adb0: 0x0  nop
    ctx->pc = 0x29adb0u;
    // NOP
    // 0x29adb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29adb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29adb8: 0x0  nop
    ctx->pc = 0x29adb8u;
    // NOP
    // 0x29adbc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29ADBCu;
    {
        const bool branch_taken_0x29adbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29adbc) {
            ctx->pc = 0x29ADD0u;
            return;
        }
    }
    ctx->pc = 0x29ADC4u;
}
