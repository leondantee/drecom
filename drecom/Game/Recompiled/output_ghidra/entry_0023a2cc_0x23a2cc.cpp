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

// Function: entry_0023a2cc
// Address: 0x23a2cc - 0x23a368
void entry_0023a2cc_0x23a2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a2cc_0x23a2cc");
#endif

    switch (ctx->pc) {
        case 0x23a2f8u: goto label_23a2f8;
        default: break;
    }

    ctx->pc = 0x23a2ccu;

    // 0x23a2cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a2d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a2d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a2d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a2dc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23a2e0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23a2e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23a2e8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23a2ec: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23a2f0: 0xc05c848  jal         func_172120
    ctx->pc = 0x23A2F0u;
    SET_GPR_U32(ctx, 31, 0x23A2F8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23A2F0u, 0x23A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2F8u;
label_23a2f8:
    // 0x23a2f8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23a2fc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x23a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a304: 0x0  nop
    ctx->pc = 0x23a304u;
    // NOP
    // 0x23a308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a30c: 0x0  nop
    ctx->pc = 0x23a30cu;
    // NOP
    // 0x23a310: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x23A310u;
    {
        const bool branch_taken_0x23a310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a310) {
            ctx->pc = 0x23A368u;
            return;
        }
    }
    ctx->pc = 0x23A318u;
    // 0x23a318: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a31c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a320: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x23a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a324: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a328: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a32c: 0x0  nop
    ctx->pc = 0x23a32cu;
    // NOP
    // 0x23a330: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x23A330u;
    {
        const bool branch_taken_0x23a330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a330) {
            ctx->pc = 0x23A3B0u;
            return;
        }
    }
    ctx->pc = 0x23A338u;
    // 0x23a338: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a33c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23a33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23a340: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a344: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23a344u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23a348: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23a34c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a354: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a358: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a35c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23a360: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23A360u;
    {
        const bool branch_taken_0x23a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a360) {
            ctx->pc = 0x23A3B0u;
            return;
        }
    }
    ctx->pc = 0x23A368u;
}
