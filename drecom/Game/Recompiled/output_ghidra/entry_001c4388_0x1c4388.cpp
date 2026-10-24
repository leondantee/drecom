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

// Function: entry_001c4388
// Address: 0x1c4388 - 0x1c4390
void entry_001c4388_0x1c4388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4388_0x1c4388");
#endif

    ctx->pc = 0x1c4388u;

    // 0x1c4388: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c438c: 0xa040156c  sb          $zero, 0x156C($v0)
    ctx->pc = 0x1c438cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c4390u;
}
