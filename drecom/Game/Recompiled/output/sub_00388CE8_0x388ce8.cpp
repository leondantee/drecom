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

// Function: sub_00388CE8
// Address: 0x388ce8 - 0x388d00
void sub_00388CE8_0x388ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388CE8_0x388ce8");
#endif

    ctx->pc = 0x388ce8u;

    // 0x388ce8: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388ce8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x388CE8 raw=0x43480000");
    // 0x388cec: 0x8020064  j           func_080190
    ctx->pc = 0x388CECu;
    ctx->pc = 0x388CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388CECu;
    // 0x388cf0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x80190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x80190u, 0x388CECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388CF4u;
    // 0x388cf4: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388cf4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388CF4 raw=0x42C80000");
    // 0x388cf8: 0x8000032  j           func_0000C8
    ctx->pc = 0x388CF8u;
    ctx->pc = 0x388CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388CF8u;
    // 0x388cfc: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC8u, 0x388CF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388D00u;
}
