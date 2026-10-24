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

// Function: entry_0011f4a0
// Address: 0x11f4a0 - 0x11f4a4
void entry_0011f4a0_0x11f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f4a0_0x11f4a0");
#endif

    ctx->pc = 0x11f4a0u;

    // 0x11f4a0: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x11f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    ctx->pc = 0x11f4a4u;
}
