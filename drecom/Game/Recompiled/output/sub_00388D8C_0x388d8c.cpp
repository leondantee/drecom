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

// Function: sub_00388D8C
// Address: 0x388d8c - 0x388d98
void sub_00388D8C_0x388d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388D8C_0x388d8c");
#endif

    ctx->pc = 0x388d8cu;

    // 0x388d8c: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d8cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x388D8C raw=0x43160000");
    // 0x388d90: 0x8010023  j           func_04008C
    ctx->pc = 0x388D90u;
    ctx->pc = 0x388D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D90u;
    // 0x388d94: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4008Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4008Cu, 0x388D90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388D98u;
}
