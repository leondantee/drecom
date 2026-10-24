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

// Function: entry_00187fa8
// Address: 0x187fa8 - 0x187fbc
void entry_00187fa8_0x187fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187fa8_0x187fa8");
#endif

    switch (ctx->pc) {
        case 0x187fb4u: goto label_187fb4;
        default: break;
    }

    ctx->pc = 0x187fa8u;

    // 0x187fa8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x187fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x187fac: 0xc061014  jal         func_184050
    ctx->pc = 0x187FACu;
    SET_GPR_U32(ctx, 31, 0x187FB4u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187FACu, 0x187FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FB4u;
label_187fb4:
    // 0x187fb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x187FB4u;
    {
        const bool branch_taken_0x187fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fb4) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187FBCu;
}
