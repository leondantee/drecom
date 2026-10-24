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

// Function: entry_0020897c
// Address: 0x20897c - 0x2089bc
void entry_0020897c_0x20897c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020897c_0x20897c");
#endif

    ctx->pc = 0x20897cu;

    // 0x20897c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208980: 0x8c631360  lw          $v1, 0x1360($v1)
    ctx->pc = 0x208980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4960)));
    // 0x208984: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x208984u;
    {
        const bool branch_taken_0x208984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208984) {
            ctx->pc = 0x2089BCu;
            return;
        }
    }
    ctx->pc = 0x20898Cu;
    // 0x20898c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208990: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208994: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x208994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x208998: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x208998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20899c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2089a0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2089a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2089a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2089a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2089a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2089a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2089ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2089acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2089b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2089b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2089b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2089b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2089b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2089b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2089bcu;
}
