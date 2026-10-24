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

// Function: entry_0010f104
// Address: 0x10f104 - 0x10f110
void entry_0010f104_0x10f104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f104_0x10f104");
#endif

    ctx->pc = 0x10f104u;

    // 0x10f104: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10f104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10f108: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x10f108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x10f10c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x10f110u;
}
