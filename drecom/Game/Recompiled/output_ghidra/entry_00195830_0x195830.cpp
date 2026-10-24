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

// Function: entry_00195830
// Address: 0x195830 - 0x195850
void entry_00195830_0x195830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195830_0x195830");
#endif

    ctx->pc = 0x195830u;

    // 0x195830: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x195830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195834: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195838: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195838u;
    {
        const bool branch_taken_0x195838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195838) {
            ctx->pc = 0x195850u;
            return;
        }
    }
    ctx->pc = 0x195840u;
    // 0x195840: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195844: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195848: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x195848u;
    {
        const bool branch_taken_0x195848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195848) {
            ctx->pc = 0x1958D4u;
            return;
        }
    }
    ctx->pc = 0x195850u;
}
