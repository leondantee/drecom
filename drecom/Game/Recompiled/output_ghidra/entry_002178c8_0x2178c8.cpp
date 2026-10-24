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

// Function: entry_002178c8
// Address: 0x2178c8 - 0x2178d0
void entry_002178c8_0x2178c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002178c8_0x2178c8");
#endif

    ctx->pc = 0x2178c8u;

    // 0x2178c8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2178c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2178cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2178ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x2178d0u;
}
