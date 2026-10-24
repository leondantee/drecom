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

// Function: entry_00285970
// Address: 0x285970 - 0x285974
void entry_00285970_0x285970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285970_0x285970");
#endif

    ctx->pc = 0x285970u;

    // 0x285970: 0xa220663c  sb          $zero, 0x663C($s1)
    ctx->pc = 0x285970u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26172), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x285974u;
}
