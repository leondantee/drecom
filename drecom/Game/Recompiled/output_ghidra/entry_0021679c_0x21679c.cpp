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

// Function: entry_0021679c
// Address: 0x21679c - 0x2167b0
void entry_0021679c_0x21679c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021679c_0x21679c");
#endif

    switch (ctx->pc) {
        case 0x2167acu: goto label_2167ac;
        default: break;
    }

    ctx->pc = 0x21679cu;

    // 0x21679c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x21679cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2167a0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2167a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2167a4: 0xc0858c8  jal         func_216320
    ctx->pc = 0x2167A4u;
    SET_GPR_U32(ctx, 31, 0x2167ACu);
    ctx->pc = 0x2167A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167A4u;
    // 0x2167a8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x2167A4u, 0x2167ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167ACu;
label_2167ac:
    // 0x2167ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2167acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2167b0u;
}
