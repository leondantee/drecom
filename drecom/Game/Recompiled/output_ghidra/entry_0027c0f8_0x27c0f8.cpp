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

// Function: entry_0027c0f8
// Address: 0x27c0f8 - 0x27c10c
void entry_0027c0f8_0x27c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c0f8_0x27c0f8");
#endif

    switch (ctx->pc) {
        case 0x27c104u: goto label_27c104;
        default: break;
    }

    ctx->pc = 0x27c0f8u;

    // 0x27c0f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c0fc: 0xc084964  jal         func_212590
    ctx->pc = 0x27C0FCu;
    SET_GPR_U32(ctx, 31, 0x27C104u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C0FCu, 0x27C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C104u;
label_27c104:
    // 0x27c104: 0x1000fecd  b           . + 4 + (-0x133 << 2)
    ctx->pc = 0x27C104u;
    {
        const bool branch_taken_0x27c104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c104) {
            ctx->pc = 0x27BC3Cu;
            return;
        }
    }
    ctx->pc = 0x27C10Cu;
}
