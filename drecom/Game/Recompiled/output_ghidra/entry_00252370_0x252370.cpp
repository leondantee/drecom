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

// Function: entry_00252370
// Address: 0x252370 - 0x252474
void entry_00252370_0x252370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252370_0x252370");
#endif

    switch (ctx->pc) {
        case 0x252398u: goto label_252398;
        case 0x252420u: goto label_252420;
        default: break;
    }

    ctx->pc = 0x252370u;

    // 0x252370: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x252370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x252374: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x252374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252378: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x252378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x25237c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252380: 0x14620094  bne         $v1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x252380u;
    {
        const bool branch_taken_0x252380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252380) {
            ctx->pc = 0x2525D4u;
            return;
        }
    }
    ctx->pc = 0x252388u;
    // 0x252388: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x252388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25238c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25238cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x252390: 0xc094db8  jal         func_2536E0
    ctx->pc = 0x252390u;
    SET_GPR_U32(ctx, 31, 0x252398u);
    ctx->pc = 0x2536E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536E0u, 0x252390u, 0x252398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252398u;
label_252398:
    // 0x252398: 0x10400194  beqz        $v0, . + 4 + (0x194 << 2)
    ctx->pc = 0x252398u;
    {
        const bool branch_taken_0x252398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252398) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x2523A0u;
    // 0x2523a0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2523a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2523a4: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x2523a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2523a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2523a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2523ac: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2523acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2523b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2523b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2523b4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2523b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2523b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2523b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2523bc: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x2523bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x2523c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2523c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2523c4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2523c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2523c8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2523c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2523cc: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2523ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2523d0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2523d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2523d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2523d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2523d8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2523d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2523dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2523dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2523e0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2523e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2523e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2523e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2523e8: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2523e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2523ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2523ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2523f0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2523f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2523f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2523f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2523f8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2523f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2523fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2523fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252400: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x252400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x252404: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252408: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x252408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25240c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252410: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x252410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252414: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x252414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x252418: 0xc059e1c  jal         func_167870
    ctx->pc = 0x252418u;
    SET_GPR_U32(ctx, 31, 0x252420u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x252418u, 0x252420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252420u;
label_252420:
    // 0x252420: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x252420u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x252424: 0x16400171  bnez        $s2, . + 4 + (0x171 << 2)
    ctx->pc = 0x252424u;
    {
        const bool branch_taken_0x252424 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x252424) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x25242Cu;
    // 0x25242c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x25242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252430: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x252430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x252434: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x252434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252438: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25243c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25243cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252444: 0x0  nop
    ctx->pc = 0x252444u;
    // NOP
    // 0x252448: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25244c: 0x0  nop
    ctx->pc = 0x25244cu;
    // NOP
    // 0x252450: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252450u;
    {
        const bool branch_taken_0x252450 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252450) {
            ctx->pc = 0x252474u;
            return;
        }
    }
    ctx->pc = 0x252458u;
    // 0x252458: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x252458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25245c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x25245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252460: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252460u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252464: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252464u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252468: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x252468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x25246c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25246Cu;
    {
        const bool branch_taken_0x25246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25246c) {
            ctx->pc = 0x252484u;
            return;
        }
    }
    ctx->pc = 0x252474u;
}
