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

// Function: entry_0018a410
// Address: 0x18a410 - 0x18a428
void entry_0018a410_0x18a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a410_0x18a410");
#endif

    ctx->pc = 0x18a410u;

    // 0x18a410: 0x2643fdd0  addiu       $v1, $s2, -0x230
    ctx->pc = 0x18a410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966736));
    // 0x18a414: 0xae43021c  sw          $v1, 0x21C($s2)
    ctx->pc = 0x18a414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 3));
    // 0x18a418: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x18a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x18a41c: 0xae430220  sw          $v1, 0x220($s2)
    ctx->pc = 0x18a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 3));
    // 0x18a420: 0x26520230  addiu       $s2, $s2, 0x230
    ctx->pc = 0x18a420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x18a424: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x18a428u;
}
