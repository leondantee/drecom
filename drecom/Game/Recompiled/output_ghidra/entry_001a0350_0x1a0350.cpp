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

// Function: entry_001a0350
// Address: 0x1a0350 - 0x1a0358
void entry_001a0350_0x1a0350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0350_0x1a0350");
#endif

    ctx->pc = 0x1a0350u;

    // 0x1a0350: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1a0354: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1a0354u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    ctx->pc = 0x1a0358u;
}
