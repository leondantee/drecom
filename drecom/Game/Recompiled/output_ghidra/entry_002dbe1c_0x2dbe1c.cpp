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

// Function: entry_002dbe1c
// Address: 0x2dbe1c - 0x2dbe50
void entry_002dbe1c_0x2dbe1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbe1c_0x2dbe1c");
#endif

    ctx->pc = 0x2dbe1cu;

    // 0x2dbe1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dbe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbe20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dbe24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dbe28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe2c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dbe2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbe30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dbe34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbe38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dbe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbe40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dbe44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dbe48: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2DBE48u;
    {
        const bool branch_taken_0x2dbe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe48) {
            ctx->pc = 0x2DC0BCu;
            return;
        }
    }
    ctx->pc = 0x2DBE50u;
}
