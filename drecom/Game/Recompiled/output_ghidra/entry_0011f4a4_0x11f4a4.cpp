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

// Function: entry_0011f4a4
// Address: 0x11f4a4 - 0x11f4a8
void entry_0011f4a4_0x11f4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f4a4_0x11f4a4");
#endif

    ctx->pc = 0x11f4a4u;

    // 0x11f4a4: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x11f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    ctx->pc = 0x11f4a8u;
}
