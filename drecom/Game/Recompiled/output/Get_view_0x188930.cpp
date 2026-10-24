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

// Function: Get_view
// Address: 0x188930 - 0x188b00
void Get_view_0x188930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_view_0x188930");
#endif

    switch (ctx->pc) {
        case 0x188a3cu: goto label_188a3c;
        default: break;
    }

    ctx->pc = 0x188930u;

    // 0x188930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x188930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x188934: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x188934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x188938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18893c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18893cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188940: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x188940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x188944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188948: 0x8c310af0  lw          $s1, 0xAF0($at)
    ctx->pc = 0x188948u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x18894c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18894cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188950: 0x8c300af8  lw          $s0, 0xAF8($at)
    ctx->pc = 0x188950u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF8u));
    // 0x188954: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x188954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x188958: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x188958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18895c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x18895cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188964: 0x0  nop
    ctx->pc = 0x188964u;
    // NOP
    // 0x188968: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x188968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18896c: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x18896cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x188970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188974: 0x0  nop
    ctx->pc = 0x188974u;
    // NOP
    // 0x188978: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x188978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18897c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x18897cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x188980: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x188980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188988: 0x0  nop
    ctx->pc = 0x188988u;
    // NOP
    // 0x18898c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18898cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188990: 0x0  nop
    ctx->pc = 0x188990u;
    // NOP
    // 0x188994: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x188994u;
    {
        const bool branch_taken_0x188994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188994) {
            ctx->pc = 0x1889B0u;
            goto label_1889b0;
        }
    }
    ctx->pc = 0x18899Cu;
    // 0x18899c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18899cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1889a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1889a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1889a4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1889a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1889a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1889a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1889ac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1889acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1889b0:
    // 0x1889b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1889b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1889b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1889b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1889b8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1889b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x1889bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1889bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1889c0: 0x0  nop
    ctx->pc = 0x1889c0u;
    // NOP
    // 0x1889c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1889c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1889c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1889c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1889cc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1889ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1889d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1889d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1889d4: 0x0  nop
    ctx->pc = 0x1889d4u;
    // NOP
    // 0x1889d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1889d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1889dc: 0x0  nop
    ctx->pc = 0x1889dcu;
    // NOP
    // 0x1889e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1889E0u;
    {
        const bool branch_taken_0x1889e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1889e0) {
            ctx->pc = 0x1889FCu;
            goto label_1889fc;
        }
    }
    ctx->pc = 0x1889E8u;
    // 0x1889e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1889e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1889ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1889ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1889f0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1889f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1889f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1889f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1889f8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1889f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1889fc:
    // 0x1889fc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1889fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188a00: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x188a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188a08: 0x0  nop
    ctx->pc = 0x188a08u;
    // NOP
    // 0x188a0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188A0Cu;
    {
        const bool branch_taken_0x188a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188a0c) {
            ctx->pc = 0x188A1Cu;
            goto label_188a1c;
        }
    }
    ctx->pc = 0x188A14u;
    // 0x188a14: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x188a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a18: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x188a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_188a1c:
    // 0x188a1c: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x188a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x188a20: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x188a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x188a24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188a28: 0xc62001b4  lwc1        $f0, 0x1B4($s1)
    ctx->pc = 0x188a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a2c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x188a2cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x188a30: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x188a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188a34: 0xc0455e6  jal         func_115798
    ctx->pc = 0x188A34u;
    SET_GPR_U32(ctx, 31, 0x188A3Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x188A34u, 0x188A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A3Cu;
label_188a3c:
    // 0x188a3c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x188a40: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x188a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188a48: 0x0  nop
    ctx->pc = 0x188a48u;
    // NOP
    // 0x188a4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188a50: 0x0  nop
    ctx->pc = 0x188a50u;
    // NOP
    // 0x188a54: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x188A54u;
    {
        const bool branch_taken_0x188a54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188a54) {
            ctx->pc = 0x188A70u;
            goto label_188a70;
        }
    }
    ctx->pc = 0x188A5Cu;
    // 0x188a5c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x188a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x188a60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188a64: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x188a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x188a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188a6c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_188a70:
    // 0x188a70: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x188a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x188a74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188a78: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x188a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
    // 0x188a7c: 0x34422ee0  ori         $v0, $v0, 0x2EE0
    ctx->pc = 0x188a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12000);
    // 0x188a80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188a84: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x188a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x188a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x188a8c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188a90: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x188a94: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x188a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188a98: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x188a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x188a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188aa0: 0x0  nop
    ctx->pc = 0x188aa0u;
    // NOP
    // 0x188aa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188aa8: 0x0  nop
    ctx->pc = 0x188aa8u;
    // NOP
    // 0x188aac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x188AACu;
    {
        const bool branch_taken_0x188aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188aac) {
            ctx->pc = 0x188AC4u;
            goto label_188ac4;
        }
    }
    ctx->pc = 0x188AB4u;
    // 0x188ab4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x188ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x188ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188abc: 0x0  nop
    ctx->pc = 0x188abcu;
    // NOP
    // 0x188ac0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_188ac4:
    // 0x188ac4: 0xc6010180  lwc1        $f1, 0x180($s0)
    ctx->pc = 0x188ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188ac8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x188ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188acc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x188accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188ad0: 0x0  nop
    ctx->pc = 0x188ad0u;
    // NOP
    // 0x188ad4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x188AD4u;
    {
        const bool branch_taken_0x188ad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188ad4) {
            ctx->pc = 0x188AE4u;
            goto label_188ae4;
        }
    }
    ctx->pc = 0x188ADCu;
    // 0x188adc: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x188adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ae0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_188ae4:
    // 0x188ae4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x188ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ae8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x188ae8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188af4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x188af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x188af8: 0x3e00008  jr          $ra
    ctx->pc = 0x188AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188B00u;
}
