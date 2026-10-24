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

// Function: sub_00388C40
// Address: 0x388c40 - 0x388c90
void sub_00388C40_0x388c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388C40_0x388c40");
#endif

    ctx->pc = 0x388c40u;

    // 0x388c40: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c40u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C40 raw=0x42C80000");
    // 0x388c44: 0x8010064  j           func_040190
    ctx->pc = 0x388C44u;
    ctx->pc = 0x388C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C44u;
    // 0x388c48: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40190u, 0x388C44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C4Cu;
    // 0x388c4c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c4cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C4C raw=0x42C80000");
    // 0x388c50: 0x80100c8  j           func_040320
    ctx->pc = 0x388C50u;
    ctx->pc = 0x388C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C50u;
    // 0x388c54: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40320u, 0x388C50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C58u;
    // 0x388c58: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c58u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C58 raw=0x42C80000");
    // 0x388c5c: 0x80200fa  j           func_0803E8
    ctx->pc = 0x388C5Cu;
    ctx->pc = 0x388C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C5Cu;
    // 0x388c60: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x803E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x803E8u, 0x388C5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C64u;
    // 0x388c64: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c64u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388C64 raw=0x42C80000");
    // 0x388c68: 0x8010190  j           func_040640
    ctx->pc = 0x388C68u;
    ctx->pc = 0x388C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C68u;
    // 0x388c6c: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40640u, 0x388C68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C70u;
    // 0x388c70: 0x0  nop
    ctx->pc = 0x388c70u;
    // NOP
    // 0x388c74: 0x0  nop
    ctx->pc = 0x388c74u;
    // NOP
    // 0x388c78: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388c78u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x388C78 raw=0x43960000");
    // 0x388c7c: 0x0  nop
    ctx->pc = 0x388c7cu;
    // NOP
    // 0x388c80: 0x8060064  j           func_180190
    ctx->pc = 0x388C80u;
    ctx->pc = 0x388C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C80u;
    // 0x388c84: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180190u, 0x388C80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388C88u;
    // 0x388c88: 0x0  nop
    ctx->pc = 0x388c88u;
    // NOP
    // 0x388c8c: 0x0  nop
    ctx->pc = 0x388c8cu;
    // NOP
    ctx->pc = 0x388c90u;
}
