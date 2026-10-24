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

// Function: sub_00388E38
// Address: 0x388e38 - 0x388e48
void sub_00388E38_0x388e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388E38_0x388e38");
#endif

    ctx->pc = 0x388e38u;

    // 0x388e38: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x388e38u;
    SET_GPR_U32(ctx, 8, 0x00000000);
    // 0x388e3c: 0x8010050  j           func_040140
    ctx->pc = 0x388E3Cu;
    ctx->pc = 0x388E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E3Cu;
    // 0x388e40: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40140u, 0x388E3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388E44u;
    // 0x388e44: 0x0  nop
    ctx->pc = 0x388e44u;
    // NOP
    ctx->pc = 0x388e48u;
}
