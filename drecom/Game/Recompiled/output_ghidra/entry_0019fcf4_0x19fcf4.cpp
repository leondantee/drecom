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

// Function: entry_0019fcf4
// Address: 0x19fcf4 - 0x19fd10
void entry_0019fcf4_0x19fcf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fcf4_0x19fcf4");
#endif

    switch (ctx->pc) {
        case 0x19fd04u: goto label_19fd04;
        default: break;
    }

    ctx->pc = 0x19fcf4u;

    // 0x19fcf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fcf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fcfc: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19FCFCu;
    SET_GPR_U32(ctx, 31, 0x19FD04u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19FCFCu, 0x19FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD04u;
label_19fd04:
    // 0x19fd04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FD04u;
    {
        const bool branch_taken_0x19fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fd04) {
            ctx->pc = 0x19FD18u;
            return;
        }
    }
    ctx->pc = 0x19FD0Cu;
    // 0x19fd0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19fd10u;
}
