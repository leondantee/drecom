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

// Function: sub_00388D80
// Address: 0x388d80 - 0x388d8c
void sub_00388D80_0x388d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388D80_0x388d80");
#endif

    ctx->pc = 0x388d80u;

    // 0x388d80: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d80u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x388D80 raw=0x43160000");
    // 0x388d84: 0x8000023  j           func_00008C
    ctx->pc = 0x388D84u;
    ctx->pc = 0x388D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D84u;
    // 0x388d88: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8Cu, 0x388D84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388D8Cu;
}
