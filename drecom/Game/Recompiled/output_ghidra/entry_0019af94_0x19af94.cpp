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

// Function: entry_0019af94
// Address: 0x19af94 - 0x19afc8
void entry_0019af94_0x19af94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af94_0x19af94");
#endif

    ctx->pc = 0x19af94u;

    // 0x19af94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19af94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19af98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19af9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19afa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afa4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x19afa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19afa8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19afacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19afb0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afb4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19afb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19afb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afbc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19afc0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x19AFC0u;
    {
        const bool branch_taken_0x19afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19afc0) {
            ctx->pc = 0x19B110u;
            return;
        }
    }
    ctx->pc = 0x19AFC8u;
}
