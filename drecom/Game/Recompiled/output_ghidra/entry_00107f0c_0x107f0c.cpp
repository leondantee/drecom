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

// Function: entry_00107f0c
// Address: 0x107f0c - 0x107f10
void entry_00107f0c_0x107f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f0c_0x107f0c");
#endif

    ctx->pc = 0x107f0cu;

    // 0x107f0c: 0x8c443c00  lw          $a0, 0x3C00($v0)
    ctx->pc = 0x107f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15360)));
    ctx->pc = 0x107f10u;
}
