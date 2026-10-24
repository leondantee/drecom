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

// Function: caseD_1
// Address: 0x199e30 - 0x199eb0
void caseD_1_0x199e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x199e30");
#endif

    switch (ctx->pc) {
        case 0x199e40u: goto label_199e40;
        case 0x199e60u: goto label_199e60;
        default: break;
    }

    ctx->pc = 0x199e30u;

    // 0x199e30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199e34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x199e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199e38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x199E38u;
    SET_GPR_U32(ctx, 31, 0x199E40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x199E38u, 0x199E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E40u;
label_199e40:
    // 0x199e40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199e44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199e48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199e4c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x199e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x199e50: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x199e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x199e54: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x199e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199e58: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x199E58u;
    SET_GPR_U32(ctx, 31, 0x199E60u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x199E60u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x199E60u) { return; }
    ctx->pc = 0x199E60u;
label_199e60:
    // 0x199e60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199e64: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x199e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199e68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199e70: 0x0  nop
    ctx->pc = 0x199e70u;
    // NOP
    // 0x199e74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x199e78: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x199e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x199e7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199e80: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x199e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199e84: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x199e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x199e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199e8c: 0x0  nop
    ctx->pc = 0x199e8cu;
    // NOP
    // 0x199e90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199e94: 0x0  nop
    ctx->pc = 0x199e94u;
    // NOP
    // 0x199e98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x199E98u;
    {
        const bool branch_taken_0x199e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199e98) {
            ctx->pc = 0x199EB0u;
            return;
        }
    }
    ctx->pc = 0x199EA0u;
    // 0x199ea0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x199ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199ea8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199eac: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x199eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x199eb0u;
}
