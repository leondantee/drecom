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

// Function: entry_0037ca10
// Address: 0x37ca10 - 0x37ca1c
void entry_0037ca10_0x37ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ca10_0x37ca10");
#endif

    ctx->pc = 0x37ca10u;

    // 0x37ca10: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x37ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37ca14: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x37CA14u;
    SET_GPR_U32(ctx, 31, 0x37CA1Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x37CA14u, 0x37CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA1Cu;
}
