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

// Function: entry_00195630
// Address: 0x195630 - 0x195650
void entry_00195630_0x195630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195630_0x195630");
#endif

    ctx->pc = 0x195630u;

    // 0x195630: 0x8e040350  lw          $a0, 0x350($s0)
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x195634: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195638: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195638u;
    {
        const bool branch_taken_0x195638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195638) {
            ctx->pc = 0x195650u;
            return;
        }
    }
    ctx->pc = 0x195640u;
    // 0x195640: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195644: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195648: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x195648u;
    {
        const bool branch_taken_0x195648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195648) {
            ctx->pc = 0x1956D8u;
            return;
        }
    }
    ctx->pc = 0x195650u;
}
