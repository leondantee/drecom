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

// Function: entry_00116e80
// Address: 0x116e80 - 0x116e84
void entry_00116e80_0x116e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e80_0x116e80");
#endif

    ctx->pc = 0x116e80u;

    // 0x116e80: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x116e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x116e84u;
}
