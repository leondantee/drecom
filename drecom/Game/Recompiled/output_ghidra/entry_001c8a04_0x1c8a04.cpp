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

// Function: entry_001c8a04
// Address: 0x1c8a04 - 0x1c8a0c
void entry_001c8a04_0x1c8a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8a04_0x1c8a04");
#endif

    ctx->pc = 0x1c8a04u;

    // 0x1c8a04: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a08: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1c8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x1c8a0cu;
}
