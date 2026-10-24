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

// Function: Md_critical_set
// Address: 0x1ab220 - 0x1ab248
void Md_critical_set_0x1ab220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_critical_set_0x1ab220");
#endif

    switch (ctx->pc) {
        case 0x1ab230u: goto label_1ab230;
        case 0x1ab238u: goto label_1ab238;
        default: break;
    }

    ctx->pc = 0x1ab220u;

    // 0x1ab220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab224: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ab224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ab228: 0xc06ac94  jal         func_1AB250
    ctx->pc = 0x1AB228u;
    SET_GPR_U32(ctx, 31, 0x1AB230u);
    ctx->pc = 0x1AB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB250u, 0x1AB228u, 0x1AB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB230u;
label_1ab230:
    // 0x1ab230: 0xc06ad24  jal         func_1AB490
    ctx->pc = 0x1AB230u;
    SET_GPR_U32(ctx, 31, 0x1AB238u);
    ctx->pc = 0x1AB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB490u, 0x1AB230u, 0x1AB238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB238u;
label_1ab238:
    // 0x1ab238: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ab238u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab23c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ab23cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ab240: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB248u;
}
