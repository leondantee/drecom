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

// Function: entry_00176e50
// Address: 0x176e50 - 0x176e54
void entry_00176e50_0x176e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176e50_0x176e50");
#endif

    ctx->pc = 0x176e50u;

    // 0x176e50: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    ctx->pc = 0x176e54u;
}
