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

// Function: entry_002e19fc
// Address: 0x2e19fc - 0x2e1a30
void entry_002e19fc_0x2e19fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e19fc_0x2e19fc");
#endif

    ctx->pc = 0x2e19fcu;

    // 0x2e19fc: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x2e19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1a00: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e1a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2e1a04: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x2e1a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1a08: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2e1a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2e1a0c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2e1a0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1a10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e1a10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1a14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e1a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1a18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1a24: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2e1a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e1a28: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1A30u;
}
