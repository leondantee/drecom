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

// Function: sub_00388C90
// Address: 0x388c90 - 0x388cd0
void sub_00388C90_0x388c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388C90_0x388c90");
#endif

    ctx->pc = 0x388c90u;

    // 0x388c90: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c90u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C90 raw=0x42C80000");
    // 0x388c94: 0x8020064  j           func_080190
    ctx->pc = 0x388C94u;
    ctx->pc = 0x388C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C94u;
    // 0x388c98: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x80190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x80190u, 0x388C94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C9Cu;
    // 0x388c9c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c9cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C9C raw=0x42C80000");
    // 0x388ca0: 0x8060064  j           func_180190
    ctx->pc = 0x388CA0u;
    ctx->pc = 0x388CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388CA0u;
    // 0x388ca4: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180190u, 0x388CA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388CA8u;
    // 0x388ca8: 0x0  nop
    ctx->pc = 0x388ca8u;
    // NOP
    // 0x388cac: 0x0  nop
    ctx->pc = 0x388cacu;
    // NOP
    // 0x388cb0: 0x0  nop
    ctx->pc = 0x388cb0u;
    // NOP
    // 0x388cb4: 0x0  nop
    ctx->pc = 0x388cb4u;
    // NOP
    // 0x388cb8: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388cb8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x388CB8 raw=0x43960000");
    // 0x388cbc: 0x0  nop
    ctx->pc = 0x388cbcu;
    // NOP
    // 0x388cc0: 0x8040064  j           func_100190
    ctx->pc = 0x388CC0u;
    ctx->pc = 0x388CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388CC0u;
    // 0x388cc4: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100190u, 0x388CC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388CC8u;
    // 0x388cc8: 0x0  nop
    ctx->pc = 0x388cc8u;
    // NOP
    // 0x388ccc: 0x0  nop
    ctx->pc = 0x388cccu;
    // NOP
    ctx->pc = 0x388cd0u;
}
