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

// Function: entry_0019bcd0
// Address: 0x19bcd0 - 0x19bd80
void entry_0019bcd0_0x19bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bcd0_0x19bcd0");
#endif

    switch (ctx->pc) {
        case 0x19bd48u: goto label_19bd48;
        case 0x19bd78u: goto label_19bd78;
        default: break;
    }

    ctx->pc = 0x19bcd0u;

    // 0x19bcd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcd4: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x19bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bcd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcdc: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x19bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bce0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bce4: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x19bce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x19bce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcec: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x19bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bcf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcf4: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x19bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bcf8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bcf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bcfc: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x19bcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x19bd00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd04: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bd08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd0c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bd10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bd10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bd14: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19bd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19bd18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd1c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bd20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd24: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bd28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19bd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19bd2c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19bd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19bd30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd34: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19bd38: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19bd3c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bd40: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19BD40u;
    SET_GPR_U32(ctx, 31, 0x19BD48u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19BD40u, 0x19BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD48u;
label_19bd48:
    // 0x19bd48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd4c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bd50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19bd50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bd54: 0x0  nop
    ctx->pc = 0x19bd54u;
    // NOP
    // 0x19bd58: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19BD58u;
    {
        const bool branch_taken_0x19bd58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bd58) {
            ctx->pc = 0x19BD80u;
            return;
        }
    }
    ctx->pc = 0x19BD60u;
    // 0x19bd60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd64: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19bd68: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19bd6c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bd70: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19BD70u;
    SET_GPR_U32(ctx, 31, 0x19BD78u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19BD70u, 0x19BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD78u;
label_19bd78:
    // 0x19bd78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd7c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19bd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x19bd80u;
}
