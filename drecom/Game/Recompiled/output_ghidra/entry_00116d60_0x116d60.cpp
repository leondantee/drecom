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

// Function: entry_00116d60
// Address: 0x116d60 - 0x116d7c
void entry_00116d60_0x116d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d60_0x116d60");
#endif

    switch (ctx->pc) {
        case 0x116d74u: goto label_116d74;
        default: break;
    }

    ctx->pc = 0x116d60u;

    // 0x116d60: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116d64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d68: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116d6c: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116D6Cu;
    SET_GPR_U32(ctx, 31, 0x116D74u);
    ctx->pc = 0x116D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D6Cu;
    // 0x116d70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116D6Cu, 0x116D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D74u;
label_116d74:
    // 0x116d74: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x116d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x116d78: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x116d7cu;
}
