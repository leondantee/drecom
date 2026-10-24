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

// Function: CdReadCheck
// Address: 0x1d8b60 - 0x1d8b88
void CdReadCheck_0x1d8b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdReadCheck_0x1d8b60");
#endif

    switch (ctx->pc) {
        case 0x1d8b78u: goto label_1d8b78;
        default: break;
    }

    ctx->pc = 0x1d8b60u;

    // 0x1d8b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8b64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1d8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d8b68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8b6c: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8b70: 0xc085766  jal         func_215D98
    ctx->pc = 0x1D8B70u;
    SET_GPR_U32(ctx, 31, 0x1D8B78u);
    ctx->pc = 0x215D98u;
    {
        ctx->pc = 0x1D8B78u;
        ps2_stubs::sceSifCheckStatRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8B78u) { return; }
    ctx->pc = 0x1D8B78u;
label_1d8b78:
    // 0x1d8b78: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1d8b78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b7c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d8b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d8b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8B88u;
}
