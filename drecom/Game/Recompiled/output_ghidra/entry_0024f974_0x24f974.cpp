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

// Function: entry_0024f974
// Address: 0x24f974 - 0x24f988
void entry_0024f974_0x24f974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024f974_0x24f974");
#endif

    ctx->pc = 0x24f974u;

    // 0x24f974: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f978: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f97c: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24f97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24f980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f984: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x24f988u;
}
