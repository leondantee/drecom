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

// Function: entry_001453d8
// Address: 0x1453d8 - 0x1453f8
void entry_001453d8_0x1453d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001453d8_0x1453d8");
#endif

    ctx->pc = 0x1453d8u;

    // 0x1453d8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1453d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1453dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453e0: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1453e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1453e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453e8: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1453e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1453ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1453ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1453f0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453f4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1453f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1453f8u;
}
