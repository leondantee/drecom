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

// Function: entry_0018bff0
// Address: 0x18bff0 - 0x18bffc
void entry_0018bff0_0x18bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bff0_0x18bff0");
#endif

    ctx->pc = 0x18bff0u;

    // 0x18bff0: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x18bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x18bff4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18BFF4u;
    SET_GPR_U32(ctx, 31, 0x18BFFCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BFF4u, 0x18BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFFCu;
}
