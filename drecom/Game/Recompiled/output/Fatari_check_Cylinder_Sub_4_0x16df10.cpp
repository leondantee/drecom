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

// Function: Fatari_check_Cylinder_Sub_4
// Address: 0x16df10 - 0x16e7b0
void Fatari_check_Cylinder_Sub_4_0x16df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fatari_check_Cylinder_Sub_4_0x16df10");
#endif

    switch (ctx->pc) {
        case 0x16df3cu: goto label_16df3c;
        case 0x16df58u: goto label_16df58;
        case 0x16df70u: goto label_16df70;
        case 0x16df88u: goto label_16df88;
        case 0x16dfa4u: goto label_16dfa4;
        case 0x16dfc0u: goto label_16dfc0;
        case 0x16e234u: goto label_16e234;
        case 0x16e248u: goto label_16e248;
        case 0x16e2d0u: goto label_16e2d0;
        case 0x16e2e8u: goto label_16e2e8;
        case 0x16e370u: goto label_16e370;
        case 0x16e388u: goto label_16e388;
        default: break;
    }

    ctx->pc = 0x16df10u;

    // 0x16df10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x16df10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x16df14: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x16df14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x16df18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16df18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16df1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16df20: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x16df20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x16df24: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16df28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16df2c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x16df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16df30: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x16df30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16df34: 0xc040c80  jal         func_103200
    ctx->pc = 0x16DF34u;
    SET_GPR_U32(ctx, 31, 0x16DF3Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16DF3Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DF3Cu) { return; }
    ctx->pc = 0x16DF3Cu;
label_16df3c:
    // 0x16df3c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16df40: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16df44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16df44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16df48: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x16df48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16df4c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x16df4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16df50: 0xc040c80  jal         func_103200
    ctx->pc = 0x16DF50u;
    SET_GPR_U32(ctx, 31, 0x16DF58u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16DF58u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DF58u) { return; }
    ctx->pc = 0x16DF58u;
label_16df58:
    // 0x16df58: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16df5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16df5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16df60: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16df60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16df64: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x16df64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16df68: 0xc040c80  jal         func_103200
    ctx->pc = 0x16DF68u;
    SET_GPR_U32(ctx, 31, 0x16DF70u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16DF70u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DF70u) { return; }
    ctx->pc = 0x16DF70u;
label_16df70:
    // 0x16df70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16df70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16df74: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16df74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16df78: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16df7c: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16df7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16df80: 0xc040c80  jal         func_103200
    ctx->pc = 0x16DF80u;
    SET_GPR_U32(ctx, 31, 0x16DF88u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16DF88u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DF88u) { return; }
    ctx->pc = 0x16DF88u;
label_16df88:
    // 0x16df88: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16df8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16df90: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x16df90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16df94: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16df94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16df98: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16df98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16df9c: 0xc040c80  jal         func_103200
    ctx->pc = 0x16DF9Cu;
    SET_GPR_U32(ctx, 31, 0x16DFA4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16DFA4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DFA4u) { return; }
    ctx->pc = 0x16DFA4u;
label_16dfa4:
    // 0x16dfa4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16dfa8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16dfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16dfac: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x16dfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16dfb0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16dfb4: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16dfb8: 0xc040c80  jal         func_103200
    ctx->pc = 0x16DFB8u;
    SET_GPR_U32(ctx, 31, 0x16DFC0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16DFC0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DFC0u) { return; }
    ctx->pc = 0x16DFC0u;
label_16dfc0:
    // 0x16dfc0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16dfc0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16dfc4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dfc8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dfcc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16dfccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16dfd0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x16dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dfd4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dfd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16dfd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16dfdc: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16dfdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16dfe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16dfe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dfe4: 0x0  nop
    ctx->pc = 0x16dfe4u;
    // NOP
    // 0x16dfe8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16dfe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dfec: 0x0  nop
    ctx->pc = 0x16dfecu;
    // NOP
    // 0x16dff0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x16DFF0u;
    {
        const bool branch_taken_0x16dff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16dff0) {
            ctx->pc = 0x16E060u;
            goto label_16e060;
        }
    }
    ctx->pc = 0x16DFF8u;
    // 0x16dff8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dffc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e000: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e000u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e004: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x16e004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e008: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e00c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e010: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16e010u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e018: 0x0  nop
    ctx->pc = 0x16e018u;
    // NOP
    // 0x16e01c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e01cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e020: 0x0  nop
    ctx->pc = 0x16e020u;
    // NOP
    // 0x16e024: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x16E024u;
    {
        const bool branch_taken_0x16e024 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e024) {
            ctx->pc = 0x16E060u;
            goto label_16e060;
        }
    }
    ctx->pc = 0x16E02Cu;
    // 0x16e02c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x16e02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e030: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x16e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e034: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e034u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e038: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x16e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e03c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x16e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e040: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e044: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16e044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e04c: 0x0  nop
    ctx->pc = 0x16e04cu;
    // NOP
    // 0x16e050: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e054: 0x0  nop
    ctx->pc = 0x16e054u;
    // NOP
    // 0x16e058: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x16E058u;
    {
        const bool branch_taken_0x16e058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e058) {
            ctx->pc = 0x16E0FCu;
            goto label_16e0fc;
        }
    }
    ctx->pc = 0x16E060u;
label_16e060:
    // 0x16e060: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e064: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16e064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e068: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e06c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x16e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e070: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e074: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e078: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16e078u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e07c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e07cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e080: 0x0  nop
    ctx->pc = 0x16e080u;
    // NOP
    // 0x16e084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e088: 0x0  nop
    ctx->pc = 0x16e088u;
    // NOP
    // 0x16e08c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x16E08Cu;
    {
        const bool branch_taken_0x16e08c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e08c) {
            ctx->pc = 0x16E100u;
            goto label_16e100;
        }
    }
    ctx->pc = 0x16E094u;
    // 0x16e094: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e098: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e09c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e09cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e0a0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x16e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e0a4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16e0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e0a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e0ac: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16e0acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e0b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e0b4: 0x0  nop
    ctx->pc = 0x16e0b4u;
    // NOP
    // 0x16e0b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e0b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e0bc: 0x0  nop
    ctx->pc = 0x16e0bcu;
    // NOP
    // 0x16e0c0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x16E0C0u;
    {
        const bool branch_taken_0x16e0c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e0c0) {
            ctx->pc = 0x16E100u;
            goto label_16e100;
        }
    }
    ctx->pc = 0x16E0C8u;
    // 0x16e0c8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x16e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e0cc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x16e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e0d0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e0d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e0d4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x16e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e0d8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x16e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e0dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e0e0: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16e0e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e0e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e0e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e0e8: 0x0  nop
    ctx->pc = 0x16e0e8u;
    // NOP
    // 0x16e0ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e0ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e0f0: 0x0  nop
    ctx->pc = 0x16e0f0u;
    // NOP
    // 0x16e0f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16E0F4u;
    {
        const bool branch_taken_0x16e0f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e0f4) {
            ctx->pc = 0x16E100u;
            goto label_16e100;
        }
    }
    ctx->pc = 0x16E0FCu;
label_16e0fc:
    // 0x16e0fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16e0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e100:
    // 0x16e100: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x16e100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e104: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16e104u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16e108: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e10c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e10cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e110: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e114: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e118: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e11c: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16e11cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e120: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x16e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e124: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16e124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e128: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e12c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x16e12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e130: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e134: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e138: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16e138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e13c: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16e13cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16e140: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x16e140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16e144: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x16e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e148: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16e148u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16e14c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16e14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e150: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e150u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e154: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16e154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e158: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16e158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e15c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e160: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16e160u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e164: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x16e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e168: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e16c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e16cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e170: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x16e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e174: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e178: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e17c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16e17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e180: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16e180u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16e184: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x16e184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x16e188: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x16e188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e18c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16e18cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16e190: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x16e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e194: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e198: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x16e198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e19c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x16e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e1a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e1a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e1a4: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16e1a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e1a8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16e1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e1ac: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x16e1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e1b0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e1b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e1b4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16e1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e1b8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x16e1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e1bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e1c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16e1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e1c4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16e1c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16e1c8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x16e1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x16e1cc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x16e1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e1d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e1d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e1d4: 0x0  nop
    ctx->pc = 0x16e1d4u;
    // NOP
    // 0x16e1d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e1dc: 0x0  nop
    ctx->pc = 0x16e1dcu;
    // NOP
    // 0x16e1e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16E1E0u;
    {
        const bool branch_taken_0x16e1e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1e0) {
            ctx->pc = 0x16E200u;
            goto label_16e200;
        }
    }
    ctx->pc = 0x16E1E8u;
    // 0x16e1e8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e1ec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e1ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e1f0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x16e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e1f4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16e1f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16E1F8u;
    {
        const bool branch_taken_0x16e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e1f8) {
            ctx->pc = 0x16E264u;
            goto label_16e264;
        }
    }
    ctx->pc = 0x16E200u;
label_16e200:
    // 0x16e200: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x16e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e204: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16e204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16e208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e20c: 0x0  nop
    ctx->pc = 0x16e20cu;
    // NOP
    // 0x16e210: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e214: 0x0  nop
    ctx->pc = 0x16e214u;
    // NOP
    // 0x16e218: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x16E218u;
    {
        const bool branch_taken_0x16e218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e218) {
            ctx->pc = 0x16E250u;
            goto label_16e250;
        }
    }
    ctx->pc = 0x16E220u;
    // 0x16e220: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16e220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e224: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16e224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e228: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x16e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e22c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16E22Cu;
    SET_GPR_U32(ctx, 31, 0x16E234u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16E234u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E234u) { return; }
    ctx->pc = 0x16E234u;
label_16e234:
    // 0x16e234: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e238: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x16e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e23c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x16e23cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e240: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16E240u;
    SET_GPR_U32(ctx, 31, 0x16E248u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16E248u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E248u) { return; }
    ctx->pc = 0x16E248u;
label_16e248:
    // 0x16e248: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16E248u;
    {
        const bool branch_taken_0x16e248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e248) {
            ctx->pc = 0x16E264u;
            goto label_16e264;
        }
    }
    ctx->pc = 0x16E250u;
label_16e250:
    // 0x16e250: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e254: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16e258: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e258u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e25c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x16e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e260: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_16e264:
    // 0x16e264: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x16e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e26c: 0x0  nop
    ctx->pc = 0x16e26cu;
    // NOP
    // 0x16e270: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e274: 0x0  nop
    ctx->pc = 0x16e274u;
    // NOP
    // 0x16e278: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16E278u;
    {
        const bool branch_taken_0x16e278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e278) {
            ctx->pc = 0x16E29Cu;
            goto label_16e29c;
        }
    }
    ctx->pc = 0x16E280u;
    // 0x16e280: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e284: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16e284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16e288: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e288u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e28c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x16e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e290: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e290u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16e294: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16E294u;
    {
        const bool branch_taken_0x16e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e294) {
            ctx->pc = 0x16E304u;
            goto label_16e304;
        }
    }
    ctx->pc = 0x16E29Cu;
label_16e29c:
    // 0x16e29c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x16e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e2a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16e2a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e2a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e2a8: 0x0  nop
    ctx->pc = 0x16e2a8u;
    // NOP
    // 0x16e2ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e2acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e2b0: 0x0  nop
    ctx->pc = 0x16e2b0u;
    // NOP
    // 0x16e2b4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x16E2B4u;
    {
        const bool branch_taken_0x16e2b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e2b4) {
            ctx->pc = 0x16E2F0u;
            goto label_16e2f0;
        }
    }
    ctx->pc = 0x16E2BCu;
    // 0x16e2bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e2c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16e2c4: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x16e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e2c8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16E2C8u;
    SET_GPR_U32(ctx, 31, 0x16E2D0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16E2D0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E2D0u) { return; }
    ctx->pc = 0x16E2D0u;
label_16e2d0:
    // 0x16e2d0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e2d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e2d8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e2dc: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x16e2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16e2e0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16E2E0u;
    SET_GPR_U32(ctx, 31, 0x16E2E8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16E2E8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E2E8u) { return; }
    ctx->pc = 0x16E2E8u;
label_16e2e8:
    // 0x16e2e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16E2E8u;
    {
        const bool branch_taken_0x16e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e2e8) {
            ctx->pc = 0x16E304u;
            goto label_16e304;
        }
    }
    ctx->pc = 0x16E2F0u;
label_16e2f0:
    // 0x16e2f0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e2f4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16e2f8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e2f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e2fc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x16e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e300: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e300u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_16e304:
    // 0x16e304: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x16e304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e30c: 0x0  nop
    ctx->pc = 0x16e30cu;
    // NOP
    // 0x16e310: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e314: 0x0  nop
    ctx->pc = 0x16e314u;
    // NOP
    // 0x16e318: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16E318u;
    {
        const bool branch_taken_0x16e318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e318) {
            ctx->pc = 0x16E33Cu;
            goto label_16e33c;
        }
    }
    ctx->pc = 0x16E320u;
    // 0x16e320: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e324: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16e328: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e328u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e32c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x16e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16e330: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e330u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16e334: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16E334u;
    {
        const bool branch_taken_0x16e334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e334) {
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E33Cu;
label_16e33c:
    // 0x16e33c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x16e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e340: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16e344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e348: 0x0  nop
    ctx->pc = 0x16e348u;
    // NOP
    // 0x16e34c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e34cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e350: 0x0  nop
    ctx->pc = 0x16e350u;
    // NOP
    // 0x16e354: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x16E354u;
    {
        const bool branch_taken_0x16e354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e354) {
            ctx->pc = 0x16E390u;
            goto label_16e390;
        }
    }
    ctx->pc = 0x16E35Cu;
    // 0x16e35c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16e360: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16e360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16e364: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x16e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e368: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16E368u;
    SET_GPR_U32(ctx, 31, 0x16E370u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16E370u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E370u) { return; }
    ctx->pc = 0x16E370u;
label_16e370:
    // 0x16e370: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e374: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16e374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16e378: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x16e378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16e37c: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x16e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16e380: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16E380u;
    SET_GPR_U32(ctx, 31, 0x16E388u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16E388u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E388u) { return; }
    ctx->pc = 0x16E388u;
label_16e388:
    // 0x16e388: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16E388u;
    {
        const bool branch_taken_0x16e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e388) {
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E390u;
label_16e390:
    // 0x16e390: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e394: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e394u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e398: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x16e398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16e39c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e39cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_16e3a0:
    // 0x16e3a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3a4: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e3a4u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3a8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x16e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3ac: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e3acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e3b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3b4: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e3b4u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3b8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x16e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e3c0: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16e3c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e3c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3c8: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e3c8u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3cc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x16e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3d0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e3d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e3d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3d8: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e3d8u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3dc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x16e3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e3e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e3e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16e3e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e3e8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16e3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16e3ec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x16e3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x16e3f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3f4: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e3f4u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3f8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3fc: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e3fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e400: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e404: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e404u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e408: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e40c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e40cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e410: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16e410u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e414: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e418: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e418u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e41c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e420: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e420u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e424: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e428: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e428u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e42c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e430: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e434: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16e434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e438: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16e438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16e43c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x16e43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x16e440: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e444: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e444u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e448: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x16e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e44c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e44cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e450: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e454: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e454u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e458: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x16e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e45c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e460: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16e460u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e464: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e468: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e468u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e46c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x16e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e470: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e470u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e474: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e478: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e478u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e47c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x16e47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e480: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e484: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16e484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e488: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16e488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16e48c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x16e48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x16e490: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x16e490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e494: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x16e494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e498: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e49c: 0x0  nop
    ctx->pc = 0x16e49cu;
    // NOP
    // 0x16e4a0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x16E4A0u;
    {
        const bool branch_taken_0x16e4a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e4a0) {
            ctx->pc = 0x16E4D8u;
            goto label_16e4d8;
        }
    }
    ctx->pc = 0x16E4A8u;
    // 0x16e4a8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x16e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e4ac: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16e4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e4b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e4b4: 0x0  nop
    ctx->pc = 0x16e4b4u;
    // NOP
    // 0x16e4b8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E4B8u;
    {
        const bool branch_taken_0x16e4b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e4b8) {
            ctx->pc = 0x16E4CCu;
            goto label_16e4cc;
        }
    }
    ctx->pc = 0x16E4C0u;
    // 0x16e4c0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16e4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e4c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16E4C4u;
    {
        const bool branch_taken_0x16e4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e4c4) {
            ctx->pc = 0x16E500u;
            goto label_16e500;
        }
    }
    ctx->pc = 0x16E4CCu;
label_16e4cc:
    // 0x16e4cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16e4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e4d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16E4D0u;
    {
        const bool branch_taken_0x16e4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e4d0) {
            ctx->pc = 0x16E500u;
            goto label_16e500;
        }
    }
    ctx->pc = 0x16E4D8u;
label_16e4d8:
    // 0x16e4d8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x16e4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e4dc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16e4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e4e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e4e4: 0x0  nop
    ctx->pc = 0x16e4e4u;
    // NOP
    // 0x16e4e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E4E8u;
    {
        const bool branch_taken_0x16e4e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e4e8) {
            ctx->pc = 0x16E4FCu;
            goto label_16e4fc;
        }
    }
    ctx->pc = 0x16E4F0u;
    // 0x16e4f0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16e4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e4f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E4F4u;
    {
        const bool branch_taken_0x16e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e4f4) {
            ctx->pc = 0x16E500u;
            goto label_16e500;
        }
    }
    ctx->pc = 0x16E4FCu;
label_16e4fc:
    // 0x16e4fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x16e4fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_16e500:
    // 0x16e500: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x16e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e504: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e508: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e508u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e50c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e510: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e510u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e514: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e518: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e51c: 0x0  nop
    ctx->pc = 0x16e51cu;
    // NOP
    // 0x16e520: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E520u;
    {
        const bool branch_taken_0x16e520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e520) {
            ctx->pc = 0x16E550u;
            goto label_16e550;
        }
    }
    ctx->pc = 0x16E528u;
    // 0x16e528: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x16e528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e52c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e530: 0xc420ab10  lwc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e530u;
    { uint32_t bits = FAST_READ32(0x47AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e534: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e538: 0x0  nop
    ctx->pc = 0x16e538u;
    // NOP
    // 0x16e53c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E53Cu;
    {
        const bool branch_taken_0x16e53c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e53c) {
            ctx->pc = 0x16E550u;
            goto label_16e550;
        }
    }
    ctx->pc = 0x16E544u;
    // 0x16e544: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x16e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e548: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e54c: 0xe420ab10  swc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB10u, _value); } while (0); }
label_16e550:
    // 0x16e550: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x16e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e554: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e558: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e558u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e55c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e560: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e560u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e564: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e568: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e56c: 0x0  nop
    ctx->pc = 0x16e56cu;
    // NOP
    // 0x16e570: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E570u;
    {
        const bool branch_taken_0x16e570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e570) {
            ctx->pc = 0x16E5A0u;
            goto label_16e5a0;
        }
    }
    ctx->pc = 0x16E578u;
    // 0x16e578: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x16e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e57c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e580: 0xc420ab10  lwc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e580u;
    { uint32_t bits = FAST_READ32(0x47AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e584: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e588: 0x0  nop
    ctx->pc = 0x16e588u;
    // NOP
    // 0x16e58c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E58Cu;
    {
        const bool branch_taken_0x16e58c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e58c) {
            ctx->pc = 0x16E5A0u;
            goto label_16e5a0;
        }
    }
    ctx->pc = 0x16E594u;
    // 0x16e594: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e598: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e59c: 0xe420ab10  swc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB10u, _value); } while (0); }
label_16e5a0:
    // 0x16e5a0: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x16e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e5a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e5a8: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e5a8u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e5ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e5b0: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e5b0u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e5b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e5b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e5bc: 0x0  nop
    ctx->pc = 0x16e5bcu;
    // NOP
    // 0x16e5c0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E5C0u;
    {
        const bool branch_taken_0x16e5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e5c0) {
            ctx->pc = 0x16E5F0u;
            goto label_16e5f0;
        }
    }
    ctx->pc = 0x16E5C8u;
    // 0x16e5c8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16e5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e5cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e5d0: 0xc420ab10  lwc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e5d0u;
    { uint32_t bits = FAST_READ32(0x47AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e5d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e5d8: 0x0  nop
    ctx->pc = 0x16e5d8u;
    // NOP
    // 0x16e5dc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E5DCu;
    {
        const bool branch_taken_0x16e5dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e5dc) {
            ctx->pc = 0x16E5F0u;
            goto label_16e5f0;
        }
    }
    ctx->pc = 0x16E5E4u;
    // 0x16e5e4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x16e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e5e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e5ec: 0xe420ab10  swc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB10u, _value); } while (0); }
label_16e5f0:
    // 0x16e5f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e5f4: 0x16230015  bne         $s1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E5F4u;
    {
        const bool branch_taken_0x16e5f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e5f4) {
            ctx->pc = 0x16E64Cu;
            goto label_16e64c;
        }
    }
    ctx->pc = 0x16E5FCu;
    // 0x16e5fc: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x16e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e600: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x16e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e604: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e608: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16e608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16e60c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x16e60cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e610: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x16e614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e618: 0x0  nop
    ctx->pc = 0x16e618u;
    // NOP
    // 0x16e61c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16e61cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16e620: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x16e624: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e628: 0xc421ab10  lwc1        $f1, -0x54F0($at)
    ctx->pc = 0x16e628u;
    { uint32_t bits = FAST_READ32(0x47AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e62c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e630: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e634: 0x0  nop
    ctx->pc = 0x16e634u;
    // NOP
    // 0x16e638: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E638u;
    {
        const bool branch_taken_0x16e638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e638) {
            ctx->pc = 0x16E64Cu;
            goto label_16e64c;
        }
    }
    ctx->pc = 0x16E640u;
    // 0x16e640: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e644: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e648: 0xe420ab10  swc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB10u, _value); } while (0); }
label_16e64c:
    // 0x16e64c: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x16e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e650: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e654: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e654u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e658: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e65c: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e65cu;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e660: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e664: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e668: 0x0  nop
    ctx->pc = 0x16e668u;
    // NOP
    // 0x16e66c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E66Cu;
    {
        const bool branch_taken_0x16e66c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e66c) {
            ctx->pc = 0x16E69Cu;
            goto label_16e69c;
        }
    }
    ctx->pc = 0x16E674u;
    // 0x16e674: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x16e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e678: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e67c: 0xc420ab18  lwc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e67cu;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e684: 0x0  nop
    ctx->pc = 0x16e684u;
    // NOP
    // 0x16e688: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E688u;
    {
        const bool branch_taken_0x16e688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e688) {
            ctx->pc = 0x16E69Cu;
            goto label_16e69c;
        }
    }
    ctx->pc = 0x16E690u;
    // 0x16e690: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x16e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e694: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e698: 0xe420ab18  swc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB18u, _value); } while (0); }
label_16e69c:
    // 0x16e69c: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x16e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e6a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6a4: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e6a4u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e6a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6ac: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e6acu;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e6b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e6b8: 0x0  nop
    ctx->pc = 0x16e6b8u;
    // NOP
    // 0x16e6bc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E6BCu;
    {
        const bool branch_taken_0x16e6bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e6bc) {
            ctx->pc = 0x16E6ECu;
            goto label_16e6ec;
        }
    }
    ctx->pc = 0x16E6C4u;
    // 0x16e6c4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x16e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e6c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6cc: 0xc420ab18  lwc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e6ccu;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e6d4: 0x0  nop
    ctx->pc = 0x16e6d4u;
    // NOP
    // 0x16e6d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E6D8u;
    {
        const bool branch_taken_0x16e6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e6d8) {
            ctx->pc = 0x16E6ECu;
            goto label_16e6ec;
        }
    }
    ctx->pc = 0x16E6E0u;
    // 0x16e6e0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6e8: 0xe420ab18  swc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB18u, _value); } while (0); }
label_16e6ec:
    // 0x16e6ec: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x16e6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e6f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6f4: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e6f4u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e6f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6fc: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e6fcu;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e700: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e704: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e708: 0x0  nop
    ctx->pc = 0x16e708u;
    // NOP
    // 0x16e70c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E70Cu;
    {
        const bool branch_taken_0x16e70c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e70c) {
            ctx->pc = 0x16E73Cu;
            goto label_16e73c;
        }
    }
    ctx->pc = 0x16E714u;
    // 0x16e714: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16e714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e718: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e71c: 0xc420ab18  lwc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e71cu;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e724: 0x0  nop
    ctx->pc = 0x16e724u;
    // NOP
    // 0x16e728: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E728u;
    {
        const bool branch_taken_0x16e728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e728) {
            ctx->pc = 0x16E73Cu;
            goto label_16e73c;
        }
    }
    ctx->pc = 0x16E730u;
    // 0x16e730: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x16e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e734: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e738: 0xe420ab18  swc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB18u, _value); } while (0); }
label_16e73c:
    // 0x16e73c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e740: 0x16230015  bne         $s1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E740u;
    {
        const bool branch_taken_0x16e740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e740) {
            ctx->pc = 0x16E798u;
            goto label_16e798;
        }
    }
    ctx->pc = 0x16E748u;
    // 0x16e748: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x16e748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e74c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x16e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e750: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16e754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16e758: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x16e758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e75c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x16e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x16e760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e764: 0x0  nop
    ctx->pc = 0x16e764u;
    // NOP
    // 0x16e768: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16e768u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16e76c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x16e770: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e774: 0xc421ab18  lwc1        $f1, -0x54E8($at)
    ctx->pc = 0x16e774u;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e778: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e77c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e77cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e780: 0x0  nop
    ctx->pc = 0x16e780u;
    // NOP
    // 0x16e784: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E784u;
    {
        const bool branch_taken_0x16e784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e784) {
            ctx->pc = 0x16E798u;
            goto label_16e798;
        }
    }
    ctx->pc = 0x16E78Cu;
    // 0x16e78c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e790: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e794: 0xe420ab18  swc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB18u, _value); } while (0); }
label_16e798:
    // 0x16e798: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x16e798u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e79c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e7a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e7a4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x16e7a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E7B0u;
}
