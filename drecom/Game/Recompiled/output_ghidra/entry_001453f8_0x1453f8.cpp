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

// Function: entry_001453f8
// Address: 0x1453f8 - 0x145468
void entry_001453f8_0x1453f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001453f8_0x1453f8");
#endif

    switch (ctx->pc) {
        case 0x145408u: goto label_145408;
        default: break;
    }

    ctx->pc = 0x1453f8u;

    // 0x1453f8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1453f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1453fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145400: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x145400u;
    SET_GPR_U32(ctx, 31, 0x145408u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x145400u, 0x145408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145408u;
label_145408:
    // 0x145408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14540c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145410: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x145410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x145414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145418: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14541c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x14541cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x145420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145424: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145428: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x145428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14542c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145430: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x145430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145434: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x145434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x145438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14543c: 0x0  nop
    ctx->pc = 0x14543cu;
    // NOP
    // 0x145440: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145444: 0x0  nop
    ctx->pc = 0x145444u;
    // NOP
    // 0x145448: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x145448u;
    {
        const bool branch_taken_0x145448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145448) {
            ctx->pc = 0x145468u;
            return;
        }
    }
    ctx->pc = 0x145450u;
    // 0x145450: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145454: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x145454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145458: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14545c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14545cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x145460: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145460u;
    {
        const bool branch_taken_0x145460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145460) {
            ctx->pc = 0x145478u;
            return;
        }
    }
    ctx->pc = 0x145468u;
}
