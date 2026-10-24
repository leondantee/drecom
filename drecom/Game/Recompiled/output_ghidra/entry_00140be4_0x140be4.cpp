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

// Function: entry_00140be4
// Address: 0x140be4 - 0x140c10
void entry_00140be4_0x140be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140be4_0x140be4");
#endif

    switch (ctx->pc) {
        case 0x140c00u: goto label_140c00;
        case 0x140c08u: goto label_140c08;
        default: break;
    }

    ctx->pc = 0x140be4u;

    // 0x140be4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140be8: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x140be8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140bec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x140becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x140bf0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140BF0u;
    {
        const bool branch_taken_0x140bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bf0) {
            ctx->pc = 0x140C10u;
            return;
        }
    }
    ctx->pc = 0x140BF8u;
    // 0x140bf8: 0xc0639ec  jal         func_18E7B0
    ctx->pc = 0x140BF8u;
    SET_GPR_U32(ctx, 31, 0x140C00u);
    ctx->pc = 0x18E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E7B0u, 0x140BF8u, 0x140C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C00u;
label_140c00:
    // 0x140c00: 0xc0a71dc  jal         func_29C770
    ctx->pc = 0x140C00u;
    SET_GPR_U32(ctx, 31, 0x140C08u);
    ctx->pc = 0x29C770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C770u, 0x140C00u, 0x140C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C08u;
label_140c08:
    // 0x140c08: 0xc050738  jal         func_141CE0
    ctx->pc = 0x140C08u;
    SET_GPR_U32(ctx, 31, 0x140C10u);
    ctx->pc = 0x141CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141CE0u, 0x140C08u, 0x140C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C10u;
}
