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

// Function: entry_00141b04
// Address: 0x141b04 - 0x141b10
void entry_00141b04_0x141b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b04_0x141b04");
#endif

    ctx->pc = 0x141b04u;

    // 0x141b04: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x141b04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6716), GPR_U32(ctx, 3));
    // 0x141b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x141b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141b0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x141b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x141b10u;
}
