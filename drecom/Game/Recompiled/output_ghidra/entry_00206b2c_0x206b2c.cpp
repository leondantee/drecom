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

// Function: entry_00206b2c
// Address: 0x206b2c - 0x206b6c
void entry_00206b2c_0x206b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206b2c_0x206b2c");
#endif

    ctx->pc = 0x206b2cu;

    // 0x206b2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206b30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206b38: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x206b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206b3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x206b44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206b48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x206b4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206b54: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x206b5c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b60: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x206b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x206b64: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x206b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x206b68: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x206b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
    ctx->pc = 0x206b6cu;
}
