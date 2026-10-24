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

// Function: entry_0010ff84
// Address: 0x10ff84 - 0x10ff88
void entry_0010ff84_0x10ff84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ff84_0x10ff84");
#endif

    ctx->pc = 0x10ff84u;

    // 0x10ff84: 0x8e6267c0  lw          $v0, 0x67C0($s3)
    ctx->pc = 0x10ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26560)));
    ctx->pc = 0x10ff88u;
}
