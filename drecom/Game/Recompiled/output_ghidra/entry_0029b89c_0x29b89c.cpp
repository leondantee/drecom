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

// Function: entry_0029b89c
// Address: 0x29b89c - 0x29b8a0
void entry_0029b89c_0x29b89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b89c_0x29b89c");
#endif

    ctx->pc = 0x29b89cu;

    // 0x29b89c: 0xffa001e0  sd          $zero, 0x1E0($sp)
    ctx->pc = 0x29b89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 0));
    ctx->pc = 0x29b8a0u;
}
