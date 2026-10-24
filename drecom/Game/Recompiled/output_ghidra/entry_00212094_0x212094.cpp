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

// Function: entry_00212094
// Address: 0x212094 - 0x2120ac
void entry_00212094_0x212094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212094_0x212094");
#endif

    switch (ctx->pc) {
        case 0x21209cu: goto label_21209c;
        default: break;
    }

    ctx->pc = 0x212094u;

    // 0x212094: 0xc046314  jal         func_118C50
    ctx->pc = 0x212094u;
    SET_GPR_U32(ctx, 31, 0x21209Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x21209Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21209Cu) { return; }
    ctx->pc = 0x21209Cu;
label_21209c:
    // 0x21209c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21209cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2120a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2120a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2120a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2120A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2120ACu;
}
