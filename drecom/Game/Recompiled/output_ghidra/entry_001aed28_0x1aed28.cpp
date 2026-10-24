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

// Function: entry_001aed28
// Address: 0x1aed28 - 0x1aed30
void entry_001aed28_0x1aed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aed28_0x1aed28");
#endif

    ctx->pc = 0x1aed28u;

    // 0x1aed28: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1aed28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aed2c: 0x0  nop
    ctx->pc = 0x1aed2cu;
    // NOP
    ctx->pc = 0x1aed30u;
}
