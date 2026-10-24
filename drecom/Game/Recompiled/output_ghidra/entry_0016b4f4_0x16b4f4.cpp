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

// Function: entry_0016b4f4
// Address: 0x16b4f4 - 0x16b500
void entry_0016b4f4_0x16b4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b4f4_0x16b4f4");
#endif

    ctx->pc = 0x16b4f4u;

    // 0x16b4f4: 0x8fb000c4  lw          $s0, 0xC4($sp)
    ctx->pc = 0x16b4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16b4f8: 0x8fb100b4  lw          $s1, 0xB4($sp)
    ctx->pc = 0x16b4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16b4fc: 0x0  nop
    ctx->pc = 0x16b4fcu;
    // NOP
    ctx->pc = 0x16b500u;
}
