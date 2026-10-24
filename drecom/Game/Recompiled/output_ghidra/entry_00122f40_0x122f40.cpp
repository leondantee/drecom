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

// Function: entry_00122f40
// Address: 0x122f40 - 0x122f58
void entry_00122f40_0x122f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122f40_0x122f40");
#endif

    ctx->pc = 0x122f40u;

    // 0x122f40: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x122f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x122f44: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122f48: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x122f48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x122f4c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x122f50: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122f54: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x122f54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x122f58u;
}
