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

// Function: caseD_7
// Address: 0x2de810 - 0x2de8c4
void caseD_7_0x2de810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x2de810");
#endif

    switch (ctx->pc) {
        case 0x2de820u: goto label_2de820;
        case 0x2de82cu: goto label_2de82c;
        case 0x2de83cu: goto label_2de83c;
        case 0x2de854u: goto label_2de854;
        default: break;
    }

    ctx->pc = 0x2de810u;

    // 0x2de810: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de814: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2de814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2de818: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DE818u;
    SET_GPR_U32(ctx, 31, 0x2DE820u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE818u, 0x2DE820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE820u;
label_2de820:
    // 0x2de820: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de824: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DE824u;
    SET_GPR_U32(ctx, 31, 0x2DE82Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE824u, 0x2DE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE82Cu;
label_2de82c:
    // 0x2de82c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de830: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2de830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2de834: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DE834u;
    SET_GPR_U32(ctx, 31, 0x2DE83Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE834u, 0x2DE83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE83Cu;
label_2de83c:
    // 0x2de83c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de844: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2de844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2de848: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2de848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2de84c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2DE84Cu;
    SET_GPR_U32(ctx, 31, 0x2DE854u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DE84Cu, 0x2DE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE854u;
label_2de854:
    // 0x2de854: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2de854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2de858: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de85c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2de85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de864: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2de864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2de868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2de86c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2de870: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de874: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2de874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de87c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2de880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2de884: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2de888: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de88c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2de88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de890: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de898: 0x0  nop
    ctx->pc = 0x2de898u;
    // NOP
    // 0x2de89c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2DE89Cu;
    {
        const bool branch_taken_0x2de89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de89c) {
            ctx->pc = 0x2DE8C4u;
            return;
        }
    }
    ctx->pc = 0x2DE8A4u;
    // 0x2de8a4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de8a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de8ac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2de8b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2de8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2de8b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de8b8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2de8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de8bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de8c0: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2de8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2de8c4u;
}
