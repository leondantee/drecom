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
// Address: 0x34ca38 - 0x34caf0
void caseD_5_0x34ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x34ca38");
#endif

    switch (ctx->pc) {
        case 0x34ca48u: goto label_34ca48;
        case 0x34ca5cu: goto label_34ca5c;
        case 0x34ca74u: goto label_34ca74;
        case 0x34ca88u: goto label_34ca88;
        default: break;
    }

    ctx->pc = 0x34ca38u;

    // 0x34ca38: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34ca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ca3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ca40: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34CA40u;
    SET_GPR_U32(ctx, 31, 0x34CA48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34CA40u, 0x34CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA48u;
label_34ca48:
    // 0x34ca48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca4c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca50: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca54: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34CA54u;
    SET_GPR_U32(ctx, 31, 0x34CA5Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34CA54u, 0x34CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA5Cu;
label_34ca5c:
    // 0x34ca5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca60: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ca68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ca6c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34CA6Cu;
    SET_GPR_U32(ctx, 31, 0x34CA74u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34CA6Cu, 0x34CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA74u;
label_34ca74:
    // 0x34ca74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca78: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca80: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34CA80u;
    SET_GPR_U32(ctx, 31, 0x34CA88u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34CA80u, 0x34CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA88u;
label_34ca88:
    // 0x34ca88: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca8c: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34ca8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34ca90: 0x260507d0  addiu       $a1, $s0, 0x7D0
    ctx->pc = 0x34ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2000));
    // 0x34ca94: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x34ca94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34ca98: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34ca98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca9c: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x34ca9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x34caa0: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x34caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
    // 0x34caa4: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x34caa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x34caa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34caa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34caac: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x34caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cab0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34cab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34cab4: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x34cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cab8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34cab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34cabc: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34cabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34cac0: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x34cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cac4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34cac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cacc: 0x0  nop
    ctx->pc = 0x34caccu;
    // NOP
    // 0x34cad0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34cad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cad4: 0x0  nop
    ctx->pc = 0x34cad4u;
    // NOP
    // 0x34cad8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34CAD8u;
    {
        const bool branch_taken_0x34cad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34cad8) {
            ctx->pc = 0x34CAF0u;
            return;
        }
    }
    ctx->pc = 0x34CAE0u;
    // 0x34cae0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34cae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cae8: 0x0  nop
    ctx->pc = 0x34cae8u;
    // NOP
    // 0x34caec: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34caecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    ctx->pc = 0x34caf0u;
}
