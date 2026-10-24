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

// Function: entry_00272f88
// Address: 0x272f88 - 0x272f98
void entry_00272f88_0x272f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272f88_0x272f88");
#endif

    switch (ctx->pc) {
        case 0x272f94u: goto label_272f94;
        default: break;
    }

    ctx->pc = 0x272f88u;

    // 0x272f88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272f8c: 0xc084964  jal         func_212590
    ctx->pc = 0x272F8Cu;
    SET_GPR_U32(ctx, 31, 0x272F94u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272F8Cu, 0x272F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F94u;
label_272f94:
    // 0x272f94: 0x0  nop
    ctx->pc = 0x272f94u;
    // NOP
    ctx->pc = 0x272f98u;
}
