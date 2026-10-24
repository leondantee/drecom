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

// Function: entry_00277c10
// Address: 0x277c10 - 0x277c24
void entry_00277c10_0x277c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277c10_0x277c10");
#endif

    switch (ctx->pc) {
        case 0x277c1cu: goto label_277c1c;
        default: break;
    }

    ctx->pc = 0x277c10u;

    // 0x277c10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277c14: 0xc084964  jal         func_212590
    ctx->pc = 0x277C14u;
    SET_GPR_U32(ctx, 31, 0x277C1Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x277C14u, 0x277C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C1Cu;
label_277c1c:
    // 0x277c1c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x277C1Cu;
    {
        const bool branch_taken_0x277c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c1c) {
            ctx->pc = 0x277BB8u;
            return;
        }
    }
    ctx->pc = 0x277C24u;
}
