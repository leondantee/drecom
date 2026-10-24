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

// Function: entry_001a154c
// Address: 0x1a154c - 0x1a1550
void entry_001a154c_0x1a154c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a154c_0x1a154c");
#endif

    ctx->pc = 0x1a154cu;

    // 0x1a154c: 0x24462530  addiu       $a2, $v0, 0x2530
    ctx->pc = 0x1a154cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9520));
    ctx->pc = 0x1a1550u;
}
