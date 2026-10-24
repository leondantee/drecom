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

// Function: entry_00107c28
// Address: 0x107c28 - 0x107c30
void entry_00107c28_0x107c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107c28_0x107c28");
#endif

    ctx->pc = 0x107c28u;

    // 0x107c28: 0x8042b36  j           func_10ACD8
    ctx->pc = 0x107C28u;
    ctx->pc = 0x107C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C28u;
    // 0x107c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    ps2__Error_0x10acd8(rdram, ctx, runtime); return;
    ctx->pc = 0x107C30u;
}
