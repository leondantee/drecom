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

// Function: entry_00358950
// Address: 0x358950 - 0x358974
void entry_00358950_0x358950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358950_0x358950");
#endif

    ctx->pc = 0x358950u;

    // 0x358950: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x358950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358954: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35895c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x35895cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358960: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x358960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358964: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358968: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x358968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x35896c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358970: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x358970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x358974u;
}
