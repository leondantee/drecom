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

// Function: entry_0031e6d8
// Address: 0x31e6d8 - 0x31e6dc
void entry_0031e6d8_0x31e6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e6d8_0x31e6d8");
#endif

    ctx->pc = 0x31e6d8u;

    // 0x31e6d8: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x31e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    ctx->pc = 0x31e6dcu;
}
