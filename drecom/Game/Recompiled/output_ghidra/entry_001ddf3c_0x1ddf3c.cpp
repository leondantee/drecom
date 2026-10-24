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

// Function: entry_001ddf3c
// Address: 0x1ddf3c - 0x1ddf40
void entry_001ddf3c_0x1ddf3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddf3c_0x1ddf3c");
#endif

    ctx->pc = 0x1ddf3cu;

    // 0x1ddf3c: 0xa7b100f4  sh          $s1, 0xF4($sp)
    ctx->pc = 0x1ddf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 17));
    ctx->pc = 0x1ddf40u;
}
