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

// Function: caseD_4
// Address: 0x34c54c - 0x34c660
void caseD_4_0x34c54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x34c54c");
#endif

    switch (ctx->pc) {
        case 0x34c55cu: goto label_34c55c;
        case 0x34c570u: goto label_34c570;
        case 0x34c580u: goto label_34c580;
        case 0x34c5b0u: goto label_34c5b0;
        case 0x34c5c4u: goto label_34c5c4;
        case 0x34c5d0u: goto label_34c5d0;
        case 0x34c5f0u: goto label_34c5f0;
        case 0x34c608u: goto label_34c608;
        case 0x34c614u: goto label_34c614;
        default: break;
    }

    ctx->pc = 0x34c54cu;

    // 0x34c54c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c550: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c554: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34C554u;
    SET_GPR_U32(ctx, 31, 0x34C55Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34C554u, 0x34C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C55Cu;
label_34c55c:
    // 0x34c55c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c55cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c560: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c564: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c564u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c568: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34C568u;
    SET_GPR_U32(ctx, 31, 0x34C570u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34C568u, 0x34C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C570u;
label_34c570:
    // 0x34c570: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c570u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c574: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c578: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34C578u;
    SET_GPR_U32(ctx, 31, 0x34C580u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34C578u, 0x34C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C580u;
label_34c580:
    // 0x34c580: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x34c580u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c584: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c588: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x34c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x34c58c: 0x247007d0  addiu       $s0, $v1, 0x7D0
    ctx->pc = 0x34c58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x34c590: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c594: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34c594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34c598: 0x261007d0  addiu       $s0, $s0, 0x7D0
    ctx->pc = 0x34c598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2000));
    // 0x34c59c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c5a0: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x34c5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34c5a4: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x34c5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c5a8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x34C5A8u;
    SET_GPR_U32(ctx, 31, 0x34C5B0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x34C5A8u, 0x34C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5B0u;
label_34c5b0:
    // 0x34c5b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c5b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c5b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34c5b8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x34c5b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c5bc: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x34C5BCu;
    SET_GPR_U32(ctx, 31, 0x34C5C4u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x34C5BCu, 0x34C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5C4u;
label_34c5c4:
    // 0x34c5c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c5c8: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x34C5C8u;
    SET_GPR_U32(ctx, 31, 0x34C5D0u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x34C5C8u, 0x34C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5D0u;
label_34c5d0:
    // 0x34c5d0: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c5d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34c5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34c5d8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34c5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34c5dc: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c5e0: 0x24c31330  addiu       $v1, $a2, 0x1330
    ctx->pc = 0x34c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x34c5e4: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x34c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c5e8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x34C5E8u;
    SET_GPR_U32(ctx, 31, 0x34C5F0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x34C5E8u, 0x34C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5F0u;
label_34c5f0:
    // 0x34c5f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c5f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c5f4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x34c5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x34c5f8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x34c5f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x34c5fc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34c5fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34c600: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x34C600u;
    SET_GPR_U32(ctx, 31, 0x34C608u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x34C600u, 0x34C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C608u;
label_34c608:
    // 0x34c608: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c60c: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x34C60Cu;
    SET_GPR_U32(ctx, 31, 0x34C614u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x34C60Cu, 0x34C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C614u;
label_34c614:
    // 0x34c614: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x34c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c618: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34c618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34c61c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34c620: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34c620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c624: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x34c624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x34c628: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34c628u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c62c: 0x0  nop
    ctx->pc = 0x34c62cu;
    // NOP
    // 0x34c630: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34c630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c634: 0x0  nop
    ctx->pc = 0x34c634u;
    // NOP
    // 0x34c638: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34C638u;
    {
        const bool branch_taken_0x34c638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c638) {
            ctx->pc = 0x34C660u;
            return;
        }
    }
    ctx->pc = 0x34C640u;
    // 0x34c640: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c648: 0x0  nop
    ctx->pc = 0x34c648u;
    // NOP
    // 0x34c64c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34c64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34c650: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c658: 0x0  nop
    ctx->pc = 0x34c658u;
    // NOP
    // 0x34c65c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    ctx->pc = 0x34c660u;
}
