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

// Function: entry_00265aa8
// Address: 0x265aa8 - 0x265ad0
void entry_00265aa8_0x265aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265aa8_0x265aa8");
#endif

    ctx->pc = 0x265aa8u;

    // 0x265aa8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265aac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265ab0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ab4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265AB4u;
    {
        const bool branch_taken_0x265ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265ab4) {
            ctx->pc = 0x265AD0u;
            return;
        }
    }
    ctx->pc = 0x265ABCu;
    // 0x265abc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265ac0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265ac4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x265ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x265ac8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265AC8u;
    {
        const bool branch_taken_0x265ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ac8) {
            ctx->pc = 0x265AD8u;
            return;
        }
    }
    ctx->pc = 0x265AD0u;
}
