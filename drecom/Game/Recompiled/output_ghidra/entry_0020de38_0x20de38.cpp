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

// Function: entry_0020de38
// Address: 0x20de38 - 0x20de70
void entry_0020de38_0x20de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020de38_0x20de38");
#endif

    ctx->pc = 0x20de38u;

    // 0x20de38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20de38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20de3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20de40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20de44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20de44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20de4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20de50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20de54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20de58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20de5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20de60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20de64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20de68: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x20DE68u;
    {
        const bool branch_taken_0x20de68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20de68) {
            ctx->pc = 0x20E054u;
            return;
        }
    }
    ctx->pc = 0x20DE70u;
}
