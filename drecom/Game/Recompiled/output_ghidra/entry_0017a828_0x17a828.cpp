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

// Function: entry_0017a828
// Address: 0x17a828 - 0x17a848
void entry_0017a828_0x17a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a828_0x17a828");
#endif

    switch (ctx->pc) {
        case 0x17a830u: goto label_17a830;
        default: break;
    }

    ctx->pc = 0x17a828u;

    // 0x17a828: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17A828u;
    SET_GPR_U32(ctx, 31, 0x17A830u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x17A830u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A830u) { return; }
    ctx->pc = 0x17A830u;
label_17a830:
    // 0x17a830: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x17a830u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a83c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x17a83cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17a840: 0x3e00008  jr          $ra
    ctx->pc = 0x17A840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A848u;
}
