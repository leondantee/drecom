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

// Function: entry_00165240
// Address: 0x165240 - 0x165244
void entry_00165240_0x165240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165240_0x165240");
#endif

    ctx->pc = 0x165240u;

    // 0x165240: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x165240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    ctx->pc = 0x165244u;
}
