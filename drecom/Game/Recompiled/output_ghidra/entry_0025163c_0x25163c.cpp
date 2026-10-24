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

// Function: entry_0025163c
// Address: 0x25163c - 0x251650
void entry_0025163c_0x25163c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025163c_0x25163c");
#endif

    ctx->pc = 0x25163cu;

    // 0x25163c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251644: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x251644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x251648: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25164c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25164cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x251650u;
}
