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

// Function: entry_0010f4c8
// Address: 0x10f4c8 - 0x10f4cc
void entry_0010f4c8_0x10f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f4c8_0x10f4c8");
#endif

    ctx->pc = 0x10f4c8u;

    // 0x10f4c8: 0x8c6445bc  lw          $a0, 0x45BC($v1)
    ctx->pc = 0x10f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17852)));
    ctx->pc = 0x10f4ccu;
}
