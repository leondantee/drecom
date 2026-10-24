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

// Function: entry_00195650
// Address: 0x195650 - 0x195670
void entry_00195650_0x195650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195650_0x195650");
#endif

    ctx->pc = 0x195650u;

    // 0x195650: 0x8e040354  lw          $a0, 0x354($s0)
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x195654: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195658: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195658u;
    {
        const bool branch_taken_0x195658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195658) {
            ctx->pc = 0x195670u;
            return;
        }
    }
    ctx->pc = 0x195660u;
    // 0x195660: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x195660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195664: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195668: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x195668u;
    {
        const bool branch_taken_0x195668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195668) {
            ctx->pc = 0x1956D8u;
            return;
        }
    }
    ctx->pc = 0x195670u;
}
