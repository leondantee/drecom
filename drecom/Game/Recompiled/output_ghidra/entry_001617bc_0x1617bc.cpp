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

// Function: entry_001617bc
// Address: 0x1617bc - 0x1617d8
void entry_001617bc_0x1617bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001617bc_0x1617bc");
#endif

    switch (ctx->pc) {
        case 0x1617c4u: goto label_1617c4;
        default: break;
    }

    ctx->pc = 0x1617bcu;

    // 0x1617bc: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1617BCu;
    SET_GPR_U32(ctx, 31, 0x1617C4u);
    ctx->pc = 0x1610F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1610F0u, 0x1617BCu, 0x1617C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617C4u;
label_1617c4:
    // 0x1617c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1617C4u;
    {
        const bool branch_taken_0x1617c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617c4) {
            ctx->pc = 0x1617D8u;
            return;
        }
    }
    ctx->pc = 0x1617CCu;
    // 0x1617cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1617ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1617d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1617D0u;
    {
        const bool branch_taken_0x1617d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617d0) {
            ctx->pc = 0x161800u;
            return;
        }
    }
    ctx->pc = 0x1617D8u;
}
