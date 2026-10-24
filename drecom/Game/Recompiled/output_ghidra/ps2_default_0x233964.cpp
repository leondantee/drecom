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
// Address: 0x233964 - 0x233998
void ps2_default_0x233964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x233964");
#endif

    ctx->pc = 0x233964u;

    // 0x233964: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x233964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233968: 0x8fb30098  lw          $s3, 0x98($sp)
    ctx->pc = 0x233968u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23396c: 0xe6600124  swc1        $f0, 0x124($s3)
    ctx->pc = 0x23396cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 292), bits); }
    // 0x233970: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x233970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x233974: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x233974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x233978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23397c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23397cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x233980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23398c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x23398cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x233990: 0x3e00008  jr          $ra
    ctx->pc = 0x233990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233998u;
}
