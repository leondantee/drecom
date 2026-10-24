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

// Function: sub_00388D98
// Address: 0x388d98 - 0x388da4
void sub_00388D98_0x388d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388D98_0x388d98");
#endif

    ctx->pc = 0x388d98u;

    // 0x388d98: 0x0  nop
    ctx->pc = 0x388d98u;
    // NOP
    // 0x388d9c: 0x8060000  j           func_180000
    ctx->pc = 0x388D9Cu;
    ctx->pc = 0x388DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D9Cu;
    // 0x388da0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180000u, 0x388D9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388DA4u;
}
