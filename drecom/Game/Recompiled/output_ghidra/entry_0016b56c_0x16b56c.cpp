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

// Function: entry_0016b56c
// Address: 0x16b56c - 0x16b578
void entry_0016b56c_0x16b56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b56c_0x16b56c");
#endif

    ctx->pc = 0x16b56cu;

    // 0x16b56c: 0x8fb400a8  lw          $s4, 0xA8($sp)
    ctx->pc = 0x16b56cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16b570: 0x8fb70098  lw          $s7, 0x98($sp)
    ctx->pc = 0x16b570u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16b574: 0x0  nop
    ctx->pc = 0x16b574u;
    // NOP
    ctx->pc = 0x16b578u;
}
