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

// Function: entry_00122314
// Address: 0x122314 - 0x12234c
void entry_00122314_0x122314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122314_0x122314");
#endif

    ctx->pc = 0x122314u;

    // 0x122314: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x122314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122318: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12231c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x12231cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x122320: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122324: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122328: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12232c: 0x8fb40078  lw          $s4, 0x78($sp)
    ctx->pc = 0x12232cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122330: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x122330u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122334: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122338: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12233c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122340: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x122344: 0x1000027a  b           . + 4 + (0x27A << 2)
    ctx->pc = 0x122344u;
    {
        const bool branch_taken_0x122344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122344) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x12234Cu;
}
