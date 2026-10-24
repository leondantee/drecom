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

// Function: entry_001c6e4c
// Address: 0x1c6e4c - 0x1c6e98
void entry_001c6e4c_0x1c6e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6e4c_0x1c6e4c");
#endif

    switch (ctx->pc) {
        case 0x1c6e64u: goto label_1c6e64;
        default: break;
    }

    ctx->pc = 0x1c6e4cu;

    // 0x1c6e4c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6e50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6e54: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1c6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c6e58: 0xc48d1380  lwc1        $f13, 0x1380($a0)
    ctx->pc = 0x1c6e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c6e5c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E64u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C6E5Cu, 0x1C6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E64u;
label_1c6e64:
    // 0x1c6e64: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1c6e68: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c6e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e70: 0x0  nop
    ctx->pc = 0x1c6e70u;
    // NOP
    // 0x1c6e74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6e78: 0x0  nop
    ctx->pc = 0x1c6e78u;
    // NOP
    // 0x1c6e7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6E7Cu;
    {
        const bool branch_taken_0x1c6e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6e7c) {
            ctx->pc = 0x1C6E98u;
            return;
        }
    }
    ctx->pc = 0x1C6E84u;
    // 0x1c6e84: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c6e88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6e8c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6e90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6e94: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1c6e98u;
}
