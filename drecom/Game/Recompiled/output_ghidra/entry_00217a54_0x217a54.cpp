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

// Function: entry_00217a54
// Address: 0x217a54 - 0x217a58
void entry_00217a54_0x217a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217a54_0x217a54");
#endif

    ctx->pc = 0x217a54u;

    // 0x217a54: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x217a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x217a58u;
}
