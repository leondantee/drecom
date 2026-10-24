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

// Function: entry_0018ee2c
// Address: 0x18ee2c - 0x18ee44
void entry_0018ee2c_0x18ee2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ee2c_0x18ee2c");
#endif

    ctx->pc = 0x18ee2cu;

    // 0x18ee2c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x18ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x18ee30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee34: 0xac4302b0  sw          $v1, 0x2B0($v0)
    ctx->pc = 0x18ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
    // 0x18ee38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee3c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x18ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x18ee40: 0xac4302b4  sw          $v1, 0x2B4($v0)
    ctx->pc = 0x18ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 3));
    ctx->pc = 0x18ee44u;
}
