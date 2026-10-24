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

// Function: Par_calc
// Address: 0x327380 - 0x3274d4
void Par_calc_0x327380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Par_calc_0x327380");
#endif

    switch (ctx->pc) {
        case 0x3273d4u: goto label_3273d4;
        case 0x3273f4u: goto label_3273f4;
        case 0x327408u: goto label_327408;
        default: break;
    }

    ctx->pc = 0x327380u;

    // 0x327380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x327380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x327384: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x327384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x327388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x327388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32738c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x327390: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x327390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x327394: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x327394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x327398: 0x8c70029c  lw          $s0, 0x29C($v1)
    ctx->pc = 0x327398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 668)));
    // 0x32739c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x32739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3273a0: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x3273a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x3273a4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3273a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3273a8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3273a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3273ac: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3273acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3273b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3273b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3273b4: 0xc460022c  lwc1        $f0, 0x22C($v1)
    ctx->pc = 0x3273b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3273b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3273b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3273bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3273bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3273c0: 0xc4600228  lwc1        $f0, 0x228($v1)
    ctx->pc = 0x3273c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3273c4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3273c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3273c8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3273c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3273cc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3273CCu;
    {
        const bool branch_taken_0x3273cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3273cc) {
            ctx->pc = 0x3274A8u;
            goto label_3274a8;
        }
    }
    ctx->pc = 0x3273D4u;
label_3273d4:
    // 0x3273d4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3273d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3273d8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3273d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3273dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3273dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3273e0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3273e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3273e4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x3273e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3273e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3273e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3273ec: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3273ECu;
    SET_GPR_U32(ctx, 31, 0x3273F4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3273ECu, 0x3273F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273F4u;
label_3273f4:
    // 0x3273f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3273f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3273f8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x3273f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3273fc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x3273fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x327400: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327400u;
    SET_GPR_U32(ctx, 31, 0x327408u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327400u, 0x327408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327408u;
label_327408:
    // 0x327408: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x327408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32740c: 0x90630241  lbu         $v1, 0x241($v1)
    ctx->pc = 0x32740cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 577)));
    // 0x327410: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327414: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x327414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x327418: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x327418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32741c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x32741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327420: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x327420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x327424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327428: 0x0  nop
    ctx->pc = 0x327428u;
    // NOP
    // 0x32742c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x32742Cu;
    {
        const bool branch_taken_0x32742c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32742c) {
            ctx->pc = 0x3274A0u;
            goto label_3274a0;
        }
    }
    ctx->pc = 0x327434u;
    // 0x327434: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x327434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327438: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x327438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32743c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x32743cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327440: 0x0  nop
    ctx->pc = 0x327440u;
    // NOP
    // 0x327444: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x327444u;
    {
        const bool branch_taken_0x327444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x327444) {
            ctx->pc = 0x3274A0u;
            goto label_3274a0;
        }
    }
    ctx->pc = 0x32744Cu;
    // 0x32744c: 0x92030041  lbu         $v1, 0x41($s0)
    ctx->pc = 0x32744cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x327450: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x327450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x327454: 0xa2030041  sb          $v1, 0x41($s0)
    ctx->pc = 0x327454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x327458: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x327458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32745c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32745cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327460: 0x0  nop
    ctx->pc = 0x327460u;
    // NOP
    // 0x327464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x327464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327468: 0x0  nop
    ctx->pc = 0x327468u;
    // NOP
    // 0x32746c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x32746Cu;
    {
        const bool branch_taken_0x32746c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32746c) {
            ctx->pc = 0x327488u;
            goto label_327488;
        }
    }
    ctx->pc = 0x327474u;
    // 0x327474: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x327474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327478: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x327478u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x32747c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x32747cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x327480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x327480u;
    {
        const bool branch_taken_0x327480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327480) {
            ctx->pc = 0x327490u;
            goto label_327490;
        }
    }
    ctx->pc = 0x327488u;
label_327488:
    // 0x327488: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x327488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32748c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x32748cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_327490:
    // 0x327490: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x327490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327494: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x327494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x327498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32749c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32749cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_3274a0:
    // 0x3274a0: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x3274a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3274a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3274a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3274a8:
    // 0x3274a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3274a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3274ac: 0x8c630298  lw          $v1, 0x298($v1)
    ctx->pc = 0x3274acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x3274b0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x3274b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3274b4: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x3274B4u;
    {
        const bool branch_taken_0x3274b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3274b4) {
            ctx->pc = 0x3273D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3273d4;
        }
    }
    ctx->pc = 0x3274BCu;
    // 0x3274bc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3274bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3274c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3274c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3274c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3274c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3274c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3274c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3274cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3274CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3274CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3274D4u;
}
