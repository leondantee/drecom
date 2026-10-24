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

// Function: entry_0019fc3c
// Address: 0x19fc3c - 0x19fc40
void entry_0019fc3c_0x19fc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc3c_0x19fc3c");
#endif

    ctx->pc = 0x19fc3cu;

    // 0x19fc3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x19fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x19fc40u;
}
