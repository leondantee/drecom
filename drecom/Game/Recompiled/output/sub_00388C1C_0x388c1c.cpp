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

// Function: sub_00388C1C
// Address: 0x388c1c - 0x388c40
void sub_00388C1C_0x388c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388C1C_0x388c1c");
#endif

    ctx->pc = 0x388c1cu;

    // 0x388c1c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c1cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C1C raw=0x42C80000");
    // 0x388c20: 0x8040000  j           func_100000
    ctx->pc = 0x388C20u;
    ctx->pc = 0x388C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C20u;
    // 0x388c24: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100000u, 0x388C20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C28u;
    // 0x388c28: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c28u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C28 raw=0x42C80000");
    // 0x388c2c: 0x8070032  j           func_1C00C8
    ctx->pc = 0x388C2Cu;
    ctx->pc = 0x388C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C2Cu;
    // 0x388c30: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00C8u, 0x388C2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C34u;
    // 0x388c34: 0x0  nop
    ctx->pc = 0x388c34u;
    // NOP
    // 0x388c38: 0x0  nop
    ctx->pc = 0x388c38u;
    // NOP
    // 0x388c3c: 0x0  nop
    ctx->pc = 0x388c3cu;
    // NOP
    ctx->pc = 0x388c40u;
}
