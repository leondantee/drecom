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

// Function: entry_001101f4
// Address: 0x1101f4 - 0x1101f8
void entry_001101f4_0x1101f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001101f4_0x1101f4");
#endif

    ctx->pc = 0x1101f4u;

    // 0x1101f4: 0xac624618  sw          $v0, 0x4618($v1)
    ctx->pc = 0x1101f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17944), GPR_U32(ctx, 2));
    ctx->pc = 0x1101f8u;
}
