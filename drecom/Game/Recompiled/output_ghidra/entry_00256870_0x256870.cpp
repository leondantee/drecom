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

// Function: entry_00256870
// Address: 0x256870 - 0x256878
void entry_00256870_0x256870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256870_0x256870");
#endif

    ctx->pc = 0x256870u;

    // 0x256870: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256874: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x256874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x256878u;
}
