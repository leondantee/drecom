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

// Function: entry_0031e77c
// Address: 0x31e77c - 0x31e780
void entry_0031e77c_0x31e77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e77c_0x31e77c");
#endif

    ctx->pc = 0x31e77cu;

    // 0x31e77c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    ctx->pc = 0x31e780u;
}
