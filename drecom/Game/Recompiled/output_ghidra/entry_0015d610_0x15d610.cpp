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

// Function: entry_0015d610
// Address: 0x15d610 - 0x15d638
void entry_0015d610_0x15d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d610_0x15d610");
#endif

    switch (ctx->pc) {
        case 0x15d628u: goto label_15d628;
        default: break;
    }

    ctx->pc = 0x15d610u;

    // 0x15d610: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x15d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d614: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d618: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x15d61c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x15d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d620: 0xc058b08  jal         func_162C20
    ctx->pc = 0x15D620u;
    SET_GPR_U32(ctx, 31, 0x15D628u);
    ctx->pc = 0x162C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C20u, 0x15D620u, 0x15D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D628u;
label_15d628:
    // 0x15d628: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15d628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d62c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x15d62cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15d630: 0x3e00008  jr          $ra
    ctx->pc = 0x15D630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D638u;
}
