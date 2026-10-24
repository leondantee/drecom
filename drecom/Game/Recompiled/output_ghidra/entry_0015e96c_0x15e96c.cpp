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

// Function: entry_0015e96c
// Address: 0x15e96c - 0x15e970
void entry_0015e96c_0x15e96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e96c_0x15e96c");
#endif

    ctx->pc = 0x15e96cu;

    // 0x15e96c: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x15e96cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    ctx->pc = 0x15e970u;
}
