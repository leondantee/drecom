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
// Address: 0x2deddc - 0x2deea4
void caseD_5_0x2deddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2deddc");
#endif

    switch (ctx->pc) {
        case 0x2dedecu: goto label_2dedec;
        case 0x2dedf8u: goto label_2dedf8;
        case 0x2dee08u: goto label_2dee08;
        case 0x2dee20u: goto label_2dee20;
        case 0x2dee9cu: goto label_2dee9c;
        default: break;
    }

    ctx->pc = 0x2deddcu;

    // 0x2deddc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dede0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dede0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dede4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DEDE4u;
    SET_GPR_U32(ctx, 31, 0x2DEDECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DEDE4u, 0x2DEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDECu;
label_2dedec:
    // 0x2dedec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dedecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dedf0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DEDF0u;
    SET_GPR_U32(ctx, 31, 0x2DEDF8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DEDF0u, 0x2DEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDF8u;
label_2dedf8:
    // 0x2dedf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dedfc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dedfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dee00: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DEE00u;
    SET_GPR_U32(ctx, 31, 0x2DEE08u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DEE00u, 0x2DEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE08u;
label_2dee08:
    // 0x2dee08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee10: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2dee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2dee14: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2dee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2dee18: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2DEE18u;
    SET_GPR_U32(ctx, 31, 0x2DEE20u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DEE18u, 0x2DEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE20u;
label_2dee20:
    // 0x2dee20: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2dee20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2dee24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee28: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dee2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee30: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2dee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dee34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dee34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dee38: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dee38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2dee3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee40: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2dee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dee44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee48: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dee4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dee4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dee50: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dee50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2dee54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee58: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2dee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dee5c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2dee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dee60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dee60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dee64: 0x0  nop
    ctx->pc = 0x2dee64u;
    // NOP
    // 0x2dee68: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2DEE68u;
    {
        const bool branch_taken_0x2dee68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dee68) {
            ctx->pc = 0x2DEEA4u;
            return;
        }
    }
    ctx->pc = 0x2DEE70u;
    // 0x2dee70: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2dee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dee74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee78: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dee78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2dee7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2dee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dee80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee84: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2dee84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dee88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee8c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2dee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dee90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dee94: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DEE94u;
    SET_GPR_U32(ctx, 31, 0x2DEE9Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DEE94u, 0x2DEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE9Cu;
label_2dee9c:
    // 0x2dee9c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2DEE9Cu;
    {
        const bool branch_taken_0x2dee9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dee9c) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DEEA4u;
}
