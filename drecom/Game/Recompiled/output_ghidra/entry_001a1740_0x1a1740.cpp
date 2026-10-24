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

// Function: entry_001a1740
// Address: 0x1a1740 - 0x1a1748
void entry_001a1740_0x1a1740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1740_0x1a1740");
#endif

    ctx->pc = 0x1a1740u;

    // 0x1a1740: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1a1740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1744: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1a1744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x1a1748u;
}
