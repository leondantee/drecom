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

// Function: entry_001433e8
// Address: 0x1433e8 - 0x1433fc
void entry_001433e8_0x1433e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001433e8_0x1433e8");
#endif

    switch (ctx->pc) {
        case 0x1433f4u: goto label_1433f4;
        default: break;
    }

    ctx->pc = 0x1433e8u;

    // 0x1433e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1433e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1433ec: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1433ECu;
    SET_GPR_U32(ctx, 31, 0x1433F4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1433ECu, 0x1433F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433F4u;
label_1433f4:
    // 0x1433f4: 0x1000fe9d  b           . + 4 + (-0x163 << 2)
    ctx->pc = 0x1433F4u;
    {
        const bool branch_taken_0x1433f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433f4) {
            ctx->pc = 0x142E6Cu;
            return;
        }
    }
    ctx->pc = 0x1433FCu;
}
