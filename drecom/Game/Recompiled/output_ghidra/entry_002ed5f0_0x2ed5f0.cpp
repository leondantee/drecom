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

// Function: entry_002ed5f0
// Address: 0x2ed5f0 - 0x2ed5f4
void entry_002ed5f0_0x2ed5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed5f0_0x2ed5f0");
#endif

    ctx->pc = 0x2ed5f0u;

    // 0x2ed5f0: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x2ed5f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2ed5f4u;
}
