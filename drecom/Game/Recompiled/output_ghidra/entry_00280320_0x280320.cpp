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

// Function: entry_00280320
// Address: 0x280320 - 0x280330
void entry_00280320_0x280320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00280320_0x280320");
#endif

    switch (ctx->pc) {
        case 0x28032cu: goto label_28032c;
        default: break;
    }

    ctx->pc = 0x280320u;

    // 0x280320: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x280320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280324: 0xc084964  jal         func_212590
    ctx->pc = 0x280324u;
    SET_GPR_U32(ctx, 31, 0x28032Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x280324u, 0x28032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28032Cu;
label_28032c:
    // 0x28032c: 0x0  nop
    ctx->pc = 0x28032cu;
    // NOP
    ctx->pc = 0x280330u;
}
