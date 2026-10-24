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

// Function: sub_00388E0C
// Address: 0x388e0c - 0x388e38
void sub_00388E0C_0x388e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388E0C_0x388e0c");
#endif

    ctx->pc = 0x388e0cu;

    // 0x388e0c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388e0cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388E0C raw=0x42C80000");
    // 0x388e10: 0x8020032  j           func_0800C8
    ctx->pc = 0x388E10u;
    ctx->pc = 0x388E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E10u;
    // 0x388e14: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x800C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x800C8u, 0x388E10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388E18u;
    // 0x388e18: 0x0  nop
    ctx->pc = 0x388e18u;
    // NOP
    // 0x388e1c: 0x0  nop
    ctx->pc = 0x388e1cu;
    // NOP
    // 0x388e20: 0x0  nop
    ctx->pc = 0x388e20u;
    // NOP
    // 0x388e24: 0x0  nop
    ctx->pc = 0x388e24u;
    // NOP
    // 0x388e28: 0x42960000  .word       0x42960000                   # INVALID     $s4, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388e28u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x388E28 raw=0x42960000");
    // 0x388e2c: 0x0  nop
    ctx->pc = 0x388e2cu;
    // NOP
    // 0x388e30: 0x3c020096  lui         $v0, 0x96
    ctx->pc = 0x388e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)150 << 16));
    // 0x388e34: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x388e34u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->pc = 0x388e38u;
}
