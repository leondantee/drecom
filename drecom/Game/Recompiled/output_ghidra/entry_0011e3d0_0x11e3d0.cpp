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

// Function: entry_0011e3d0
// Address: 0x11e3d0 - 0x11e3d4
void entry_0011e3d0_0x11e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e3d0_0x11e3d0");
#endif

    ctx->pc = 0x11e3d0u;

    // 0x11e3d0: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x11e3d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x11e3d4u;
}
