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

// Function: caseD_11
// Address: 0x1c819c - 0x1c8210
void caseD_11_0x1c819c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x1c819c");
#endif

    switch (ctx->pc) {
        case 0x1c81c8u: goto label_1c81c8;
        default: break;
    }

    ctx->pc = 0x1c819cu;

    // 0x1c819c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c81a0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1c81a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c81a4: 0x3c088040  lui         $t0, 0x8040
    ctx->pc = 0x1c81a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32832 << 16));
    // 0x1c81a8: 0xe83025  or          $a2, $a3, $t0
    ctx->pc = 0x1c81a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1c81ac: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1c81acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1c81b0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c81b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c81b4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1c81b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1c81b8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1c81b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c81bc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1c81bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1c81c0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C81C0u;
    SET_GPR_U32(ctx, 31, 0x1C81C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C81C0u, 0x1C81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81C8u;
label_1c81c8:
    // 0x1c81c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c81cc: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1c81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c81d0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1c81d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1c81d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c81d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c81d8: 0x0  nop
    ctx->pc = 0x1c81d8u;
    // NOP
    // 0x1c81dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c81dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c81e0: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1c81e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x1c81e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c81e8: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1c81e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c81ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c81ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c81f0: 0x0  nop
    ctx->pc = 0x1c81f0u;
    // NOP
    // 0x1c81f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c81f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c81f8: 0x0  nop
    ctx->pc = 0x1c81f8u;
    // NOP
    // 0x1c81fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C81FCu;
    {
        const bool branch_taken_0x1c81fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c81fc) {
            ctx->pc = 0x1C8210u;
            return;
        }
    }
    ctx->pc = 0x1C8204u;
    // 0x1c8204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8208: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c820c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1c820cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1c8210u;
}
