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

// Function: entry_0031e6b8
// Address: 0x31e6b8 - 0x31e6bc
void entry_0031e6b8_0x31e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e6b8_0x31e6b8");
#endif

    ctx->pc = 0x31e6b8u;

    // 0x31e6b8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    ctx->pc = 0x31e6bcu;
}
