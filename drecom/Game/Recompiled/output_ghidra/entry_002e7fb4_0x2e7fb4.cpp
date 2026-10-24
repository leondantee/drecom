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

// Function: entry_002e7fb4
// Address: 0x2e7fb4 - 0x2e7fb8
void entry_002e7fb4_0x2e7fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7fb4_0x2e7fb4");
#endif

    ctx->pc = 0x2e7fb4u;

    // 0x2e7fb4: 0xa20000ea  sb          $zero, 0xEA($s0)
    ctx->pc = 0x2e7fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 234), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2e7fb8u;
}
