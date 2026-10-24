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

// Function: entry_00272a68
// Address: 0x272a68 - 0x272a80
void entry_00272a68_0x272a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272a68_0x272a68");
#endif

    switch (ctx->pc) {
        case 0x272a70u: goto label_272a70;
        case 0x272a7cu: goto label_272a7c;
        default: break;
    }

    ctx->pc = 0x272a68u;

    // 0x272a68: 0xc09cde0  jal         func_273780
    ctx->pc = 0x272A68u;
    SET_GPR_U32(ctx, 31, 0x272A70u);
    ctx->pc = 0x273780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273780u, 0x272A68u, 0x272A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A70u;
label_272a70:
    // 0x272a70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272a74: 0xc084964  jal         func_212590
    ctx->pc = 0x272A74u;
    SET_GPR_U32(ctx, 31, 0x272A7Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272A74u, 0x272A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A7Cu;
label_272a7c:
    // 0x272a7c: 0x0  nop
    ctx->pc = 0x272a7cu;
    // NOP
    ctx->pc = 0x272a80u;
}
