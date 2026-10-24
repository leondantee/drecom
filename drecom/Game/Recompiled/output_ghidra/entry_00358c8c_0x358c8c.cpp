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

// Function: entry_00358c8c
// Address: 0x358c8c - 0x358cb0
void entry_00358c8c_0x358c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358c8c_0x358c8c");
#endif

    ctx->pc = 0x358c8cu;

    // 0x358c8c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c90: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358c94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358c98: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358c9c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358ca0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358ca4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x358ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x358ca8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358cac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x358cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x358cb0u;
}
