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

// Function: entry_002fc768
// Address: 0x2fc768 - 0x2fc840
void entry_002fc768_0x2fc768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc768_0x2fc768");
#endif

    switch (ctx->pc) {
        case 0x2fc780u: goto label_2fc780;
        case 0x2fc7a4u: goto label_2fc7a4;
        case 0x2fc7c8u: goto label_2fc7c8;
        case 0x2fc830u: goto label_2fc830;
        default: break;
    }

    ctx->pc = 0x2fc768u;

    // 0x2fc768: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2fc768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fc76c: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fc76cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc770: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2fc770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2fc774: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fc774u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fc778: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FC778u;
    SET_GPR_U32(ctx, 31, 0x2FC780u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FC778u, 0x2FC780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC780u;
label_2fc780:
    // 0x2fc780: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2fc780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2fc784: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc788: 0x0  nop
    ctx->pc = 0x2fc788u;
    // NOP
    // 0x2fc78c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc790: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x2fc790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc794: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc798: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2fc798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2fc79c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FC79Cu;
    SET_GPR_U32(ctx, 31, 0x2FC7A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FC79Cu, 0x2FC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7A4u;
label_2fc7a4:
    // 0x2fc7a4: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x2fc7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x2fc7a8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2fc7a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc7ac: 0x0  nop
    ctx->pc = 0x2fc7acu;
    // NOP
    // 0x2fc7b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc7b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc7b4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2fc7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc7bc: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2fc7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2fc7c0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FC7C0u;
    SET_GPR_U32(ctx, 31, 0x2FC7C8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FC7C0u, 0x2FC7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7C8u;
label_2fc7c8:
    // 0x2fc7c8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2fc7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2fc7cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc7ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc7d0: 0x0  nop
    ctx->pc = 0x2fc7d0u;
    // NOP
    // 0x2fc7d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc7d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc7d8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2fc7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc7dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc7dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc7e0: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2fc7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2fc7e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fc7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc7e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc7e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc7ec: 0x0  nop
    ctx->pc = 0x2fc7ecu;
    // NOP
    // 0x2fc7f0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2fc7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2fc7f4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2fc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc7f8: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2fc7f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc7fc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2fc7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2fc800: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2fc800u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2fc804: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fc804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc80c: 0x0  nop
    ctx->pc = 0x2fc80cu;
    // NOP
    // 0x2fc810: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2fc810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2fc814: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2fc814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc818: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fc818u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc81c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2fc81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2fc820: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x2fc820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2fc824: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x2fc824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fc828: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x2FC828u;
    SET_GPR_U32(ctx, 31, 0x2FC830u);
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x2FC828u, 0x2FC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC830u;
label_2fc830:
    // 0x2fc830: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fc830u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc834: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x2fc834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc838: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x2fc838u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc83c: 0x0  nop
    ctx->pc = 0x2fc83cu;
    // NOP
    ctx->pc = 0x2fc840u;
}
