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

// Function: entry_001088b0
// Address: 0x1088b0 - 0x1088b8
void entry_001088b0_0x1088b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001088b0_0x1088b0");
#endif

    ctx->pc = 0x1088b0u;

    // 0x1088b0: 0x804217a  j           func_1085E8
    ctx->pc = 0x1088B0u;
    ctx->pc = 0x1088B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1088B0u;
    // 0x1088b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085E8u;
    _markOutput_0x1085e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1088B8u;
}
