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

// Function: entry_00148a8c
// Address: 0x148a8c - 0x148ad4
void entry_00148a8c_0x148a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148a8c_0x148a8c");
#endif

    ctx->pc = 0x148a8cu;

    // 0x148a8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148a90: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x148a94: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x148A94u;
    {
        const bool branch_taken_0x148a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a94) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x148A9Cu;
    // 0x148a9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148aa0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148aa4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x148aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x148aa8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148aac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x148aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x148ab0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ab4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x148ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x148ab8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148abc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x148abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x148ac0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x148ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x148ac4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ac8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x148ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x148acc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ad0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x148ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x148ad4u;
}
