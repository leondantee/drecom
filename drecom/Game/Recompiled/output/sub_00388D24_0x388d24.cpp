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

// Function: sub_00388D24
// Address: 0x388d24 - 0x388d30
void sub_00388D24_0x388d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388D24_0x388d24");
#endif

    ctx->pc = 0x388d24u;

    // 0x388d24: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d24u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x388D24 raw=0x43FA0000");
    // 0x388d28: 0x802012c  j           func_0804B0
    ctx->pc = 0x388D28u;
    ctx->pc = 0x388D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D28u;
    // 0x388d2c: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x804B0u, 0x388D28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388D30u;
}
