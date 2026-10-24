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

// Function: Em09_R1_br_mv0c
// Address: 0x349f60 - 0x349f88
void Em09_R1_br_mv0c_0x349f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_br_mv0c_0x349f60");
#endif

    switch (ctx->pc) {
        case 0x349f78u: goto label_349f78;
        default: break;
    }

    ctx->pc = 0x349f60u;

    // 0x349f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349f64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x349f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x349f68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x349f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x349f6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x349f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349f70: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x349F70u;
    SET_GPR_U32(ctx, 31, 0x349F78u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x349F70u, 0x349F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F78u;
label_349f78:
    // 0x349f78: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x349f78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349f7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x349f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x349f80: 0x3e00008  jr          $ra
    ctx->pc = 0x349F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349F88u;
}
