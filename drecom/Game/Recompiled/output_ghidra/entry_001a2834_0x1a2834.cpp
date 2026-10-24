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

// Function: entry_001a2834
// Address: 0x1a2834 - 0x1a2864
void entry_001a2834_0x1a2834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2834_0x1a2834");
#endif

    ctx->pc = 0x1a2834u;

    // 0x1a2834: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1a2834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1a2838: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a2838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1a283c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a283cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2840: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2840u;
    {
        const bool branch_taken_0x1a2840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2840) {
            ctx->pc = 0x1A2864u;
            return;
        }
    }
    ctx->pc = 0x1A2848u;
    // 0x1a2848: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a284c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x1a284cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2850: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2854: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x1a2854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2858: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a2858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a285c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2860: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a2860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a2864u;
}
