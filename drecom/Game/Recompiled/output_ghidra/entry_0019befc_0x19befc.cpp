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

// Function: entry_0019befc
// Address: 0x19befc - 0x19bfac
void entry_0019befc_0x19befc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019befc_0x19befc");
#endif

    switch (ctx->pc) {
        case 0x19bf74u: goto label_19bf74;
        case 0x19bfa4u: goto label_19bfa4;
        default: break;
    }

    ctx->pc = 0x19befcu;

    // 0x19befc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf00: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x19bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf08: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x19bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bf0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bf10: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x19bf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x19bf14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf18: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x19bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf20: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x19bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bf24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bf28: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x19bf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x19bf2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf30: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf38: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bf3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bf40: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19bf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19bf44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf48: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf50: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19bf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19bf58: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19bf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19bf5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19bf64: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19bf68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19bf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bf6c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19BF6Cu;
    SET_GPR_U32(ctx, 31, 0x19BF74u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19BF6Cu, 0x19BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF74u;
label_19bf74:
    // 0x19bf74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf78: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19bf7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bf80: 0x0  nop
    ctx->pc = 0x19bf80u;
    // NOP
    // 0x19bf84: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19BF84u;
    {
        const bool branch_taken_0x19bf84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bf84) {
            ctx->pc = 0x19BFACu;
            return;
        }
    }
    ctx->pc = 0x19BF8Cu;
    // 0x19bf8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19bf94: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19bf98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bf9c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19BF9Cu;
    SET_GPR_U32(ctx, 31, 0x19BFA4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19BF9Cu, 0x19BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFA4u;
label_19bfa4:
    // 0x19bfa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bfa8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19bfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x19bfacu;
}
