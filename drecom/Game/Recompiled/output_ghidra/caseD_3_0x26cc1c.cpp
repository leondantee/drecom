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

// Function: caseD_3
// Address: 0x26cc1c - 0x26cce4
void caseD_3_0x26cc1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x26cc1c");
#endif

    switch (ctx->pc) {
        case 0x26cc2cu: goto label_26cc2c;
        case 0x26cc68u: goto label_26cc68;
        case 0x26cc88u: goto label_26cc88;
        case 0x26cca0u: goto label_26cca0;
        default: break;
    }

    ctx->pc = 0x26cc1cu;

    // 0x26cc1c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26cc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cc24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26CC24u;
    SET_GPR_U32(ctx, 31, 0x26CC2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26CC24u, 0x26CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC2Cu;
label_26cc2c:
    // 0x26cc2c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc30: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cc34: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x26cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x26cc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cc3c: 0x0  nop
    ctx->pc = 0x26cc3cu;
    // NOP
    // 0x26cc40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26cc40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26cc44: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26cc48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc4c: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cc50: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc54: 0xe4a000d0  swc1        $f0, 0xD0($a1)
    ctx->pc = 0x26cc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x26cc58: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc5c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26cc5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x26cc60: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x26CC60u;
    SET_GPR_U32(ctx, 31, 0x26CC68u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26CC60u, 0x26CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC68u;
label_26cc68:
    // 0x26cc68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cc6c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26cc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc70: 0xe50000d0  swc1        $f0, 0xD0($t0)
    ctx->pc = 0x26cc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 208), bits); }
    // 0x26cc74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26cc74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26cc78: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26cc7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26cc80: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26CC80u;
    SET_GPR_U32(ctx, 31, 0x26CC88u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26CC80u, 0x26CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC88u;
label_26cc88:
    // 0x26cc88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc90: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x26cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x26cc94: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x26cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x26cc98: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26CC98u;
    SET_GPR_U32(ctx, 31, 0x26CCA0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26CC98u, 0x26CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCA0u;
label_26cca0:
    // 0x26cca0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26cca4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26cca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26cca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ccac: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ccb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ccb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ccb4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ccb8: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x26ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ccbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ccbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ccc0: 0x0  nop
    ctx->pc = 0x26ccc0u;
    // NOP
    // 0x26ccc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26CCC4u;
    {
        const bool branch_taken_0x26ccc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ccc4) {
            ctx->pc = 0x26CCE4u;
            return;
        }
    }
    ctx->pc = 0x26CCCCu;
    // 0x26cccc: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x26ccccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
    // 0x26ccd0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x26ccd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ccd4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ccd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ccd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ccdc: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26ccdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cce0: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x26cce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
    ctx->pc = 0x26cce4u;
}
