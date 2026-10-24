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

// Function: R11a_init
// Address: 0x27f350 - 0x27f370
void R11a_init_0x27f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R11a_init_0x27f350");
#endif

    switch (ctx->pc) {
        case 0x27f360u: goto label_27f360;
        default: break;
    }

    ctx->pc = 0x27f350u;

    // 0x27f350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f354: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27f354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x27f358: 0xc09fce0  jal         func_27F380
    ctx->pc = 0x27F358u;
    SET_GPR_U32(ctx, 31, 0x27F360u);
    ctx->pc = 0x27F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F380u, 0x27F358u, 0x27F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F360u;
label_27f360:
    // 0x27f360: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27f360u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f364: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27f364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f368: 0x3e00008  jr          $ra
    ctx->pc = 0x27F368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F370u;
}
