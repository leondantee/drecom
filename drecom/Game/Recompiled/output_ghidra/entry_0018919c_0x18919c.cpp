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

// Function: entry_0018919c
// Address: 0x18919c - 0x1891a0
void entry_0018919c_0x18919c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018919c_0x18919c");
#endif

    ctx->pc = 0x18919cu;

    // 0x18919c: 0xac202500  sw          $zero, 0x2500($at)
    ctx->pc = 0x18919cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9472), GPR_U32(ctx, 0));
    ctx->pc = 0x1891a0u;
}
