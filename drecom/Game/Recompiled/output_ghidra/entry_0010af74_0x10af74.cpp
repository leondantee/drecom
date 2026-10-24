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

// Function: entry_0010af74
// Address: 0x10af74 - 0x10af7c
void entry_0010af74_0x10af74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010af74_0x10af74");
#endif

    ctx->pc = 0x10af74u;

    // 0x10af74: 0x8042be0  j           func_10AF80
    ctx->pc = 0x10AF74u;
    ctx->pc = 0x10AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF74u;
    // 0x10af78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AF80u;
    _initSeq_0x10af80(rdram, ctx, runtime); return;
    ctx->pc = 0x10AF7Cu;
}
