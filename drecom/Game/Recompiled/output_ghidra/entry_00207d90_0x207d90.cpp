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

// Function: entry_00207d90
// Address: 0x207d90 - 0x207dc8
void entry_00207d90_0x207d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207d90_0x207d90");
#endif

    switch (ctx->pc) {
        case 0x207da0u: goto label_207da0;
        default: break;
    }

    ctx->pc = 0x207d90u;

    // 0x207d90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d94: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x207d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x207d98: 0xc0ba6b8  jal         func_2E9AE0
    ctx->pc = 0x207D98u;
    SET_GPR_U32(ctx, 31, 0x207DA0u);
    ctx->pc = 0x2E9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9AE0u, 0x207D98u, 0x207DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DA0u;
label_207da0:
    // 0x207da0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207da4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207da8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x207da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x207dac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207db0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207DB0u;
    {
        const bool branch_taken_0x207db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207db0) {
            ctx->pc = 0x207DC8u;
            return;
        }
    }
    ctx->pc = 0x207DB8u;
    // 0x207db8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207dbc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x207dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x207dc0: 0xc0bad88  jal         func_2EB620
    ctx->pc = 0x207DC0u;
    SET_GPR_U32(ctx, 31, 0x207DC8u);
    ctx->pc = 0x2EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB620u, 0x207DC0u, 0x207DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DC8u;
}
