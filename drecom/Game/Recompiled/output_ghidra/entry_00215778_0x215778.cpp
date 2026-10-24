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

// Function: entry_00215778
// Address: 0x215778 - 0x215780
void entry_00215778_0x215778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215778_0x215778");
#endif

    ctx->pc = 0x215778u;

    // 0x215778: 0x808544e  j           func_215138
    ctx->pc = 0x215778u;
    ctx->pc = 0x21577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215778u;
    // 0x21577c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215138u;
    isceSifSendCmd_0x215138(rdram, ctx, runtime); return;
    ctx->pc = 0x215780u;
}
