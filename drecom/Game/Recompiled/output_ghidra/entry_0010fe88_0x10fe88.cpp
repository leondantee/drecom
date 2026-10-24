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

// Function: entry_0010fe88
// Address: 0x10fe88 - 0x10fe90
void entry_0010fe88_0x10fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fe88_0x10fe88");
#endif

    ctx->pc = 0x10fe88u;

    // 0x10fe88: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x10fe8c: 0x0  nop
    ctx->pc = 0x10fe8cu;
    // NOP
    ctx->pc = 0x10fe90u;
}
