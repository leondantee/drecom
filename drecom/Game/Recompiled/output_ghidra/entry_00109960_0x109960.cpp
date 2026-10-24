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

// Function: entry_00109960
// Address: 0x109960 - 0x109970
void entry_00109960_0x109960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109960_0x109960");
#endif

    switch (ctx->pc) {
        case 0x10996cu: goto label_10996c;
        default: break;
    }

    ctx->pc = 0x109960u;

    // 0x109960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109964: 0xc04240a  jal         func_109028
    ctx->pc = 0x109964u;
    SET_GPR_U32(ctx, 31, 0x10996Cu);
    ctx->pc = 0x109968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109964u;
    // 0x109968: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109964u, 0x10996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10996Cu;
label_10996c:
    // 0x10996c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109970u;
}
