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

// Function: entry_00187f80
// Address: 0x187f80 - 0x187f94
void entry_00187f80_0x187f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f80_0x187f80");
#endif

    switch (ctx->pc) {
        case 0x187f8cu: goto label_187f8c;
        default: break;
    }

    ctx->pc = 0x187f80u;

    // 0x187f80: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x187f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x187f84: 0xc061014  jal         func_184050
    ctx->pc = 0x187F84u;
    SET_GPR_U32(ctx, 31, 0x187F8Cu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F84u, 0x187F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F8Cu;
label_187f8c:
    // 0x187f8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x187F8Cu;
    {
        const bool branch_taken_0x187f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f8c) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187F94u;
}
