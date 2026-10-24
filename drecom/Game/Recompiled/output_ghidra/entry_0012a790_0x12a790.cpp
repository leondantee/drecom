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

// Function: entry_0012a790
// Address: 0x12a790 - 0x12a7a4
void entry_0012a790_0x12a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a790_0x12a790");
#endif

    switch (ctx->pc) {
        case 0x12a79cu: goto label_12a79c;
        default: break;
    }

    ctx->pc = 0x12a790u;

    // 0x12a790: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a794: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A794u;
    SET_GPR_U32(ctx, 31, 0x12A79Cu);
    ctx->pc = 0x127390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127390u, 0x12A794u, 0x12A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A79Cu;
label_12a79c:
    // 0x12a79c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12A79Cu;
    {
        const bool branch_taken_0x12a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a79c) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A7A4u;
}
