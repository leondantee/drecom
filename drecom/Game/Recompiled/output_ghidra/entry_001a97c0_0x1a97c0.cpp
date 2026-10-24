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

// Function: entry_001a97c0
// Address: 0x1a97c0 - 0x1a97c4
void entry_001a97c0_0x1a97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a97c0_0x1a97c0");
#endif

    ctx->pc = 0x1a97c0u;

    // 0x1a97c0: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x1a97c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1a97c4u;
}
