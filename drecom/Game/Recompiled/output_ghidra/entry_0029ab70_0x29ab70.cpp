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

// Function: entry_0029ab70
// Address: 0x29ab70 - 0x29ac8c
void entry_0029ab70_0x29ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ab70_0x29ab70");
#endif

    switch (ctx->pc) {
        case 0x29ab9cu: goto label_29ab9c;
        case 0x29abb0u: goto label_29abb0;
        case 0x29abccu: goto label_29abcc;
        default: break;
    }

    ctx->pc = 0x29ab70u;

    // 0x29ab70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29ab74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ab74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ab78: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ab7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29ab7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ab80: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29ab80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29ab84: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x29ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29ab88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29ab88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29ab8c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29ab90: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29ab90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29ab94: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29AB94u;
    SET_GPR_U32(ctx, 31, 0x29AB9Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29AB9Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AB9Cu) { return; }
    ctx->pc = 0x29AB9Cu;
label_29ab9c:
    // 0x29ab9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x29ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29aba0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29aba0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29aba4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29aba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29aba8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29ABA8u;
    SET_GPR_U32(ctx, 31, 0x29ABB0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29ABB0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29ABB0u) { return; }
    ctx->pc = 0x29ABB0u;
label_29abb0:
    // 0x29abb0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x29abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29abb4: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29abb8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x29abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29abbc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29abc0: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29abc4: 0xc040c60  jal         func_103180
    ctx->pc = 0x29ABC4u;
    SET_GPR_U32(ctx, 31, 0x29ABCCu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29ABCCu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29ABCCu) { return; }
    ctx->pc = 0x29ABCCu;
label_29abcc:
    // 0x29abcc: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x29abccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
    // 0x29abd0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29abd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29abd4: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29abd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29abd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abdc: 0x0  nop
    ctx->pc = 0x29abdcu;
    // NOP
    // 0x29abe0: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29ABE0u;
    {
        const bool branch_taken_0x29abe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29abe0) {
            ctx->pc = 0x29AC8Cu;
            return;
        }
    }
    ctx->pc = 0x29ABE8u;
    // 0x29abe8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29abe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29abec: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29abecu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29abf0: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29abf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29abf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abf8: 0x0  nop
    ctx->pc = 0x29abf8u;
    // NOP
    // 0x29abfc: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29ABFCu;
    {
        const bool branch_taken_0x29abfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29abfc) {
            ctx->pc = 0x29AC8Cu;
            return;
        }
    }
    ctx->pc = 0x29AC04u;
    // 0x29ac04: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac08: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29ac0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29ac0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29ac10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ac10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac14: 0x0  nop
    ctx->pc = 0x29ac14u;
    // NOP
    // 0x29ac18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ac18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac1c: 0x0  nop
    ctx->pc = 0x29ac1cu;
    // NOP
    // 0x29ac20: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29AC20u;
    {
        const bool branch_taken_0x29ac20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac20) {
            ctx->pc = 0x29AC8Cu;
            return;
        }
    }
    ctx->pc = 0x29AC28u;
    // 0x29ac28: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29ac28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac2c: 0x3c054516  lui         $a1, 0x4516
    ctx->pc = 0x29ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17686 << 16));
    // 0x29ac30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29ac30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac34: 0x0  nop
    ctx->pc = 0x29ac34u;
    // NOP
    // 0x29ac38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ac38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac3c: 0x0  nop
    ctx->pc = 0x29ac3cu;
    // NOP
    // 0x29ac40: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29AC40u;
    {
        const bool branch_taken_0x29ac40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac40) {
            ctx->pc = 0x29AC8Cu;
            return;
        }
    }
    ctx->pc = 0x29AC48u;
    // 0x29ac48: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac4c: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29ac50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ac50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac54: 0x0  nop
    ctx->pc = 0x29ac54u;
    // NOP
    // 0x29ac58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ac58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac5c: 0x0  nop
    ctx->pc = 0x29ac5cu;
    // NOP
    // 0x29ac60: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29AC60u;
    {
        const bool branch_taken_0x29ac60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac60) {
            ctx->pc = 0x29AC8Cu;
            return;
        }
    }
    ctx->pc = 0x29AC68u;
    // 0x29ac68: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac6c: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29ac70: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29ac70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29ac74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ac74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac78: 0x0  nop
    ctx->pc = 0x29ac78u;
    // NOP
    // 0x29ac7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ac7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac80: 0x0  nop
    ctx->pc = 0x29ac80u;
    // NOP
    // 0x29ac84: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29AC84u;
    {
        const bool branch_taken_0x29ac84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac84) {
            ctx->pc = 0x29AC98u;
            return;
        }
    }
    ctx->pc = 0x29AC8Cu;
}
