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

// Function: entry_002e60a8
// Address: 0x2e60a8 - 0x2e60b0
void entry_002e60a8_0x2e60a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e60a8_0x2e60a8");
#endif

    ctx->pc = 0x2e60a8u;

    // 0x2e60a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e60ac: 0xa2020083  sb          $v0, 0x83($s0)
    ctx->pc = 0x2e60acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e60b0u;
}
