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

// Function: entry_0020e18c
// Address: 0x20e18c - 0x20e194
void entry_0020e18c_0x20e18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e18c_0x20e18c");
#endif

    ctx->pc = 0x20e18cu;

    // 0x20e18c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e190: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20e190u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x20e194u;
}
