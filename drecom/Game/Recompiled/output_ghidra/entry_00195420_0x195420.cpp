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

// Function: entry_00195420
// Address: 0x195420 - 0x195440
void entry_00195420_0x195420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195420_0x195420");
#endif

    ctx->pc = 0x195420u;

    // 0x195420: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x195420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x195424: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195428: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195428u;
    {
        const bool branch_taken_0x195428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195428) {
            ctx->pc = 0x195440u;
            return;
        }
    }
    ctx->pc = 0x195430u;
    // 0x195430: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195434: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195438: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x195438u;
    {
        const bool branch_taken_0x195438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195438) {
            ctx->pc = 0x1954C8u;
            return;
        }
    }
    ctx->pc = 0x195440u;
}
