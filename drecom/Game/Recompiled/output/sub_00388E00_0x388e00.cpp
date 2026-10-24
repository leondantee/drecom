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

// Function: sub_00388E00
// Address: 0x388e00 - 0x388e0c
void sub_00388E00_0x388e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388E00_0x388e00");
#endif

    ctx->pc = 0x388e00u;

    // 0x388e00: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388e00u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388E00 raw=0x42C80000");
    // 0x388e04: 0x8020028  j           func_0800A0
    ctx->pc = 0x388E04u;
    ctx->pc = 0x388E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E04u;
    // 0x388e08: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x800A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x800A0u, 0x388E04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388E0Cu;
}
