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

// Function: entry_00220870
// Address: 0x220870 - 0x220888
void entry_00220870_0x220870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220870_0x220870");
#endif

    switch (ctx->pc) {
        case 0x220878u: goto label_220878;
        default: break;
    }

    ctx->pc = 0x220870u;

    // 0x220870: 0xc046314  jal         func_118C50
    ctx->pc = 0x220870u;
    SET_GPR_U32(ctx, 31, 0x220878u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x220878u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x220878u) { return; }
    ctx->pc = 0x220878u;
label_220878:
    // 0x220878: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x220878u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22087c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22087cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x220880: 0x3e00008  jr          $ra
    ctx->pc = 0x220880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220888u;
}
