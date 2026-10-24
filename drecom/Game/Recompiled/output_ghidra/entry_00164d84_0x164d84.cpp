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

// Function: entry_00164d84
// Address: 0x164d84 - 0x164d98
void entry_00164d84_0x164d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164d84_0x164d84");
#endif

    switch (ctx->pc) {
        case 0x164d90u: goto label_164d90;
        default: break;
    }

    ctx->pc = 0x164d84u;

    // 0x164d84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x164d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164d88: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x164D88u;
    SET_GPR_U32(ctx, 31, 0x164D90u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x164D88u, 0x164D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D90u;
label_164d90:
    // 0x164d90: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x164D90u;
    {
        const bool branch_taken_0x164d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d90) {
            ctx->pc = 0x164E90u;
            return;
        }
    }
    ctx->pc = 0x164D98u;
}
