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
// Address: 0x1c7dd0 - 0x1c7e44
void caseD_d_0x1c7dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1c7dd0");
#endif

    switch (ctx->pc) {
        case 0x1c7df8u: goto label_1c7df8;
        default: break;
    }

    ctx->pc = 0x1c7dd0u;

    // 0x1c7dd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7dd4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1c7dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c7dd8: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1c7ddc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c7ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c7de0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1c7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1c7de4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7de8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c7de8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c7dec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c7decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7df0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C7DF0u;
    SET_GPR_U32(ctx, 31, 0x1C7DF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C7DF0u, 0x1C7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DF8u;
label_1c7df8:
    // 0x1c7df8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c7df8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7dfc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7e00: 0xc4e10188  lwc1        $f1, 0x188($a3)
    ctx->pc = 0x1c7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7e04: 0x3c0840a0  lui         $t0, 0x40A0
    ctx->pc = 0x1c7e04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16544 << 16));
    // 0x1c7e08: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c7e08u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7e0c: 0x0  nop
    ctx->pc = 0x1c7e0cu;
    // NOP
    // 0x1c7e10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c7e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c7e14: 0xe4e00188  swc1        $f0, 0x188($a3)
    ctx->pc = 0x1c7e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 392), bits); }
    // 0x1c7e18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7e1c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1c7e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7e20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7e24: 0x0  nop
    ctx->pc = 0x1c7e24u;
    // NOP
    // 0x1c7e28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7e2c: 0x0  nop
    ctx->pc = 0x1c7e2cu;
    // NOP
    // 0x1c7e30: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7E30u;
    {
        const bool branch_taken_0x1c7e30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7e30) {
            ctx->pc = 0x1C7E44u;
            return;
        }
    }
    ctx->pc = 0x1C7E38u;
    // 0x1c7e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7e3c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7e40: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1c7e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    ctx->pc = 0x1c7e44u;
}
