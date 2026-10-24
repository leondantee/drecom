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

// Function: entry_001a2d58
// Address: 0x1a2d58 - 0x1a2d5c
void entry_001a2d58_0x1a2d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2d58_0x1a2d58");
#endif

    ctx->pc = 0x1a2d58u;

    // 0x1a2d58: 0xac200b00  sw          $zero, 0xB00($at)
    ctx->pc = 0x1a2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2816), GPR_U32(ctx, 0));
    ctx->pc = 0x1a2d5cu;
}
