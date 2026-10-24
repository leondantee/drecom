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

// Function: entry_00124a20
// Address: 0x124a20 - 0x124a50
void entry_00124a20_0x124a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124a20_0x124a20");
#endif

    ctx->pc = 0x124a20u;

    // 0x124a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124a24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124a2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x124a30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124a38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124a40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124a48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x124a50u;
}
