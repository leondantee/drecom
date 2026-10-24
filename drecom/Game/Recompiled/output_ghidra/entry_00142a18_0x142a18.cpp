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

// Function: entry_00142a18
// Address: 0x142a18 - 0x142a2c
void entry_00142a18_0x142a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142a18_0x142a18");
#endif

    switch (ctx->pc) {
        case 0x142a24u: goto label_142a24;
        default: break;
    }

    ctx->pc = 0x142a18u;

    // 0x142a18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142a1c: 0xc06750c  jal         func_19D430
    ctx->pc = 0x142A1Cu;
    SET_GPR_U32(ctx, 31, 0x142A24u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x142A1Cu, 0x142A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A24u;
label_142a24:
    // 0x142a24: 0x1000fec6  b           . + 4 + (-0x13A << 2)
    ctx->pc = 0x142A24u;
    {
        const bool branch_taken_0x142a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142a24) {
            ctx->pc = 0x142540u;
            return;
        }
    }
    ctx->pc = 0x142A2Cu;
}
