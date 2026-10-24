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

// Function: entry_0010cab0
// Address: 0x10cab0 - 0x10cab8
void entry_0010cab0_0x10cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cab0_0x10cab0");
#endif

    ctx->pc = 0x10cab0u;

    // 0x10cab0: 0x8042f4a  j           func_10BD28
    ctx->pc = 0x10CAB0u;
    ctx->pc = 0x10CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAB0u;
    // 0x10cab4: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD28u;
    _send_to_iop_0x10bd28(rdram, ctx, runtime); return;
    ctx->pc = 0x10CAB8u;
}
