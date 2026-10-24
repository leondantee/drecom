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

// Function: entry_001aab08
// Address: 0x1aab08 - 0x1aab2c
void entry_001aab08_0x1aab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aab08_0x1aab08");
#endif

    switch (ctx->pc) {
        case 0x1aab10u: goto label_1aab10;
        default: break;
    }

    ctx->pc = 0x1aab08u;

    // 0x1aab08: 0xc067594  jal         func_19D650
    ctx->pc = 0x1AAB08u;
    SET_GPR_U32(ctx, 31, 0x1AAB10u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x1AAB08u, 0x1AAB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB10u;
label_1aab10:
    // 0x1aab10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1aab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aab14: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1aab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1aab18: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1aab18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aab1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aab1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aab20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1aab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1aab24: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAB2Cu;
}
