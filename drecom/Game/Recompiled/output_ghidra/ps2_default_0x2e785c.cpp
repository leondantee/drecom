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

// Function: default
// Address: 0x2e785c - 0x2e7894
void ps2_default_0x2e785c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x2e785c");
#endif

    ctx->pc = 0x2e785cu;

    // 0x2e785c: 0xc6400128  lwc1        $f0, 0x128($s2)
    ctx->pc = 0x2e785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7860: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x2e7860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x2e7864: 0xc6400128  lwc1        $f0, 0x128($s2)
    ctx->pc = 0x2e7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7868: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x2e7868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x2e786c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x2e786cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7870: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e7870u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7874: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e7874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e787c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e787cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7888: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2e7888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e788c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E788Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E788Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7894u;
}
