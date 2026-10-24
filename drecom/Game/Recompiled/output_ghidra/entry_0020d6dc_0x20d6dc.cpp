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

// Function: entry_0020d6dc
// Address: 0x20d6dc - 0x20d6e4
void entry_0020d6dc_0x20d6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d6dc_0x20d6dc");
#endif

    ctx->pc = 0x20d6dcu;

    // 0x20d6dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6e0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20d6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x20d6e4u;
}
