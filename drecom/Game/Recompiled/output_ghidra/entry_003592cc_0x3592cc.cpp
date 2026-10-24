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

// Function: entry_003592cc
// Address: 0x3592cc - 0x3592f0
void entry_003592cc_0x3592cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003592cc_0x3592cc");
#endif

    ctx->pc = 0x3592ccu;

    // 0x3592cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3592ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592d0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3592d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3592d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3592d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3592d8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3592d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3592dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3592dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3592e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3592e4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x3592e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x3592e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3592e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3592ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x3592f0u;
}
