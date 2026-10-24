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

// Function: entry_0016b4c4
// Address: 0x16b4c4 - 0x16b4d0
void entry_0016b4c4_0x16b4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b4c4_0x16b4c4");
#endif

    ctx->pc = 0x16b4c4u;

    // 0x16b4c4: 0x8fb300a4  lw          $s3, 0xA4($sp)
    ctx->pc = 0x16b4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b4c8: 0x8fb60094  lw          $s6, 0x94($sp)
    ctx->pc = 0x16b4c8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b4cc: 0x0  nop
    ctx->pc = 0x16b4ccu;
    // NOP
    ctx->pc = 0x16b4d0u;
}
