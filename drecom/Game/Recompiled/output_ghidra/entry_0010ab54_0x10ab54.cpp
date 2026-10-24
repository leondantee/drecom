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

// Function: entry_0010ab54
// Address: 0x10ab54 - 0x10ab58
void entry_0010ab54_0x10ab54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ab54_0x10ab54");
#endif

    ctx->pc = 0x10ab54u;

    // 0x10ab54: 0x8c443c10  lw          $a0, 0x3C10($v0)
    ctx->pc = 0x10ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15376)));
    ctx->pc = 0x10ab58u;
}
