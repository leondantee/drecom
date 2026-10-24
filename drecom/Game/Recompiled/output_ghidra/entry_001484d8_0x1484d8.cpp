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

// Function: entry_001484d8
// Address: 0x1484d8 - 0x148520
void entry_001484d8_0x1484d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001484d8_0x1484d8");
#endif

    ctx->pc = 0x1484d8u;

    // 0x1484d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1484dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1484dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1484e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1484E0u;
    {
        const bool branch_taken_0x1484e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484e0) {
            ctx->pc = 0x148520u;
            return;
        }
    }
    ctx->pc = 0x1484E8u;
    // 0x1484e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1484e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1484ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1484f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1484f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1484f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1484f8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1484f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1484fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148500: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x148500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x148504: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148508: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x148508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14850c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x148510: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148514: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x148514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x148518: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14851c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14851cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x148520u;
}
