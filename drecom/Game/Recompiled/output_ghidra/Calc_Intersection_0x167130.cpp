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

// Function: Calc_Intersection
// Address: 0x167130 - 0x167208
void Calc_Intersection_0x167130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Calc_Intersection_0x167130");
#endif

    switch (ctx->pc) {
        case 0x167160u: goto label_167160;
        case 0x167174u: goto label_167174;
        case 0x167184u: goto label_167184;
        case 0x1671bcu: goto label_1671bc;
        case 0x1671e0u: goto label_1671e0;
        case 0x1671f4u: goto label_1671f4;
        default: break;
    }

    ctx->pc = 0x167130u;

    // 0x167130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x167130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x167134: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x167134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x167138: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x167138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x16713c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x16713cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x167140: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x167140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x167144: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x167144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x167148: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x167148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
    // 0x16714c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167150: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x167150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167154: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x167154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x167158: 0xc040c80  jal         func_103200
    ctx->pc = 0x167158u;
    SET_GPR_U32(ctx, 31, 0x167160u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x167160u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167160u) { return; }
    ctx->pc = 0x167160u;
label_167160:
    // 0x167160: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x167160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167164: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x167164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x167168: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16716c: 0xc040c80  jal         func_103200
    ctx->pc = 0x16716Cu;
    SET_GPR_U32(ctx, 31, 0x167174u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x167174u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167174u) { return; }
    ctx->pc = 0x167174u;
label_167174:
    // 0x167174: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x167174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167178: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x167178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16717c: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16717Cu;
    SET_GPR_U32(ctx, 31, 0x167184u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x167184u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167184u) { return; }
    ctx->pc = 0x167184u;
label_167184:
    // 0x167184: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x167184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x167188: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16718c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x16718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167190: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x167190u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167194: 0x0  nop
    ctx->pc = 0x167194u;
    // NOP
    // 0x167198: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x167198u;
    {
        const bool branch_taken_0x167198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167198) {
            ctx->pc = 0x1671ACu;
            goto label_1671ac;
        }
    }
    ctx->pc = 0x1671A0u;
    // 0x1671a0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1671a0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1671a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1671A4u;
    {
        const bool branch_taken_0x1671a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1671a4) {
            ctx->pc = 0x1671F8u;
            goto label_1671f8;
        }
    }
    ctx->pc = 0x1671ACu;
label_1671ac:
    // 0x1671ac: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1671acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1671b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1671b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1671b4: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1671B4u;
    SET_GPR_U32(ctx, 31, 0x1671BCu);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1671BCu;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1671BCu) { return; }
    ctx->pc = 0x1671BCu;
label_1671bc:
    // 0x1671bc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1671bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1671c0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1671c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1671c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1671c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1671c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1671c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1671cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1671ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1671d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1671d4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1671d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1671d8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1671D8u;
    SET_GPR_U32(ctx, 31, 0x1671E0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1671E0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1671E0u) { return; }
    ctx->pc = 0x1671E0u;
label_1671e0:
    // 0x1671e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1671e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1671e4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1671e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1671e8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1671e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1671ec: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1671ECu;
    SET_GPR_U32(ctx, 31, 0x1671F4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1671F4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1671F4u) { return; }
    ctx->pc = 0x1671F4u;
label_1671f4:
    // 0x1671f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1671f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1671f8:
    // 0x1671f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1671f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1671fc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1671fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167200: 0x3e00008  jr          $ra
    ctx->pc = 0x167200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167208u;
}
