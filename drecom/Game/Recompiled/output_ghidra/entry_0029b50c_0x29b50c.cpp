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

// Function: entry_0029b50c
// Address: 0x29b50c - 0x29b510
void entry_0029b50c_0x29b50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b50c_0x29b50c");
#endif

    ctx->pc = 0x29b50cu;

    // 0x29b50c: 0xffa001a8  sd          $zero, 0x1A8($sp)
    ctx->pc = 0x29b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 0));
    ctx->pc = 0x29b510u;
}
