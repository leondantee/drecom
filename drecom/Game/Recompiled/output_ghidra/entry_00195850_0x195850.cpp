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

// Function: entry_00195850
// Address: 0x195850 - 0x195870
void entry_00195850_0x195850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195850_0x195850");
#endif

    ctx->pc = 0x195850u;

    // 0x195850: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195854: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195858: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195858u;
    {
        const bool branch_taken_0x195858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195858) {
            ctx->pc = 0x195870u;
            return;
        }
    }
    ctx->pc = 0x195860u;
    // 0x195860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195864: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195868: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x195868u;
    {
        const bool branch_taken_0x195868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195868) {
            ctx->pc = 0x1958D4u;
            return;
        }
    }
    ctx->pc = 0x195870u;
}
