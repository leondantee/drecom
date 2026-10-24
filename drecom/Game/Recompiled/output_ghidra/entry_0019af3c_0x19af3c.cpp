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

// Function: entry_0019af3c
// Address: 0x19af3c - 0x19af74
void entry_0019af3c_0x19af3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af3c_0x19af3c");
#endif

    ctx->pc = 0x19af3cu;

    // 0x19af3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19af40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19af44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19af48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19af50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19af54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19af58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19af5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19af60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19af64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19af68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19af6c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x19AF6Cu;
    {
        const bool branch_taken_0x19af6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af6c) {
            ctx->pc = 0x19B110u;
            return;
        }
    }
    ctx->pc = 0x19AF74u;
}
