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

// Function: entry_00122664
// Address: 0x122664 - 0x12269c
void entry_00122664_0x122664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122664_0x122664");
#endif

    ctx->pc = 0x122664u;

    // 0x122664: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122668: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12266c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12266cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122674: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122678: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x122678u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x12267c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122680: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122684: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x122684u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122688: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x122688u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12268c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122690: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x122694: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x122694u;
    {
        const bool branch_taken_0x122694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122694) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x12269Cu;
}
