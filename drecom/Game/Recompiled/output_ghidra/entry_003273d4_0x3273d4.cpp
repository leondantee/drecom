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

// Function: entry_003273d4
// Address: 0x3273d4 - 0x327488
void entry_003273d4_0x3273d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003273d4_0x3273d4");
#endif

    switch (ctx->pc) {
        case 0x3273f4u: goto label_3273f4;
        case 0x327408u: goto label_327408;
        default: break;
    }

    ctx->pc = 0x3273d4u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x327488u;
}
