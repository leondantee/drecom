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

// Function: entry_00226738
// Address: 0x226738 - 0x226784
void entry_00226738_0x226738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226738_0x226738");
#endif

    ctx->pc = 0x226738u;

    // 0x226738: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x226738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22673c: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x22673cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x226740: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x226740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x226744: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x226744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x226748: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x226748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22674c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22674Cu;
    {
        const bool branch_taken_0x22674c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22674c) {
            ctx->pc = 0x226784u;
            return;
        }
    }
    ctx->pc = 0x226754u;
    // 0x226754: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226758: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22675c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22675cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x226760: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x226760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226764: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226768: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x226768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22676c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226770: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226774: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226778: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x226778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22677c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226780: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x226784u;
}
