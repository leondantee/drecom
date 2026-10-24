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

// Function: entry_001473dc
// Address: 0x1473dc - 0x14742c
void entry_001473dc_0x1473dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001473dc_0x1473dc");
#endif

    ctx->pc = 0x1473dcu;

    // 0x1473dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1473dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1473e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1473e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1473e4: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x1473E4u;
    {
        const bool branch_taken_0x1473e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473e4) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x1473ECu;
    // 0x1473ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1473ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1473f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1473f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1473f4: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1473f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1473f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1473f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1473fc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1473fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x147400: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147404: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x147404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x147408: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14740c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x14740cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x147410: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x147410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x147414: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x147414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147418: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x147418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x14741c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x14741cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147420: 0xa0c010a8  sb          $zero, 0x10A8($a2)
    ctx->pc = 0x147420u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x147424: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x147424u;
    {
        const bool branch_taken_0x147424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147424) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14742Cu;
}
