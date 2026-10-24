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

// Function: entry_001b73a8
// Address: 0x1b73a8 - 0x1b73f4
void entry_001b73a8_0x1b73a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b73a8_0x1b73a8");
#endif

    switch (ctx->pc) {
        case 0x1b73c0u: goto label_1b73c0;
        default: break;
    }

    ctx->pc = 0x1b73a8u;

    // 0x1b73a8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b73ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b73acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b73b0: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1b73b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b73b4: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x1b73b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b73b8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B73B8u;
    SET_GPR_U32(ctx, 31, 0x1B73C0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B73B8u, 0x1B73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73C0u;
label_1b73c0:
    // 0x1b73c0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b73c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b73c4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b73c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b73c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b73c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b73cc: 0x0  nop
    ctx->pc = 0x1b73ccu;
    // NOP
    // 0x1b73d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b73d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b73d4: 0x0  nop
    ctx->pc = 0x1b73d4u;
    // NOP
    // 0x1b73d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B73D8u;
    {
        const bool branch_taken_0x1b73d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b73d8) {
            ctx->pc = 0x1B73F4u;
            return;
        }
    }
    ctx->pc = 0x1B73E0u;
    // 0x1b73e0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1b73e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b73e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b73e8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b73e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b73ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b73ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b73f0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b73f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1b73f4u;
}
