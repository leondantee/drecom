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

// Function: entry_0010f9a0
// Address: 0x10f9a0 - 0x10f9a4
void entry_0010f9a0_0x10f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f9a0_0x10f9a0");
#endif

    ctx->pc = 0x10f9a0u;

    // 0x10f9a0: 0xac4045f0  sw          $zero, 0x45F0($v0)
    ctx->pc = 0x10f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17904), GPR_U32(ctx, 0));
    ctx->pc = 0x10f9a4u;
}
