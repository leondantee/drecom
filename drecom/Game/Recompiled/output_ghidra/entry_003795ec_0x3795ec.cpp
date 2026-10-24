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

// Function: entry_003795ec
// Address: 0x3795ec - 0x37960c
void entry_003795ec_0x3795ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003795ec_0x3795ec");
#endif

    ctx->pc = 0x3795ecu;

    // 0x3795ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3795ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3795f0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3795f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3795f4: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x3795f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x3795f8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3795f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3795fc: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x3795fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x379600: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x379600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x379604: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x379604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x379608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x37960cu;
}
