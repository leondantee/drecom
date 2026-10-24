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

// Function: entry_00372ba0
// Address: 0x372ba0 - 0x372bac
void entry_00372ba0_0x372ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00372ba0_0x372ba0");
#endif

    ctx->pc = 0x372ba0u;

    // 0x372ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372ba4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372ba8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x372ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x372bacu;
}
