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

// Function: entry_00171a58
// Address: 0x171a58 - 0x171a60
void entry_00171a58_0x171a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171a58_0x171a58");
#endif

    ctx->pc = 0x171a58u;

    // 0x171a58: 0xafb40170  sw          $s4, 0x170($sp)
    ctx->pc = 0x171a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 20));
    // 0x171a5c: 0x0  nop
    ctx->pc = 0x171a5cu;
    // NOP
    ctx->pc = 0x171a60u;
}
