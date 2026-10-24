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

// Function: entry_00163a18
// Address: 0x163a18 - 0x163b2c
void entry_00163a18_0x163a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163a18_0x163a18");
#endif

    switch (ctx->pc) {
        case 0x163a28u: goto label_163a28;
        case 0x163a3cu: goto label_163a3c;
        case 0x163a50u: goto label_163a50;
        case 0x163a84u: goto label_163a84;
        case 0x163ad8u: goto label_163ad8;
        default: break;
    }

    ctx->pc = 0x163a18u;

    // 0x163a18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a1c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x163a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a20: 0xc040c24  jal         func_103090
    ctx->pc = 0x163A20u;
    SET_GPR_U32(ctx, 31, 0x163A28u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x163A28u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163A28u) { return; }
    ctx->pc = 0x163A28u;
label_163a28:
    // 0x163a28: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a2c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x163a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a30: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x163a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163a34: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x163A34u;
    SET_GPR_U32(ctx, 31, 0x163A3Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x163A3Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163A3Cu) { return; }
    ctx->pc = 0x163A3Cu;
label_163a3c:
    // 0x163a3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x163a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163a40: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x163a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x163a44: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x163a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a48: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x163A48u;
    SET_GPR_U32(ctx, 31, 0x163A50u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x163A48u, 0x163A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A50u;
label_163a50:
    // 0x163a50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163a54: 0xc42156c8  lwc1        $f1, 0x56C8($at)
    ctx->pc = 0x163a54u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163a58: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x163a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x163a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163a60: 0x0  nop
    ctx->pc = 0x163a60u;
    // NOP
    // 0x163a64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163a68: 0x0  nop
    ctx->pc = 0x163a68u;
    // NOP
    // 0x163a6c: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x163A6Cu;
    {
        const bool branch_taken_0x163a6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163a6c) {
            ctx->pc = 0x163B44u;
            return;
        }
    }
    ctx->pc = 0x163A74u;
    // 0x163a74: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a78: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x163a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163a7c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x163A7Cu;
    SET_GPR_U32(ctx, 31, 0x163A84u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x163A84u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163A84u) { return; }
    ctx->pc = 0x163A84u;
label_163a84:
    // 0x163a84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x163a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x163a88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x163a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163a8c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x163a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x163a90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163a94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163a98: 0xc42056c8  lwc1        $f0, 0x56C8($at)
    ctx->pc = 0x163a98u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163a9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163aa0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x163aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x163aa4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163aac: 0x0  nop
    ctx->pc = 0x163aacu;
    // NOP
    // 0x163ab0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x163ab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163ab4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x163ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163ab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163abc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x163abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x163ac0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x163ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x163ac4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x163ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163ac8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x163ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163acc: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x163accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x163ad0: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x163AD0u;
    SET_GPR_U32(ctx, 31, 0x163AD8u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x163AD0u, 0x163AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AD8u;
label_163ad8:
    // 0x163ad8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x163ad8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x163adc: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x163ADCu;
    {
        const bool branch_taken_0x163adc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x163adc) {
            ctx->pc = 0x163B2Cu;
            return;
        }
    }
    ctx->pc = 0x163AE4u;
    // 0x163ae4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x163ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163ae8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x163ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163aec: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163af4: 0x0  nop
    ctx->pc = 0x163af4u;
    // NOP
    // 0x163af8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163afc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x163afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163b00: 0x0  nop
    ctx->pc = 0x163b00u;
    // NOP
    // 0x163b04: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x163B04u;
    {
        const bool branch_taken_0x163b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163b04) {
            ctx->pc = 0x163B44u;
            return;
        }
    }
    ctx->pc = 0x163B0Cu;
    // 0x163b0c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x163b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b10: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b18: 0x0  nop
    ctx->pc = 0x163b18u;
    // NOP
    // 0x163b1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163b1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163b20: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x163b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x163b24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163B24u;
    {
        const bool branch_taken_0x163b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163b24) {
            ctx->pc = 0x163B44u;
            return;
        }
    }
    ctx->pc = 0x163B2Cu;
}
