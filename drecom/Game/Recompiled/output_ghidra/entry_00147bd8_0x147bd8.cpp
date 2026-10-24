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

// Function: entry_00147bd8
// Address: 0x147bd8 - 0x147be4
void entry_00147bd8_0x147bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147bd8_0x147bd8");
#endif

    ctx->pc = 0x147bd8u;

    // 0x147bd8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x147bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x147bdc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147be0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x147be0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x147be4u;
}
