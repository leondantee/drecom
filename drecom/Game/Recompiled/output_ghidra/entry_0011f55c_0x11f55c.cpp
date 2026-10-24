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

// Function: entry_0011f55c
// Address: 0x11f55c - 0x11f560
void entry_0011f55c_0x11f55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f55c_0x11f55c");
#endif

    ctx->pc = 0x11f55cu;

    // 0x11f55c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x11f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x11f560u;
}
