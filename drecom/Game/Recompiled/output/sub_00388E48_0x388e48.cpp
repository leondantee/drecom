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

// Function: sub_00388E48
// Address: 0x388e48 - 0x388e80
void sub_00388E48_0x388e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388E48_0x388e48");
#endif

    ctx->pc = 0x388e48u;

    // 0x388e48: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x388e48u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x388E48 raw=0x447A0000");
    // 0x388e4c: 0x180000fa  blez        $zero, . + 4 + (0xFA << 2)
    ctx->pc = 0x388E4Cu;
    {
        const bool branch_taken_0x388e4c = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x388E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E4Cu;
        // 0x388e50: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e4c) {
            ctx->pc = 0x389238u;
            return;
        }
    }
    ctx->pc = 0x388E54u;
    // 0x388e54: 0x0  nop
    ctx->pc = 0x388e54u;
    // NOP
    // 0x388e58: 0x0  nop
    ctx->pc = 0x388e58u;
    // NOP
    // 0x388e5c: 0x0  nop
    ctx->pc = 0x388e5cu;
    // NOP
    // 0x388e60: 0x0  nop
    ctx->pc = 0x388e60u;
    // NOP
    // 0x388e64: 0x0  nop
    ctx->pc = 0x388e64u;
    // NOP
    // 0x388e68: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388e68u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x388E68 raw=0x43960000");
    // 0x388e6c: 0x0  nop
    ctx->pc = 0x388e6cu;
    // NOP
    // 0x388e70: 0x8000064  j           func_000190
    ctx->pc = 0x388E70u;
    ctx->pc = 0x388E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E70u;
    // 0x388e74: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190u, 0x388E70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388E78u;
    // 0x388e78: 0x0  nop
    ctx->pc = 0x388e78u;
    // NOP
    // 0x388e7c: 0x0  nop
    ctx->pc = 0x388e7cu;
    // NOP
    ctx->pc = 0x388e80u;
}
