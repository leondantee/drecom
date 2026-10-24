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

// Function: entry_00107e80
// Address: 0x107e80 - 0x107e8c
void entry_00107e80_0x107e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e80_0x107e80");
#endif

    ctx->pc = 0x107e80u;

    // 0x107e80: 0x8c503e44  lw          $s0, 0x3E44($v0)
    ctx->pc = 0x107e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15940)));
    // 0x107e84: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x107E84u;
    SET_GPR_U32(ctx, 31, 0x107E8Cu);
    ctx->pc = 0x107E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E84u;
    // 0x107e88: 0x2484c808  addiu       $a0, $a0, -0x37F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x107E84u, 0x107E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E8Cu;
}
