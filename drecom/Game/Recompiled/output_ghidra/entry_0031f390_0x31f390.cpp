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

// Function: entry_0031f390
// Address: 0x31f390 - 0x31f39c
void entry_0031f390_0x31f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f390_0x31f390");
#endif

    switch (ctx->pc) {
        case 0x31f398u: goto label_31f398;
        default: break;
    }

    ctx->pc = 0x31f390u;

    // 0x31f390: 0xc084964  jal         func_212590
    ctx->pc = 0x31F390u;
    SET_GPR_U32(ctx, 31, 0x31F398u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x31F390u, 0x31F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F398u;
label_31f398:
    // 0x31f398: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x31f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x31f39cu;
}
