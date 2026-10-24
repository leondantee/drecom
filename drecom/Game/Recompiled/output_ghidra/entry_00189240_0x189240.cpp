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

// Function: entry_00189240
// Address: 0x189240 - 0x189254
void entry_00189240_0x189240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189240_0x189240");
#endif

    ctx->pc = 0x189240u;

    // 0x189240: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x189244: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x189244u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x189248: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x189248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18924c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189250: 0xac4300ec  sw          $v1, 0xEC($v0)
    ctx->pc = 0x189250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 3));
    ctx->pc = 0x189254u;
}
