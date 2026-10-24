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

// Function: ectrl1b_check10
// Address: 0x2520f0 - 0x252a08
void ectrl1b_check10_0x2520f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1b_check10_0x2520f0");
#endif

    switch (ctx->pc) {
        case 0x252134u: goto label_252134;
        case 0x2521bcu: goto label_2521bc;
        case 0x252398u: goto label_252398;
        case 0x252420u: goto label_252420;
        case 0x2525e4u: goto label_2525e4;
        case 0x25266cu: goto label_25266c;
        case 0x252838u: goto label_252838;
        case 0x252894u: goto label_252894;
        case 0x2529b4u: goto label_2529b4;
        case 0x2529c0u: goto label_2529c0;
        default: break;
    }

    ctx->pc = 0x2520f0u;

    // 0x2520f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2520f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2520f4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2520f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2520f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2520f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2520fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2520fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252104: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x252104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x252108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x252108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25210c: 0x8c310af0  lw          $s1, 0xAF0($at)
    ctx->pc = 0x25210cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x252110: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x252110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x252114: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x252114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252118: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x252118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x25211c: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x25211Cu;
    {
        const bool branch_taken_0x25211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25211c) {
            ctx->pc = 0x252370u;
            goto label_252370;
        }
    }
    ctx->pc = 0x252124u;
    // 0x252124: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x252124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x252128: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x252128u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25212c: 0xc094d10  jal         func_253440
    ctx->pc = 0x25212Cu;
    SET_GPR_U32(ctx, 31, 0x252134u);
    ctx->pc = 0x253440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253440u, 0x25212Cu, 0x252134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252134u;
label_252134:
    // 0x252134: 0x1040022d  beqz        $v0, . + 4 + (0x22D << 2)
    ctx->pc = 0x252134u;
    {
        const bool branch_taken_0x252134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252134) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x25213Cu;
    // 0x25213c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x252140: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x252140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252144: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x252144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x252148: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x252148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x25214c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25214cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252150: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x252150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252154: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252154u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252158: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x252158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x25215c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25215cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252160: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x252160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252164: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252164u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252168: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x252168u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25216c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x25216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252170: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252170u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252174: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x252174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x252178: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25217c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x25217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252180: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252180u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252184: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x252184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x252188: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25218c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x25218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252190: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252190u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252194: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x252194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x252198: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252198u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25219c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x25219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2521a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2521a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2521a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2521a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2521a8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2521a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2521ac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2521acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2521b0: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x2521b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x2521b4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2521B4u;
    SET_GPR_U32(ctx, 31, 0x2521BCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2521B4u, 0x2521BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2521BCu;
label_2521bc:
    // 0x2521bc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2521bcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2521c0: 0x1640020a  bnez        $s2, . + 4 + (0x20A << 2)
    ctx->pc = 0x2521C0u;
    {
        const bool branch_taken_0x2521c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2521c0) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x2521C8u;
    // 0x2521c8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2521c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2521cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2521ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2521d0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2521d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2521d4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2521d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2521d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2521d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2521dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2521dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2521e0: 0x0  nop
    ctx->pc = 0x2521e0u;
    // NOP
    // 0x2521e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2521e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2521e8: 0x0  nop
    ctx->pc = 0x2521e8u;
    // NOP
    // 0x2521ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2521ECu;
    {
        const bool branch_taken_0x2521ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2521ec) {
            ctx->pc = 0x252210u;
            goto label_252210;
        }
    }
    ctx->pc = 0x2521F4u;
    // 0x2521f4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2521f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2521f8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2521f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2521fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2521fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252200: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252200u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252204: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x252204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x252208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252208u;
    {
        const bool branch_taken_0x252208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252208) {
            ctx->pc = 0x252220u;
            goto label_252220;
        }
    }
    ctx->pc = 0x252210u;
label_252210:
    // 0x252210: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252214: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252218: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25221c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x25221cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_252220:
    // 0x252220: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x252220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252224: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x252224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x252228: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x252228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25222c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x25222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252230: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252238: 0x0  nop
    ctx->pc = 0x252238u;
    // NOP
    // 0x25223c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25223cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252240: 0x0  nop
    ctx->pc = 0x252240u;
    // NOP
    // 0x252244: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252244u;
    {
        const bool branch_taken_0x252244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252244) {
            ctx->pc = 0x252268u;
            goto label_252268;
        }
    }
    ctx->pc = 0x25224Cu;
    // 0x25224c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x25224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252250: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252254: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252258: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252258u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25225c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x25225cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x252260: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252260u;
    {
        const bool branch_taken_0x252260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252260) {
            ctx->pc = 0x252278u;
            goto label_252278;
        }
    }
    ctx->pc = 0x252268u;
label_252268:
    // 0x252268: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x252268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25226c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x25226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252270: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252274: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x252274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_252278:
    // 0x252278: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x252278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25227c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x25227cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x252280: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x252280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252284: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x252284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252288: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25228c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x25228cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x252290: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252294: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x252294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252298: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25229c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x25229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2522a0: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2522a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522a4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2522a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2522a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2522ac: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2522acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522b0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2522b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2522b4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2522b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2522b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2522bc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2522bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2522c0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2522c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522c4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2522c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2522c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2522cc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2522ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2522d0: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2522d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522d4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2522d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2522d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2522dc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2522dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522e0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2522e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2522e4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2522e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2522e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2522ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2522ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2522f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2522f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2522f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2522f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2522f8: 0x0  nop
    ctx->pc = 0x2522f8u;
    // NOP
    // 0x2522fc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2522fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x252300: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252304: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252308: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25230c: 0x0  nop
    ctx->pc = 0x25230cu;
    // NOP
    // 0x252310: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x252310u;
    {
        const bool branch_taken_0x252310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252310) {
            ctx->pc = 0x252330u;
            goto label_252330;
        }
    }
    ctx->pc = 0x252318u;
    // 0x252318: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25231c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x25231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252324: 0x0  nop
    ctx->pc = 0x252324u;
    // NOP
    // 0x252328: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x252328u;
    {
        const bool branch_taken_0x252328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252328) {
            ctx->pc = 0x252338u;
            goto label_252338;
        }
    }
    ctx->pc = 0x252330u;
label_252330:
    // 0x252330: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x252330u;
    {
        const bool branch_taken_0x252330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252330) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x252338u;
label_252338:
    // 0x252338: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x252338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25233c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x25233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252344: 0x0  nop
    ctx->pc = 0x252344u;
    // NOP
    // 0x252348: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x252348u;
    {
        const bool branch_taken_0x252348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252348) {
            ctx->pc = 0x252368u;
            goto label_252368;
        }
    }
    ctx->pc = 0x252350u;
    // 0x252350: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x252350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252354: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x252354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25235c: 0x0  nop
    ctx->pc = 0x25235cu;
    // NOP
    // 0x252360: 0x4501012f  bc1t        . + 4 + (0x12F << 2)
    ctx->pc = 0x252360u;
    {
        const bool branch_taken_0x252360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252360) {
            ctx->pc = 0x252820u;
            goto label_252820;
        }
    }
    ctx->pc = 0x252368u;
label_252368:
    // 0x252368: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x252368u;
    {
        const bool branch_taken_0x252368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252368) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x252370u;
label_252370:
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
            goto label_2525d4;
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
            goto label_2529ec;
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
            goto label_2529ec;
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
            goto label_252474;
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
            goto label_252484;
        }
    }
    ctx->pc = 0x252474u;
label_252474:
    // 0x252474: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x252474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252478: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25247c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25247cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252480: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x252480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_252484:
    // 0x252484: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x252484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252488: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x252488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x25248c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x25248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252490: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x252490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252494: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252494u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25249c: 0x0  nop
    ctx->pc = 0x25249cu;
    // NOP
    // 0x2524a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2524a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2524a4: 0x0  nop
    ctx->pc = 0x2524a4u;
    // NOP
    // 0x2524a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2524A8u;
    {
        const bool branch_taken_0x2524a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2524a8) {
            ctx->pc = 0x2524CCu;
            goto label_2524cc;
        }
    }
    ctx->pc = 0x2524B0u;
    // 0x2524b0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2524b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2524b4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2524b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2524b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2524bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2524bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2524c0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2524c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2524c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2524C4u;
    {
        const bool branch_taken_0x2524c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2524c4) {
            ctx->pc = 0x2524DCu;
            goto label_2524dc;
        }
    }
    ctx->pc = 0x2524CCu;
label_2524cc:
    // 0x2524cc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2524ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2524d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2524d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2524d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2524d8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2524d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2524dc:
    // 0x2524dc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2524dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524e0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2524e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2524e4: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2524e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2524e8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2524e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2524ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2524f0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2524f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2524f4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2524f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2524f8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2524f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2524fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252500: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x252500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x252504: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x252504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252508: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x252508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25250c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25250cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252510: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x252510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252514: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252514u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252518: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x252518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25251c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25251cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252520: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x252520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x252524: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252528: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25252c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25252cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252530: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x252530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x252534: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x252534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252538: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x252538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25253c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25253cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252540: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x252540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252544: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252544u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252548: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25254c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25254cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252550: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x252550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x252554: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x252554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x252558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x252558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25255c: 0x0  nop
    ctx->pc = 0x25255cu;
    // NOP
    // 0x252560: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x252560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x252564: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252568: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25256c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25256cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252570: 0x0  nop
    ctx->pc = 0x252570u;
    // NOP
    // 0x252574: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x252574u;
    {
        const bool branch_taken_0x252574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252574) {
            ctx->pc = 0x252594u;
            goto label_252594;
        }
    }
    ctx->pc = 0x25257Cu;
    // 0x25257c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x25257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252580: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x252580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252584: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252588: 0x0  nop
    ctx->pc = 0x252588u;
    // NOP
    // 0x25258c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25258Cu;
    {
        const bool branch_taken_0x25258c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25258c) {
            ctx->pc = 0x25259Cu;
            goto label_25259c;
        }
    }
    ctx->pc = 0x252594u;
label_252594:
    // 0x252594: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x252594u;
    {
        const bool branch_taken_0x252594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252594) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x25259Cu;
label_25259c:
    // 0x25259c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x25259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2525a0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2525a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2525a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2525a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2525a8: 0x0  nop
    ctx->pc = 0x2525a8u;
    // NOP
    // 0x2525ac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2525ACu;
    {
        const bool branch_taken_0x2525ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2525ac) {
            ctx->pc = 0x2525CCu;
            goto label_2525cc;
        }
    }
    ctx->pc = 0x2525B4u;
    // 0x2525b4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2525b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2525b8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2525b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2525bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2525bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2525c0: 0x0  nop
    ctx->pc = 0x2525c0u;
    // NOP
    // 0x2525c4: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x2525C4u;
    {
        const bool branch_taken_0x2525c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2525c4) {
            ctx->pc = 0x252820u;
            goto label_252820;
        }
    }
    ctx->pc = 0x2525CCu;
label_2525cc:
    // 0x2525cc: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x2525CCu;
    {
        const bool branch_taken_0x2525cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2525cc) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x2525D4u;
label_2525d4:
    // 0x2525d4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2525d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2525d8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2525d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2525dc: 0xc094d64  jal         func_253590
    ctx->pc = 0x2525DCu;
    SET_GPR_U32(ctx, 31, 0x2525E4u);
    ctx->pc = 0x253590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253590u, 0x2525DCu, 0x2525E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2525E4u;
label_2525e4:
    // 0x2525e4: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x2525E4u;
    {
        const bool branch_taken_0x2525e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2525e4) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x2525ECu;
    // 0x2525ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2525ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2525f0: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x2525f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2525f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2525f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2525f8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2525f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2525fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2525fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252600: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x252600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252604: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252604u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252608: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x252608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x25260c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25260cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252610: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x252610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252614: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252614u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252618: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x252618u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25261c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x25261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252620: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252620u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252624: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x252624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x252628: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252628u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25262c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x25262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252630: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252630u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252634: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x252634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x252638: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252638u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25263c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x25263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252640: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252644: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x252644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x252648: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25264c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x25264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x252650: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252650u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252654: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x252654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252658: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x252658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25265c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x25265cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252660: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x252660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x252664: 0xc059e1c  jal         func_167870
    ctx->pc = 0x252664u;
    SET_GPR_U32(ctx, 31, 0x25266Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x252664u, 0x25266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25266Cu;
label_25266c:
    // 0x25266c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25266cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x252670: 0x164000de  bnez        $s2, . + 4 + (0xDE << 2)
    ctx->pc = 0x252670u;
    {
        const bool branch_taken_0x252670 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x252670) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x252678u;
    // 0x252678: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25267c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x25267cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x252680: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252684: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252688: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252688u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25268c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25268cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252690: 0x0  nop
    ctx->pc = 0x252690u;
    // NOP
    // 0x252694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252698: 0x0  nop
    ctx->pc = 0x252698u;
    // NOP
    // 0x25269c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25269Cu;
    {
        const bool branch_taken_0x25269c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25269c) {
            ctx->pc = 0x2526C0u;
            goto label_2526c0;
        }
    }
    ctx->pc = 0x2526A4u;
    // 0x2526a4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2526a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2526a8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2526a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2526ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2526acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2526b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2526b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2526b4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2526b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2526b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2526B8u;
    {
        const bool branch_taken_0x2526b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2526b8) {
            ctx->pc = 0x2526D0u;
            goto label_2526d0;
        }
    }
    ctx->pc = 0x2526C0u;
label_2526c0:
    // 0x2526c0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2526c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2526c4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2526c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2526c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2526c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2526cc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2526ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2526d0:
    // 0x2526d0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2526d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2526d4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2526d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2526d8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2526d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2526dc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2526dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2526e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2526e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2526e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2526e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2526e8: 0x0  nop
    ctx->pc = 0x2526e8u;
    // NOP
    // 0x2526ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2526ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2526f0: 0x0  nop
    ctx->pc = 0x2526f0u;
    // NOP
    // 0x2526f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2526F4u;
    {
        const bool branch_taken_0x2526f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2526f4) {
            ctx->pc = 0x252718u;
            goto label_252718;
        }
    }
    ctx->pc = 0x2526FCu;
    // 0x2526fc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2526fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252700: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x252700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252704: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252708: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252708u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25270c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x25270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x252710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252710u;
    {
        const bool branch_taken_0x252710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252710) {
            ctx->pc = 0x252728u;
            goto label_252728;
        }
    }
    ctx->pc = 0x252718u;
label_252718:
    // 0x252718: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x252718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25271c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x25271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252720: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252724: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x252724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_252728:
    // 0x252728: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x252728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25272c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x25272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x252730: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x252730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252734: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x252734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252738: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25273c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x25273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x252740: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252744: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252748: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25274c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x25274cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x252750: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x252750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252754: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x252754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252758: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25275c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x25275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252760: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252760u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252764: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x252764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25276c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25276cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x252770: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252774: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252778: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252778u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25277c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x25277cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x252780: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x252780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252784: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x252784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25278c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x25278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252790: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252790u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252794: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25279c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2527a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2527a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2527a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2527a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2527a8: 0x0  nop
    ctx->pc = 0x2527a8u;
    // NOP
    // 0x2527ac: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2527acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2527b0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2527b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2527b4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2527b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2527b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2527b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2527bc: 0x0  nop
    ctx->pc = 0x2527bcu;
    // NOP
    // 0x2527c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2527C0u;
    {
        const bool branch_taken_0x2527c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2527c0) {
            ctx->pc = 0x2527E0u;
            goto label_2527e0;
        }
    }
    ctx->pc = 0x2527C8u;
    // 0x2527c8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2527c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2527cc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2527ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2527d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2527d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2527d4: 0x0  nop
    ctx->pc = 0x2527d4u;
    // NOP
    // 0x2527d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2527D8u;
    {
        const bool branch_taken_0x2527d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2527d8) {
            ctx->pc = 0x2527E8u;
            goto label_2527e8;
        }
    }
    ctx->pc = 0x2527E0u;
label_2527e0:
    // 0x2527e0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2527E0u;
    {
        const bool branch_taken_0x2527e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2527e0) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x2527E8u;
label_2527e8:
    // 0x2527e8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2527e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2527ec: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2527ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2527f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2527f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2527f4: 0x0  nop
    ctx->pc = 0x2527f4u;
    // NOP
    // 0x2527f8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2527F8u;
    {
        const bool branch_taken_0x2527f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2527f8) {
            ctx->pc = 0x252818u;
            goto label_252818;
        }
    }
    ctx->pc = 0x252800u;
    // 0x252800: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x252800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252804: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x252804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252808: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25280c: 0x0  nop
    ctx->pc = 0x25280cu;
    // NOP
    // 0x252810: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x252810u;
    {
        const bool branch_taken_0x252810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252810) {
            ctx->pc = 0x252820u;
            goto label_252820;
        }
    }
    ctx->pc = 0x252818u;
label_252818:
    // 0x252818: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x252818u;
    {
        const bool branch_taken_0x252818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252818) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x252820u;
label_252820:
    // 0x252820: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x252820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252824: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x252824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x252828: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x252828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x25282c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25282cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252830: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x252830u;
    SET_GPR_U32(ctx, 31, 0x252838u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x252838u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252838u) { return; }
    ctx->pc = 0x252838u;
label_252838:
    // 0x252838: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x252838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25283c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x25283cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x252840: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x252840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x252844: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x252844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252848: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x252848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25284c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25284cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252850: 0x0  nop
    ctx->pc = 0x252850u;
    // NOP
    // 0x252854: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252854u;
    {
        const bool branch_taken_0x252854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252854) {
            ctx->pc = 0x252878u;
            goto label_252878;
        }
    }
    ctx->pc = 0x25285Cu;
    // 0x25285c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x252860: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x252860u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252864: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x252864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252868: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25286c: 0x0  nop
    ctx->pc = 0x25286cu;
    // NOP
    // 0x252870: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x252870u;
    {
        const bool branch_taken_0x252870 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252870) {
            ctx->pc = 0x252880u;
            goto label_252880;
        }
    }
    ctx->pc = 0x252878u;
label_252878:
    // 0x252878: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x252878u;
    {
        const bool branch_taken_0x252878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252878) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x252880u;
label_252880:
    // 0x252880: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x252880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252884: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x252884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252888: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x252888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25288c: 0xc040c60  jal         func_103180
    ctx->pc = 0x25288Cu;
    SET_GPR_U32(ctx, 31, 0x252894u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x252894u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252894u) { return; }
    ctx->pc = 0x252894u;
label_252894:
    // 0x252894: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x252894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252898: 0x3c0344c7  lui         $v1, 0x44C7
    ctx->pc = 0x252898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17607 << 16));
    // 0x25289c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25289cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2528a0: 0x0  nop
    ctx->pc = 0x2528a0u;
    // NOP
    // 0x2528a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2528a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2528a8: 0x0  nop
    ctx->pc = 0x2528a8u;
    // NOP
    // 0x2528ac: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2528ACu;
    {
        const bool branch_taken_0x2528ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2528ac) {
            ctx->pc = 0x2528D8u;
            goto label_2528d8;
        }
    }
    ctx->pc = 0x2528B4u;
    // 0x2528b4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2528b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2528b8: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x2528b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x2528bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2528bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2528c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2528c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2528c4: 0x0  nop
    ctx->pc = 0x2528c4u;
    // NOP
    // 0x2528c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2528c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2528cc: 0x0  nop
    ctx->pc = 0x2528ccu;
    // NOP
    // 0x2528d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2528D0u;
    {
        const bool branch_taken_0x2528d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2528d0) {
            ctx->pc = 0x2528E0u;
            goto label_2528e0;
        }
    }
    ctx->pc = 0x2528D8u;
label_2528d8:
    // 0x2528d8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2528D8u;
    {
        const bool branch_taken_0x2528d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2528d8) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x2528E0u;
label_2528e0:
    // 0x2528e0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2528e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2528e4: 0x3c0344d9  lui         $v1, 0x44D9
    ctx->pc = 0x2528e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17625 << 16));
    // 0x2528e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2528e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2528ec: 0x0  nop
    ctx->pc = 0x2528ecu;
    // NOP
    // 0x2528f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2528f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2528f4: 0x0  nop
    ctx->pc = 0x2528f4u;
    // NOP
    // 0x2528f8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2528F8u;
    {
        const bool branch_taken_0x2528f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2528f8) {
            ctx->pc = 0x252924u;
            goto label_252924;
        }
    }
    ctx->pc = 0x252900u;
    // 0x252900: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252904: 0x3c034513  lui         $v1, 0x4513
    ctx->pc = 0x252904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17683 << 16));
    // 0x252908: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x252908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x25290c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25290cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252910: 0x0  nop
    ctx->pc = 0x252910u;
    // NOP
    // 0x252914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252918: 0x0  nop
    ctx->pc = 0x252918u;
    // NOP
    // 0x25291c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25291Cu;
    {
        const bool branch_taken_0x25291c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25291c) {
            ctx->pc = 0x25292Cu;
            goto label_25292c;
        }
    }
    ctx->pc = 0x252924u;
label_252924:
    // 0x252924: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x252924u;
    {
        const bool branch_taken_0x252924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252924) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x25292Cu;
label_25292c:
    // 0x25292c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x25292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252930: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x252930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x252934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252938: 0x0  nop
    ctx->pc = 0x252938u;
    // NOP
    // 0x25293c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25293cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252940: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x252940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x252944: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252948: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x252948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x25294c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25294cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252950: 0x0  nop
    ctx->pc = 0x252950u;
    // NOP
    // 0x252954: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252958: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x252958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25295c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x25295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x252960: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x252960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x252964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252968: 0x0  nop
    ctx->pc = 0x252968u;
    // NOP
    // 0x25296c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x252970: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x252970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x252974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252978: 0x0  nop
    ctx->pc = 0x252978u;
    // NOP
    // 0x25297c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x25297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x252980: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x252980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x252984: 0x90420108  lbu         $v0, 0x108($v0)
    ctx->pc = 0x252984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x252988: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x252988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25298c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x252990: 0x34426300  ori         $v0, $v0, 0x6300
    ctx->pc = 0x252990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25344);
    // 0x252994: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x252994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x252998: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x252998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x25299c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25299cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2529a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2529a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2529a4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2529a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2529a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2529a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2529ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2529ACu;
    SET_GPR_U32(ctx, 31, 0x2529B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2529ACu, 0x2529B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529B4u;
label_2529b4:
    // 0x2529b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2529b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2529b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2529B8u;
    SET_GPR_U32(ctx, 31, 0x2529C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2529B8u, 0x2529C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529C0u;
label_2529c0:
    // 0x2529c0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2529c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2529c4: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x2529c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    // 0x2529c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2529c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2529cc: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2529ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2529d0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2529d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2529d4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2529d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2529d8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2529D8u;
    {
        const bool branch_taken_0x2529d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2529d8) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x2529E0u;
    // 0x2529e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2529e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2529e4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2529e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2529e8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2529e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_2529ec:
    // 0x2529ec: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2529ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2529f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2529f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2529f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2529f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2529f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2529f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2529fc: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2529fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x252a00: 0x3e00008  jr          $ra
    ctx->pc = 0x252A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252A08u;
}
