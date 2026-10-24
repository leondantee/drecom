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

// Function: sub_00388DF4
// Address: 0x388df4 - 0x388e00
void sub_00388DF4_0x388df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388DF4_0x388df4");
#endif

    ctx->pc = 0x388df4u;

    // 0x388df4: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388df4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388DF4 raw=0x42C80000");
    // 0x388df8: 0x8010019  j           func_040064
    ctx->pc = 0x388DF8u;
    ctx->pc = 0x388DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388DF8u;
    // 0x388dfc: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40064u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40064u, 0x388DF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388E00u;
}
