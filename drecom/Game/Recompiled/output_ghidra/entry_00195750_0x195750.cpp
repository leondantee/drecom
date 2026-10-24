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

// Function: entry_00195750
// Address: 0x195750 - 0x195770
void entry_00195750_0x195750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195750_0x195750");
#endif

    ctx->pc = 0x195750u;

    // 0x195750: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x195750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195758: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195758u;
    {
        const bool branch_taken_0x195758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195758) {
            ctx->pc = 0x195770u;
            return;
        }
    }
    ctx->pc = 0x195760u;
    // 0x195760: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x195760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195764: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195768: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x195768u;
    {
        const bool branch_taken_0x195768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195768) {
            ctx->pc = 0x1957D8u;
            return;
        }
    }
    ctx->pc = 0x195770u;
}
