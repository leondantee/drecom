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

// Function: entry_001165d4
// Address: 0x1165d4 - 0x1165e0
void entry_001165d4_0x1165d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001165d4_0x1165d4");
#endif

    ctx->pc = 0x1165d4u;

    // 0x1165d4: 0x8fb3002c  lw          $s3, 0x2C($sp)
    ctx->pc = 0x1165d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1165d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1165d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1165dc: 0x8fb50058  lw          $s5, 0x58($sp)
    ctx->pc = 0x1165dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x1165e0u;
}
