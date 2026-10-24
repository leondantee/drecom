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

// Function: entry_0011d0e8
// Address: 0x11d0e8 - 0x11d0ec
void entry_0011d0e8_0x11d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0e8_0x11d0e8");
#endif

    ctx->pc = 0x11d0e8u;

    // 0x11d0e8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x11d0ecu;
}
