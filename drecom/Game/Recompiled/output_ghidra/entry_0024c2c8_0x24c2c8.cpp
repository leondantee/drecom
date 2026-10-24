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

// Function: entry_0024c2c8
// Address: 0x24c2c8 - 0x24c2d0
void entry_0024c2c8_0x24c2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c2c8_0x24c2c8");
#endif

    ctx->pc = 0x24c2c8u;

    // 0x24c2c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24c2cc: 0xac700104  sw          $s0, 0x104($v1)
    ctx->pc = 0x24c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 16));
    ctx->pc = 0x24c2d0u;
}
