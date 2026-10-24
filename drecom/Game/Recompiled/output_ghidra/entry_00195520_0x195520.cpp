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

// Function: entry_00195520
// Address: 0x195520 - 0x195540
void entry_00195520_0x195520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195520_0x195520");
#endif

    ctx->pc = 0x195520u;

    // 0x195520: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x195520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x195524: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195528: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195528u;
    {
        const bool branch_taken_0x195528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195528) {
            ctx->pc = 0x195540u;
            return;
        }
    }
    ctx->pc = 0x195530u;
    // 0x195530: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195534: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195538: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x195538u;
    {
        const bool branch_taken_0x195538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195538) {
            ctx->pc = 0x1955C4u;
            return;
        }
    }
    ctx->pc = 0x195540u;
}
