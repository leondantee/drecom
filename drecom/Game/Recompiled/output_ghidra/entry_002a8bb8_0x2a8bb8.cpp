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

// Function: entry_002a8bb8
// Address: 0x2a8bb8 - 0x2a8bc8
void entry_002a8bb8_0x2a8bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8bb8_0x2a8bb8");
#endif

    ctx->pc = 0x2a8bb8u;

    // 0x2a8bb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8bbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8bc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8bc4: 0xa0640052  sb          $a0, 0x52($v1)
    ctx->pc = 0x2a8bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 82), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2a8bc8u;
}
