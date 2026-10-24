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

// Function: caseD_5
// Address: 0x2de6e4 - 0x2de7ac
void caseD_5_0x2de6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2de6e4");
#endif

    switch (ctx->pc) {
        case 0x2de6f4u: goto label_2de6f4;
        case 0x2de700u: goto label_2de700;
        case 0x2de710u: goto label_2de710;
        case 0x2de728u: goto label_2de728;
        case 0x2de7a4u: goto label_2de7a4;
        default: break;
    }

    ctx->pc = 0x2de6e4u;

    // 0x2de6e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de6e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2de6ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DE6ECu;
    SET_GPR_U32(ctx, 31, 0x2DE6F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE6ECu, 0x2DE6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6F4u;
label_2de6f4:
    // 0x2de6f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de6f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DE6F8u;
    SET_GPR_U32(ctx, 31, 0x2DE700u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE6F8u, 0x2DE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE700u;
label_2de700:
    // 0x2de700: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de704: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2de704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2de708: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DE708u;
    SET_GPR_U32(ctx, 31, 0x2DE710u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE708u, 0x2DE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE710u;
label_2de710:
    // 0x2de710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de714: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de718: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2de718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2de71c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2de71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2de720: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2DE720u;
    SET_GPR_U32(ctx, 31, 0x2DE728u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DE720u, 0x2DE728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE728u;
label_2de728:
    // 0x2de728: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2de728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2de72c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de730: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2de730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de738: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2de738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de73c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2de73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2de740: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2de744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de748: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2de748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de74c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de750: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de754: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2de754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2de758: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2de75c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de760: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2de760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de764: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de76c: 0x0  nop
    ctx->pc = 0x2de76cu;
    // NOP
    // 0x2de770: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2DE770u;
    {
        const bool branch_taken_0x2de770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de770) {
            ctx->pc = 0x2DE7ACu;
            return;
        }
    }
    ctx->pc = 0x2DE778u;
    // 0x2de778: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de77c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de780: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2de784: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2de784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2de788: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de78c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2de78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de794: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2de794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de798: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de79c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DE79Cu;
    SET_GPR_U32(ctx, 31, 0x2DE7A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE79Cu, 0x2DE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE7A4u;
label_2de7a4:
    // 0x2de7a4: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2DE7A4u;
    {
        const bool branch_taken_0x2de7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de7a4) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DE7ACu;
}
