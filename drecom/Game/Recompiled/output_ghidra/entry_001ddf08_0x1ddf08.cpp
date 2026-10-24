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

// Function: entry_001ddf08
// Address: 0x1ddf08 - 0x1ddf0c
void entry_001ddf08_0x1ddf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddf08_0x1ddf08");
#endif

    ctx->pc = 0x1ddf08u;

    // 0x1ddf08: 0xa7b400f2  sh          $s4, 0xF2($sp)
    ctx->pc = 0x1ddf08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 242), (uint16_t)GPR_U32(ctx, 20));
    ctx->pc = 0x1ddf0cu;
}
