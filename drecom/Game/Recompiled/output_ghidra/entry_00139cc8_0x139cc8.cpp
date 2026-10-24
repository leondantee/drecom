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

// Function: entry_00139cc8
// Address: 0x139cc8 - 0x139cd4
void entry_00139cc8_0x139cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139cc8_0x139cc8");
#endif

    ctx->pc = 0x139cc8u;

    // 0x139cc8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x139cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x139ccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139cd0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x139cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x139cd4u;
}
