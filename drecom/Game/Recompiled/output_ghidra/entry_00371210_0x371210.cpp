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

// Function: entry_00371210
// Address: 0x371210 - 0x37121c
void entry_00371210_0x371210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371210_0x371210");
#endif

    ctx->pc = 0x371210u;

    // 0x371210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x371210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x371214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x371218: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x371218u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x37121cu;
}
