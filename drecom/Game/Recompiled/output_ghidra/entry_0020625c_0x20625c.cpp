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

// Function: entry_0020625c
// Address: 0x20625c - 0x206274
void entry_0020625c_0x20625c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020625c_0x20625c");
#endif

    switch (ctx->pc) {
        case 0x20626cu: goto label_20626c;
        default: break;
    }

    ctx->pc = 0x20625cu;

    // 0x20625c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20625cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206260: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x206260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x206264: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x206264u;
    SET_GPR_U32(ctx, 31, 0x20626Cu);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x206264u, 0x20626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20626Cu;
label_20626c:
    // 0x20626c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20626Cu;
    {
        const bool branch_taken_0x20626c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20626c) {
            ctx->pc = 0x2062ACu;
            return;
        }
    }
    ctx->pc = 0x206274u;
}
