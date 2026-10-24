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

// Function: caseD_d
// Address: 0x1cf9f4 - 0x1cfa6c
void caseD_d_0x1cf9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1cf9f4");
#endif

    switch (ctx->pc) {
        case 0x1cfa20u: goto label_1cfa20;
        default: break;
    }

    ctx->pc = 0x1cf9f4u;

    // 0x1cf9f4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf9f8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cf9fc: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1cf9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1cfa00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1cfa00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cfa04: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1cfa04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1cfa08: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfa0c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cfa0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cfa10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cfa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfa14: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfa14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfa18: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CFA18u;
    SET_GPR_U32(ctx, 31, 0x1CFA20u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CFA18u, 0x1CFA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA20u;
label_1cfa20:
    // 0x1cfa20: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cfa20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfa24: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cfa24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfa28: 0xc4e10188  lwc1        $f1, 0x188($a3)
    ctx->pc = 0x1cfa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfa2c: 0x3c0840a0  lui         $t0, 0x40A0
    ctx->pc = 0x1cfa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16544 << 16));
    // 0x1cfa30: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1cfa30u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfa34: 0x0  nop
    ctx->pc = 0x1cfa34u;
    // NOP
    // 0x1cfa38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfa38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cfa3c: 0xe4e00188  swc1        $f0, 0x188($a3)
    ctx->pc = 0x1cfa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 392), bits); }
    // 0x1cfa40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfa44: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1cfa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfa48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfa4c: 0x0  nop
    ctx->pc = 0x1cfa4cu;
    // NOP
    // 0x1cfa50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfa50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfa54: 0x0  nop
    ctx->pc = 0x1cfa54u;
    // NOP
    // 0x1cfa58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFA58u;
    {
        const bool branch_taken_0x1cfa58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfa58) {
            ctx->pc = 0x1CFA6Cu;
            return;
        }
    }
    ctx->pc = 0x1CFA60u;
    // 0x1cfa60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfa60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfa64: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfa68: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1cfa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    ctx->pc = 0x1cfa6cu;
}
