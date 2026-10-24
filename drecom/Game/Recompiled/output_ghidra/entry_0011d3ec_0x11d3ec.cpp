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

// Function: entry_0011d3ec
// Address: 0x11d3ec - 0x11d408
void entry_0011d3ec_0x11d3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d3ec_0x11d3ec");
#endif

    switch (ctx->pc) {
        case 0x11d3f8u: goto label_11d3f8;
        case 0x11d404u: goto label_11d404;
        default: break;
    }

    ctx->pc = 0x11d3ecu;

    // 0x11d3ec: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x11d3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x11d3f0: 0xc047520  jal         func_11D480
    ctx->pc = 0x11D3F0u;
    SET_GPR_U32(ctx, 31, 0x11D3F8u);
    ctx->pc = 0x11D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3F0u;
    // 0x11d3f4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x11D3F0u, 0x11D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3F8u;
label_11d3f8:
    // 0x11d3f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3fc: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11D3FCu;
    SET_GPR_U32(ctx, 31, 0x11D404u);
    ctx->pc = 0x11D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3FCu;
    // 0x11d400: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11D3FCu, 0x11D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D404u;
label_11d404:
    // 0x11d404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11d408u;
}
