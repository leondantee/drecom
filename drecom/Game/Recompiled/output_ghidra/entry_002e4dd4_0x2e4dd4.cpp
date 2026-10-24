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

// Function: entry_002e4dd4
// Address: 0x2e4dd4 - 0x2e4dd8
void entry_002e4dd4_0x2e4dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4dd4_0x2e4dd4");
#endif

    ctx->pc = 0x2e4dd4u;

    // 0x2e4dd4: 0xa20000a8  sb          $zero, 0xA8($s0)
    ctx->pc = 0x2e4dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2e4dd8u;
}
