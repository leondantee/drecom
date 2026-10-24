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

// Function: maketable2
// Address: 0x290f80 - 0x291140
void maketable2_0x290f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("maketable2_0x290f80");
#endif

    switch (ctx->pc) {
        case 0x290fc0u: goto label_290fc0;
        case 0x29103cu: goto label_29103c;
        case 0x291048u: goto label_291048;
        case 0x291068u: goto label_291068;
        case 0x291078u: goto label_291078;
        case 0x291084u: goto label_291084;
        case 0x2910b4u: goto label_2910b4;
        case 0x291110u: goto label_291110;
        case 0x291128u: goto label_291128;
        default: break;
    }

    ctx->pc = 0x290f80u;

    // 0x290f80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x290f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x290f84: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x290f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x290f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290f90: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x290f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x290f94: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x290f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x290f98: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x290f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x290f9c: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x290f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x290fa0: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x290fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x290fa4: 0xafa90068  sw          $t1, 0x68($sp)
    ctx->pc = 0x290fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 9));
    // 0x290fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x290fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290fac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x290facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290fb0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x290fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x290fb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x290fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290fb8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x290FB8u;
    {
        const bool branch_taken_0x290fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290fb8) {
            ctx->pc = 0x291098u;
            goto label_291098;
        }
    }
    ctx->pc = 0x290FC0u;
label_290fc0:
    // 0x290fc0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290fc4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x290fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290fc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290fcc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290fd0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x290fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x290fd4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290fd8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x290fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290fdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290fe0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fe4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x290fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290fe8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x290fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x290fec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290ff0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290ff8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290ffc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x290ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x291000: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x291000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291004: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x291004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x291008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29100c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291010: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x291010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x291014: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x291014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x291018: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x291018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29101c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x29101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291020: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x291020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x291024: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x291024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291028: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x291028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29102c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29102cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x291030: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x291030u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x291034: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x291034u;
    SET_GPR_U32(ctx, 31, 0x29103Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x291034u, 0x29103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29103Cu;
label_29103c:
    // 0x29103c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29103cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291040: 0xc045522  jal         func_115488
    ctx->pc = 0x291040u;
    SET_GPR_U32(ctx, 31, 0x291048u);
    ctx->pc = 0x115488u;
    {
        ctx->pc = 0x291048u;
        ps2_stubs::sqrt(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x291048u) { return; }
    ctx->pc = 0x291048u;
label_291048:
    // 0x291048: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291048u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29104c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x29104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x291050: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x291050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291054: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x291054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x291058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29105c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x29105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291060: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x291060u;
    SET_GPR_U32(ctx, 31, 0x291068u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x291060u, 0x291068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291068u;
label_291068:
    // 0x291068: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29106c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x29106cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291070: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x291070u;
    SET_GPR_U32(ctx, 31, 0x291078u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x291070u, 0x291078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291078u;
label_291078:
    // 0x291078: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291078u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29107c: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x29107Cu;
    SET_GPR_U32(ctx, 31, 0x291084u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x29107Cu, 0x291084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291084u;
label_291084:
    // 0x291084: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x291084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x291088: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x291088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29108c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291090: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x291090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x291094: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x291094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_291098:
    // 0x291098: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x291098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29109c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x29109cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2910a0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2910A0u;
    {
        const bool branch_taken_0x2910a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2910a0) {
            ctx->pc = 0x290FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290fc0;
        }
    }
    ctx->pc = 0x2910A8u;
    // 0x2910a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2910a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2910ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2910ACu;
    {
        const bool branch_taken_0x2910ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2910ac) {
            ctx->pc = 0x2910E8u;
            goto label_2910e8;
        }
    }
    ctx->pc = 0x2910B4u;
label_2910b4:
    // 0x2910b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2910b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2910b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2910b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2910bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2910bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2910c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2910c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2910c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2910c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2910c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2910c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2910cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2910ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2910d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2910d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2910d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2910d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2910d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2910d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2910dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2910e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2910e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2910e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2910e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2910e8:
    // 0x2910e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2910e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2910ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2910ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2910f0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2910F0u;
    {
        const bool branch_taken_0x2910f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2910f0) {
            ctx->pc = 0x2910B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2910b4;
        }
    }
    ctx->pc = 0x2910F8u;
    // 0x2910f8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2910f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2910fc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2910fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x291100: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x291100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291104: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x291104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291108: 0xc0a4268  jal         func_2909A0
    ctx->pc = 0x291108u;
    SET_GPR_U32(ctx, 31, 0x291110u);
    ctx->pc = 0x2909A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2909A0u, 0x291108u, 0x291110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291110u;
label_291110:
    // 0x291110: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x291110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291114: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x291114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x291118: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x291118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29111c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x29111cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x291120: 0xc0a4268  jal         func_2909A0
    ctx->pc = 0x291120u;
    SET_GPR_U32(ctx, 31, 0x291128u);
    ctx->pc = 0x2909A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2909A0u, 0x291120u, 0x291128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291128u;
label_291128:
    // 0x291128: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x291128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29112c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29112cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291134: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x291134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x291138: 0x3e00008  jr          $ra
    ctx->pc = 0x291138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291140u;
}
