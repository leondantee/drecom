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

// Function: entry_00268864
// Address: 0x268864 - 0x268868
void entry_00268864_0x268864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00268864_0x268864");
#endif

    ctx->pc = 0x268864u;

    // 0x268864: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x268864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966496)));
    ctx->pc = 0x268868u;
}
