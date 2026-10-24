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

// Function: entry_00290fc0
// Address: 0x290fc0 - 0x291098
void entry_00290fc0_0x290fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290fc0_0x290fc0");
#endif

    switch (ctx->pc) {
        case 0x29103cu: goto label_29103c;
        case 0x291048u: goto label_291048;
        case 0x291068u: goto label_291068;
        case 0x291078u: goto label_291078;
        case 0x291084u: goto label_291084;
        default: break;
    }

    ctx->pc = 0x290fc0u;

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
    ctx->pc = 0x291098u;
}
