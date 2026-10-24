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

// Function: entry_002159d0
// Address: 0x2159d0 - 0x2159d8
void entry_002159d0_0x2159d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002159d0_0x2159d0");
#endif

    ctx->pc = 0x2159d0u;

    // 0x2159d0: 0x808544e  j           func_215138
    ctx->pc = 0x2159D0u;
    ctx->pc = 0x2159D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2159D0u;
    // 0x2159d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215138u;
    isceSifSendCmd_0x215138(rdram, ctx, runtime); return;
    ctx->pc = 0x2159D8u;
}
