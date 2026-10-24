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

// Function: entry_00206534
// Address: 0x206534 - 0x20654c
void entry_00206534_0x206534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206534_0x206534");
#endif

    switch (ctx->pc) {
        case 0x206544u: goto label_206544;
        default: break;
    }

    ctx->pc = 0x206534u;

    // 0x206534: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206538: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x206538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20653c: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20653Cu;
    SET_GPR_U32(ctx, 31, 0x206544u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20653Cu, 0x206544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206544u;
label_206544:
    // 0x206544: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x206544u;
    {
        const bool branch_taken_0x206544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206544) {
            ctx->pc = 0x206584u;
            return;
        }
    }
    ctx->pc = 0x20654Cu;
}
