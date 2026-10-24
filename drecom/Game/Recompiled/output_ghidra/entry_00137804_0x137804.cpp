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

// Function: entry_00137804
// Address: 0x137804 - 0x137808
void entry_00137804_0x137804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137804_0x137804");
#endif

    ctx->pc = 0x137804u;

    // 0x137804: 0xa3808094  sb          $zero, -0x7F6C($gp)
    ctx->pc = 0x137804u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934676), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x137808u;
}
