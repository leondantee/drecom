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

// Function: entry_001bf698
// Address: 0x1bf698 - 0x1bf6a4
void entry_001bf698_0x1bf698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf698_0x1bf698");
#endif

    ctx->pc = 0x1bf698u;

    // 0x1bf698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf69c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6a0: 0xa04313f9  sb          $v1, 0x13F9($v0)
    ctx->pc = 0x1bf6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bf6a4u;
}
