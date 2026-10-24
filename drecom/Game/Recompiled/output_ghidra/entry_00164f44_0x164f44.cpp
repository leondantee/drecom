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

// Function: entry_00164f44
// Address: 0x164f44 - 0x164f70
void entry_00164f44_0x164f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164f44_0x164f44");
#endif

    ctx->pc = 0x164f44u;

    // 0x164f44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164f48: 0x402027  not         $a0, $v0
    ctx->pc = 0x164f48u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x164f4c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x164f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x164f50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x164f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164f54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164f58: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x164f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x164f5c: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x164f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x164f60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x164f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x164f64: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x164f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x164f68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x164f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164f6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x164f70u;
}
