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

// Function: entry_001f73c0
// Address: 0x1f73c0 - 0x1f73cc
void entry_001f73c0_0x1f73c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f73c0_0x1f73c0");
#endif

    ctx->pc = 0x1f73c0u;

    // 0x1f73c0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f73c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f73c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f73c8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f73c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f73ccu;
}
