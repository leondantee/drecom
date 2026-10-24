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

// Function: entry_00214f80
// Address: 0x214f80 - 0x214f84
void entry_00214f80_0x214f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214f80_0x214f80");
#endif

    ctx->pc = 0x214f80u;

    // 0x214f80: 0x8c44a26c  lw          $a0, -0x5D94($v0)
    ctx->pc = 0x214f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943340)));
    ctx->pc = 0x214f84u;
}
