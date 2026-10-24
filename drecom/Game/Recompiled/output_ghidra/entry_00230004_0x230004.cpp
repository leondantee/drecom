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

// Function: entry_00230004
// Address: 0x230004 - 0x230008
void entry_00230004_0x230004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230004_0x230004");
#endif

    ctx->pc = 0x230004u;

    // 0x230004: 0x0  nop
    ctx->pc = 0x230004u;
    // NOP
    ctx->pc = 0x230008u;
}
