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

// Function: entry_0011cb24
// Address: 0x11cb24 - 0x11cb28
void entry_0011cb24_0x11cb24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cb24_0x11cb24");
#endif

    ctx->pc = 0x11cb24u;

    // 0x11cb24: 0x1041023  subu        $v0, $t0, $a0
    ctx->pc = 0x11cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    ctx->pc = 0x11cb28u;
}
