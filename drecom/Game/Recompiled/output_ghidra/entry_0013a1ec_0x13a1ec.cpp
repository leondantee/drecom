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

// Function: entry_0013a1ec
// Address: 0x13a1ec - 0x13a1f8
void entry_0013a1ec_0x13a1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a1ec_0x13a1ec");
#endif

    ctx->pc = 0x13a1ecu;

    // 0x13a1ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x13a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13a1f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a1f4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x13a1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x13a1f8u;
}
