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

// Function: entry_0016b9f4
// Address: 0x16b9f4 - 0x16ba00
void entry_0016b9f4_0x16b9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b9f4_0x16b9f4");
#endif

    ctx->pc = 0x16b9f4u;

    // 0x16b9f4: 0x8fb300a4  lw          $s3, 0xA4($sp)
    ctx->pc = 0x16b9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b9f8: 0x8fb60094  lw          $s6, 0x94($sp)
    ctx->pc = 0x16b9f8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b9fc: 0x0  nop
    ctx->pc = 0x16b9fcu;
    // NOP
    ctx->pc = 0x16ba00u;
}
