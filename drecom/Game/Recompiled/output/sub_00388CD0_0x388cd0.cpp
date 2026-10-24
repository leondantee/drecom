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

// Function: sub_00388CD0
// Address: 0x388cd0 - 0x388ce8
void sub_00388CD0_0x388cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388CD0_0x388cd0");
#endif

    ctx->pc = 0x388cd0u;

    // 0x388cd0: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388cd0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x388CD0 raw=0x43480000");
    // 0x388cd4: 0x8040096  j           func_100258
    ctx->pc = 0x388CD4u;
    ctx->pc = 0x388CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388CD4u;
    // 0x388cd8: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100258u, 0x388CD4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388CDCu;
    // 0x388cdc: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388cdcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388CDC raw=0x42C80000");
    // 0x388ce0: 0x8010032  j           func_0400C8
    ctx->pc = 0x388CE0u;
    ctx->pc = 0x388CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388CE0u;
    // 0x388ce4: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x400C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x400C8u, 0x388CE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388CE8u;
}
