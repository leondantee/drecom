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

// Function: caseD_3
// Address: 0x18769c - 0x1876b0
void caseD_3_0x18769c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x18769c");
#endif

    switch (ctx->pc) {
        case 0x1876a8u: goto label_1876a8;
        default: break;
    }

    ctx->pc = 0x18769cu;

    // 0x18769c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1876a0: 0xc061014  jal         func_184050
    ctx->pc = 0x1876A0u;
    SET_GPR_U32(ctx, 31, 0x1876A8u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1876A0u, 0x1876A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876A8u;
label_1876a8:
    // 0x1876a8: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x1876A8u;
    {
        const bool branch_taken_0x1876a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876a8) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x1876B0u;
}
