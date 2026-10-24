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

// Function: entry_0018bf9c
// Address: 0x18bf9c - 0x18bfc0
void entry_0018bf9c_0x18bf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bf9c_0x18bf9c");
#endif

    switch (ctx->pc) {
        case 0x18bfa8u: goto label_18bfa8;
        case 0x18bfb4u: goto label_18bfb4;
        default: break;
    }

    ctx->pc = 0x18bf9cu;

    // 0x18bf9c: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x18bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18bfa0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18BFA0u;
    SET_GPR_U32(ctx, 31, 0x18BFA8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BFA0u, 0x18BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFA8u;
label_18bfa8:
    // 0x18bfa8: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x18bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x18bfac: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18BFACu;
    SET_GPR_U32(ctx, 31, 0x18BFB4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BFACu, 0x18BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFB4u;
label_18bfb4:
    // 0x18bfb4: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x18bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x18bfb8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18BFB8u;
    SET_GPR_U32(ctx, 31, 0x18BFC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BFB8u, 0x18BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFC0u;
}
