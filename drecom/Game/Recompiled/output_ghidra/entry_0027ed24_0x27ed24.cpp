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

// Function: entry_0027ed24
// Address: 0x27ed24 - 0x27ed28
void entry_0027ed24_0x27ed24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ed24_0x27ed24");
#endif

    ctx->pc = 0x27ed24u;

    // 0x27ed24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ed24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x27ed28u;
}
