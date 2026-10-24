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

// Function: sub_00388DE8
// Address: 0x388de8 - 0x388df4
void sub_00388DE8_0x388de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388DE8_0x388de8");
#endif

    ctx->pc = 0x388de8u;

    // 0x388de8: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388de8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388DE8 raw=0x42C80000");
    // 0x388dec: 0x8000019  j           func_000064
    ctx->pc = 0x388DECu;
    ctx->pc = 0x388DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388DECu;
    // 0x388df0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x64u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x64u, 0x388DECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388DF4u;
}
