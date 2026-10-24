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

// Function: entry_00148e10
// Address: 0x148e10 - 0x148e58
void entry_00148e10_0x148e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148e10_0x148e10");
#endif

    ctx->pc = 0x148e10u;

    // 0x148e10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e14: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x148e18: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x148E18u;
    {
        const bool branch_taken_0x148e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e18) {
            ctx->pc = 0x148E58u;
            return;
        }
    }
    ctx->pc = 0x148E20u;
    // 0x148e20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148e24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x148e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x148e2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e30: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x148e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x148e34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x148e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x148e3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x148e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x148e44: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x148e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x148e48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e4c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x148e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x148e50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e54: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x148e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x148e58u;
}
