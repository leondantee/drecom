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

// Function: entry_00211db4
// Address: 0x211db4 - 0x211dcc
void entry_00211db4_0x211db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211db4_0x211db4");
#endif

    switch (ctx->pc) {
        case 0x211dbcu: goto label_211dbc;
        default: break;
    }

    ctx->pc = 0x211db4u;

    // 0x211db4: 0xc046314  jal         func_118C50
    ctx->pc = 0x211DB4u;
    SET_GPR_U32(ctx, 31, 0x211DBCu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x211DBCu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x211DBCu) { return; }
    ctx->pc = 0x211DBCu;
label_211dbc:
    // 0x211dbc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x211dbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211dc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x211dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x211dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x211DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211DCCu;
}
