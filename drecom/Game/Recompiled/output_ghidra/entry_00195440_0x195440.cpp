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

// Function: entry_00195440
// Address: 0x195440 - 0x195460
void entry_00195440_0x195440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195440_0x195440");
#endif

    ctx->pc = 0x195440u;

    // 0x195440: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x195440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x195444: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195448: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195448u;
    {
        const bool branch_taken_0x195448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195448) {
            ctx->pc = 0x195460u;
            return;
        }
    }
    ctx->pc = 0x195450u;
    // 0x195450: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x195450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195454: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195458: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x195458u;
    {
        const bool branch_taken_0x195458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195458) {
            ctx->pc = 0x1954C8u;
            return;
        }
    }
    ctx->pc = 0x195460u;
}
