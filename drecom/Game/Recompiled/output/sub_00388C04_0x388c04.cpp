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

// Function: sub_00388C04
// Address: 0x388c04 - 0x388c1c
void sub_00388C04_0x388c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388C04_0x388c04");
#endif

    ctx->pc = 0x388c04u;

    // 0x388c04: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c04u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C04 raw=0x42C80000");
    // 0x388c08: 0xa020064  j           func_8080190
    ctx->pc = 0x388C08u;
    ctx->pc = 0x388C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C08u;
    // 0x388c0c: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8080190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8080190u, 0x388C08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C10u;
    // 0x388c10: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c10u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C10 raw=0x42C80000");
    // 0x388c14: 0x802012c  j           func_0804B0
    ctx->pc = 0x388C14u;
    ctx->pc = 0x388C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C14u;
    // 0x388c18: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x804B0u, 0x388C14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C1Cu;
}
