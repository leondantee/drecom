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

// Function: caseD_6
// Address: 0x358844 - 0x358858
void caseD_6_0x358844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x358844");
#endif

    ctx->pc = 0x358844u;

    // 0x358844: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358848: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35884c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x35884cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x358850: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358854: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x358854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x358858u;
}
