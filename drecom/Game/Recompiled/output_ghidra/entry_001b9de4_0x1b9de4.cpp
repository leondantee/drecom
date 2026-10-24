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

// Function: entry_001b9de4
// Address: 0x1b9de4 - 0x1b9e30
void entry_001b9de4_0x1b9de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9de4_0x1b9de4");
#endif

    switch (ctx->pc) {
        case 0x1b9dfcu: goto label_1b9dfc;
        default: break;
    }

    ctx->pc = 0x1b9de4u;

    // 0x1b9de4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9de8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9dec: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1b9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9df0: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1b9df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b9df4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B9DF4u;
    SET_GPR_U32(ctx, 31, 0x1B9DFCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B9DF4u, 0x1B9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DFCu;
label_1b9dfc:
    // 0x1b9dfc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b9e00: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b9e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9e04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9e08: 0x0  nop
    ctx->pc = 0x1b9e08u;
    // NOP
    // 0x1b9e0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9e10: 0x0  nop
    ctx->pc = 0x1b9e10u;
    // NOP
    // 0x1b9e14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9E14u;
    {
        const bool branch_taken_0x1b9e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9e14) {
            ctx->pc = 0x1B9E30u;
            return;
        }
    }
    ctx->pc = 0x1B9E1Cu;
    // 0x1b9e1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b9e20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9e24: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9e28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b9e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b9e2c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1b9e30u;
}
