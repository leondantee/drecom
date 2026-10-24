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

// Function: entry_0016301c
// Address: 0x16301c - 0x163044
void entry_0016301c_0x16301c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016301c_0x16301c");
#endif

    ctx->pc = 0x16301cu;

    // 0x16301c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163020: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163024: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x163024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x163028: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x163028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16302c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x16302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163030: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x163030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x163034: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x163034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163038: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x163038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16303c: 0x3e00008  jr          $ra
    ctx->pc = 0x16303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163044u;
}
