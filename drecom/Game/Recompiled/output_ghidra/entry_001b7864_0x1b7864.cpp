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

// Function: entry_001b7864
// Address: 0x1b7864 - 0x1b78b0
void entry_001b7864_0x1b7864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7864_0x1b7864");
#endif

    switch (ctx->pc) {
        case 0x1b787cu: goto label_1b787c;
        default: break;
    }

    ctx->pc = 0x1b7864u;

    // 0x1b7864: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b7864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7868: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b7868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b786c: 0xc4ec1290  lwc1        $f12, 0x1290($a3)
    ctx->pc = 0x1b786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7870: 0xc50d1380  lwc1        $f13, 0x1380($t0)
    ctx->pc = 0x1b7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b7874: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B7874u;
    SET_GPR_U32(ctx, 31, 0x1B787Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B7874u, 0x1B787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B787Cu;
label_1b787c:
    // 0x1b787c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b787cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b7880: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b7880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7888: 0x0  nop
    ctx->pc = 0x1b7888u;
    // NOP
    // 0x1b788c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b788cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7890: 0x0  nop
    ctx->pc = 0x1b7890u;
    // NOP
    // 0x1b7894: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7894u;
    {
        const bool branch_taken_0x1b7894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7894) {
            ctx->pc = 0x1B78B0u;
            return;
        }
    }
    ctx->pc = 0x1B789Cu;
    // 0x1b789c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b78a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b78a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b78a4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b78a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b78a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b78ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b78acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1b78b0u;
}
