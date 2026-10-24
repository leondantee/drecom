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

// Function: entry_0032b978
// Address: 0x32b978 - 0x32b980
void entry_0032b978_0x32b978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b978_0x32b978");
#endif

    ctx->pc = 0x32b978u;

    // 0x32b978: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x32b978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x32b97c: 0x0  nop
    ctx->pc = 0x32b97cu;
    // NOP
    ctx->pc = 0x32b980u;
}
