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

// Function: caseD_2
// Address: 0x34ae58 - 0x34af14
void caseD_2_0x34ae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x34ae58");
#endif

    switch (ctx->pc) {
        case 0x34ae64u: goto label_34ae64;
        case 0x34aeb0u: goto label_34aeb0;
        case 0x34aebcu: goto label_34aebc;
        case 0x34af0cu: goto label_34af0c;
        default: break;
    }

    ctx->pc = 0x34ae58u;

    // 0x34ae58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae5c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AE5Cu;
    SET_GPR_U32(ctx, 31, 0x34AE64u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AE5Cu, 0x34AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE64u;
label_34ae64:
    // 0x34ae64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ae6c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34ae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ae70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae74: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ae78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34ae78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34ae7c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34ae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34ae80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae84: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ae88: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ae8c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x34ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x34ae90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ae90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ae94: 0x0  nop
    ctx->pc = 0x34ae94u;
    // NOP
    // 0x34ae98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34ae98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34ae9c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34aea0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aea4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34aea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34aea8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34AEA8u;
    SET_GPR_U32(ctx, 31, 0x34AEB0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34AEA8u, 0x34AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEB0u;
label_34aeb0:
    // 0x34aeb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aeb4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34AEB4u;
    SET_GPR_U32(ctx, 31, 0x34AEBCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34AEB4u, 0x34AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEBCu;
label_34aebc:
    // 0x34aebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aec0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34aec4: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aec8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aecc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34aed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aed4: 0x0  nop
    ctx->pc = 0x34aed4u;
    // NOP
    // 0x34aed8: 0x4501011c  bc1t        . + 4 + (0x11C << 2)
    ctx->pc = 0x34AED8u;
    {
        const bool branch_taken_0x34aed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34aed8) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34AEE0u;
    // 0x34aee0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34aee4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aee8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34aee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34aeec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aef0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aef4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34aef8: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x34aef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x34aefc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34aefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34af00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34af00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34af04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AF04u;
    SET_GPR_U32(ctx, 31, 0x34AF0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AF04u, 0x34AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF0Cu;
label_34af0c:
    // 0x34af0c: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x34AF0Cu;
    {
        const bool branch_taken_0x34af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34af0c) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34AF14u;
}
