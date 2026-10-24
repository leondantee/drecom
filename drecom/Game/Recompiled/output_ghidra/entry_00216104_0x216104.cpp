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

// Function: entry_00216104
// Address: 0x216104 - 0x216110
void entry_00216104_0x216104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216104_0x216104");
#endif

    switch (ctx->pc) {
        case 0x21610cu: goto label_21610c;
        default: break;
    }

    ctx->pc = 0x216104u;

    // 0x216104: 0xc08557e  jal         func_2155F8
    ctx->pc = 0x216104u;
    SET_GPR_U32(ctx, 31, 0x21610Cu);
    ctx->pc = 0x216108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216104u;
    // 0x216108: 0x2484bc00  addiu       $a0, $a0, -0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155F8u, 0x216104u, 0x21610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21610Cu;
label_21610c:
    // 0x21610c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21610cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216110u;
}
