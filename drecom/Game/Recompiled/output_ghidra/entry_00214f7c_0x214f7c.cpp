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

// Function: entry_00214f7c
// Address: 0x214f7c - 0x214f80
void entry_00214f7c_0x214f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214f7c_0x214f7c");
#endif

    ctx->pc = 0x214f7cu;

    // 0x214f7c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x214f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x214f80u;
}
