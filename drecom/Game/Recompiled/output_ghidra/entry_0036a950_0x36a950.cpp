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

// Function: entry_0036a950
// Address: 0x36a950 - 0x36a968
void entry_0036a950_0x36a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a950_0x36a950");
#endif

    ctx->pc = 0x36a950u;

    // 0x36a950: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36a950u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a95c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x36a95cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36a960: 0x3e00008  jr          $ra
    ctx->pc = 0x36A960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A968u;
}
