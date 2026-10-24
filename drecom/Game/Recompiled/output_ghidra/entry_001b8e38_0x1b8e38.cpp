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

// Function: entry_001b8e38
// Address: 0x1b8e38 - 0x1b8e84
void entry_001b8e38_0x1b8e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8e38_0x1b8e38");
#endif

    switch (ctx->pc) {
        case 0x1b8e50u: goto label_1b8e50;
        default: break;
    }

    ctx->pc = 0x1b8e38u;

    // 0x1b8e38: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b8e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8e3c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b8e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8e40: 0xc4ec1290  lwc1        $f12, 0x1290($a3)
    ctx->pc = 0x1b8e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8e44: 0xc50d1380  lwc1        $f13, 0x1380($t0)
    ctx->pc = 0x1b8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b8e48: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B8E48u;
    SET_GPR_U32(ctx, 31, 0x1B8E50u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B8E48u, 0x1B8E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E50u;
label_1b8e50:
    // 0x1b8e50: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b8e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b8e54: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e5c: 0x0  nop
    ctx->pc = 0x1b8e5cu;
    // NOP
    // 0x1b8e60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8e64: 0x0  nop
    ctx->pc = 0x1b8e64u;
    // NOP
    // 0x1b8e68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8E68u;
    {
        const bool branch_taken_0x1b8e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8e68) {
            ctx->pc = 0x1B8E84u;
            return;
        }
    }
    ctx->pc = 0x1B8E70u;
    // 0x1b8e70: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1b8e74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b8e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8e78: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b8e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8e7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b8e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b8e80: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b8e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1b8e84u;
}
