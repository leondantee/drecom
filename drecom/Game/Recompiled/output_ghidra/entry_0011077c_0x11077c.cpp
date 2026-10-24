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

// Function: entry_0011077c
// Address: 0x11077c - 0x110780
void entry_0011077c_0x11077c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011077c_0x11077c");
#endif

    ctx->pc = 0x11077cu;

    // 0x11077c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x11077cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x110780u;
}
