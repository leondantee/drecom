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

// Function: entry_00277b74
// Address: 0x277b74 - 0x277b78
void entry_00277b74_0x277b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277b74_0x277b74");
#endif

    ctx->pc = 0x277b74u;

    // 0x277b74: 0xa022d731  sb          $v0, -0x28CF($at)
    ctx->pc = 0x277b74u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294956849), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x277b78u;
}
