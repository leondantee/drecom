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

// Function: entry_002e5560
// Address: 0x2e5560 - 0x2e558c
void entry_002e5560_0x2e5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5560_0x2e5560");
#endif

    ctx->pc = 0x2e5560u;

    // 0x2e5560: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5564: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5568: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e5568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e556c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5570: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e5570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5574: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5578: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e557c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5580: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e5580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5584: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5588: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2e558cu;
}
