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

// Function: entry_0014a340
// Address: 0x14a340 - 0x14a38c
void entry_0014a340_0x14a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a340_0x14a340");
#endif

    ctx->pc = 0x14a340u;

    // 0x14a340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a344: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14a348: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A348u;
    {
        const bool branch_taken_0x14a348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a348) {
            ctx->pc = 0x14A38Cu;
            return;
        }
    }
    ctx->pc = 0x14A350u;
    // 0x14a350: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a354: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a358: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14a358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14a35c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a360: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a364: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14a364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14a368: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a36c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14a36cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a370: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a374: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14a374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a378: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a37c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14a37cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a380: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14a384: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a388: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14a388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x14a38cu;
}
