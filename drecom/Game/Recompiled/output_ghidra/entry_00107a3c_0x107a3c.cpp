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

// Function: entry_00107a3c
// Address: 0x107a3c - 0x107a40
void entry_00107a3c_0x107a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a3c_0x107a3c");
#endif

    ctx->pc = 0x107a3cu;

    // 0x107a3c: 0x8d223d78  lw          $v0, 0x3D78($t1)
    ctx->pc = 0x107a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15736)));
    ctx->pc = 0x107a40u;
}
