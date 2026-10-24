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

// Function: entry_00338968
// Address: 0x338968 - 0x338980
void entry_00338968_0x338968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338968_0x338968");
#endif

    switch (ctx->pc) {
        case 0x338970u: goto label_338970;
        default: break;
    }

    ctx->pc = 0x338968u;

    // 0x338968: 0xc0ce268  jal         func_3389A0
    ctx->pc = 0x338968u;
    SET_GPR_U32(ctx, 31, 0x338970u);
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x338968u, 0x338970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338970u;
label_338970:
    // 0x338970: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338974: 0x8c239a10  lw          $v1, -0x65F0($at)
    ctx->pc = 0x338974u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x338978: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x338978u;
    {
        const bool branch_taken_0x338978 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x338978) {
            ctx->pc = 0x338990u;
            return;
        }
    }
    ctx->pc = 0x338980u;
}
