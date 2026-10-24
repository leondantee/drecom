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

// Function: entry_00159668
// Address: 0x159668 - 0x15968c
void entry_00159668_0x159668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159668_0x159668");
#endif

    switch (ctx->pc) {
        case 0x159670u: goto label_159670;
        default: break;
    }

    ctx->pc = 0x159668u;

    // 0x159668: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159668u;
    SET_GPR_U32(ctx, 31, 0x159670u);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159668u, 0x159670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159670u;
label_159670:
    // 0x159670: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159678: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x159678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x15967c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15967cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159680: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x159680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159684: 0x3e00008  jr          $ra
    ctx->pc = 0x159684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15968Cu;
}
