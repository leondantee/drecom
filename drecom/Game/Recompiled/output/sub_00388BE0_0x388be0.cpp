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

// Function: sub_00388BE0
// Address: 0x388be0 - 0x388bec
void sub_00388BE0_0x388be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388BE0_0x388be0");
#endif

    ctx->pc = 0x388be0u;

    // 0x388be0: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388be0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388BE0 raw=0x42C80000");
    // 0x388be4: 0x8000032  j           func_0000C8
    ctx->pc = 0x388BE4u;
    ctx->pc = 0x388BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388BE4u;
    // 0x388be8: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC8u, 0x388BE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388BECu;
}
