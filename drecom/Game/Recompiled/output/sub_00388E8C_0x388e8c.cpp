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

// Function: sub_00388E8C
// Address: 0x388e8c - 0x388e98
void sub_00388E8C_0x388e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388E8C_0x388e8c");
#endif

    ctx->pc = 0x388e8cu;

    // 0x388e8c: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388e8cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x388E8C raw=0x43960000");
    // 0x388e90: 0x801000a  j           func_040028
    ctx->pc = 0x388E90u;
    ctx->pc = 0x388E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E90u;
    // 0x388e94: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40028u, 0x388E90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388E98u;
}
