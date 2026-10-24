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

// Function: entry_0027aee8
// Address: 0x27aee8 - 0x27af08
void entry_0027aee8_0x27aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027aee8_0x27aee8");
#endif

    switch (ctx->pc) {
        case 0x27aef4u: goto label_27aef4;
        case 0x27af00u: goto label_27af00;
        default: break;
    }

    ctx->pc = 0x27aee8u;

    // 0x27aee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aeec: 0xc0a1120  jal         func_284480
    ctx->pc = 0x27AEECu;
    SET_GPR_U32(ctx, 31, 0x27AEF4u);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x27AEECu, 0x27AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEF4u;
label_27aef4:
    // 0x27aef4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aef8: 0xc084964  jal         func_212590
    ctx->pc = 0x27AEF8u;
    SET_GPR_U32(ctx, 31, 0x27AF00u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AEF8u, 0x27AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF00u;
label_27af00:
    // 0x27af00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27af00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27af04: 0x0  nop
    ctx->pc = 0x27af04u;
    // NOP
    ctx->pc = 0x27af08u;
}
