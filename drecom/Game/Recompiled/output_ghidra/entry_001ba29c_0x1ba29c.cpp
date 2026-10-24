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

// Function: entry_001ba29c
// Address: 0x1ba29c - 0x1ba2e8
void entry_001ba29c_0x1ba29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba29c_0x1ba29c");
#endif

    switch (ctx->pc) {
        case 0x1ba2b4u: goto label_1ba2b4;
        default: break;
    }

    ctx->pc = 0x1ba29cu;

    // 0x1ba29c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba2a0: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba2a4: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1ba2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ba2a8: 0xc4ed1380  lwc1        $f13, 0x1380($a3)
    ctx->pc = 0x1ba2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ba2ac: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BA2ACu;
    SET_GPR_U32(ctx, 31, 0x1BA2B4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BA2ACu, 0x1BA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2B4u;
label_1ba2b4:
    // 0x1ba2b4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ba2b8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ba2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba2bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ba2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba2c0: 0x0  nop
    ctx->pc = 0x1ba2c0u;
    // NOP
    // 0x1ba2c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba2c8: 0x0  nop
    ctx->pc = 0x1ba2c8u;
    // NOP
    // 0x1ba2cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA2CCu;
    {
        const bool branch_taken_0x1ba2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba2cc) {
            ctx->pc = 0x1BA2E8u;
            return;
        }
    }
    ctx->pc = 0x1BA2D4u;
    // 0x1ba2d4: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x1ba2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
    // 0x1ba2d8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1ba2d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba2dc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba2e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ba2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ba2e4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1ba2e8u;
}
