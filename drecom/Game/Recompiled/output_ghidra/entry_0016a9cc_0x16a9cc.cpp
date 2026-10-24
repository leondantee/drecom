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

// Function: entry_0016a9cc
// Address: 0x16a9cc - 0x16a9d0
void entry_0016a9cc_0x16a9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a9cc_0x16a9cc");
#endif

    ctx->pc = 0x16a9ccu;

    // 0x16a9cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    ctx->pc = 0x16a9d0u;
}
