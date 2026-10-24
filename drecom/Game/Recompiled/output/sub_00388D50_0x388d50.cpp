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

// Function: sub_00388D50
// Address: 0x388d50 - 0x388d80
void sub_00388D50_0x388d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388D50_0x388d50");
#endif

    ctx->pc = 0x388d50u;

    // 0x388d50: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d50u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x388D50 raw=0x43160000");
    // 0x388d54: 0x8010064  j           func_040190
    ctx->pc = 0x388D54u;
    ctx->pc = 0x388D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D54u;
    // 0x388d58: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40190u, 0x388D54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388D5Cu;
    // 0x388d5c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d5cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388D5C raw=0x42C80000");
    // 0x388d60: 0x80100c8  j           func_040320
    ctx->pc = 0x388D60u;
    ctx->pc = 0x388D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D60u;
    // 0x388d64: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40320u, 0x388D60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388D68u;
    // 0x388d68: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d68u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388D68 raw=0x42C80000");
    // 0x388d6c: 0x80200fa  j           func_0803E8
    ctx->pc = 0x388D6Cu;
    ctx->pc = 0x388D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D6Cu;
    // 0x388d70: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x803E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x803E8u, 0x388D6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388D74u;
    // 0x388d74: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d74u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388D74 raw=0x42C80000");
    // 0x388d78: 0x8010190  j           func_040640
    ctx->pc = 0x388D78u;
    ctx->pc = 0x388D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D78u;
    // 0x388d7c: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40640u, 0x388D78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388D80u;
}
