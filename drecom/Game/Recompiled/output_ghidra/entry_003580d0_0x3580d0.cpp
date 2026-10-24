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

// Function: entry_003580d0
// Address: 0x3580d0 - 0x3580f4
void entry_003580d0_0x3580d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003580d0_0x3580d0");
#endif

    ctx->pc = 0x3580d0u;

    // 0x3580d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3580d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580d4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3580d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3580d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3580d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3580dc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3580dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3580e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3580e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3580e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3580e8: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x3580e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x3580ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3580ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3580f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x3580f4u;
}
