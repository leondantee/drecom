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

// Function: entry_0019d464
// Address: 0x19d464 - 0x19d468
void entry_0019d464_0x19d464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d464_0x19d464");
#endif

    ctx->pc = 0x19d464u;

    // 0x19d464: 0x8c24fbb8  lw          $a0, -0x448($at)
    ctx->pc = 0x19d464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966200)));
    ctx->pc = 0x19d468u;
}
