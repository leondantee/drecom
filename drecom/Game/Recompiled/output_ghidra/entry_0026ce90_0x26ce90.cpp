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

// Function: entry_0026ce90
// Address: 0x26ce90 - 0x26ce98
void entry_0026ce90_0x26ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ce90_0x26ce90");
#endif

    ctx->pc = 0x26ce90u;

    // 0x26ce90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ce94: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x26ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    ctx->pc = 0x26ce98u;
}
