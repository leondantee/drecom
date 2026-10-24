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

// Function: entry_0010d110
// Address: 0x10d110 - 0x10d114
void entry_0010d110_0x10d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d110_0x10d110");
#endif

    ctx->pc = 0x10d110u;

    // 0x10d110: 0xac7045f4  sw          $s0, 0x45F4($v1)
    ctx->pc = 0x10d110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17908), GPR_U32(ctx, 16));
    ctx->pc = 0x10d114u;
}
