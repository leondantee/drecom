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

// Function: entry_00333878
// Address: 0x333878 - 0x3338d0
void entry_00333878_0x333878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333878_0x333878");
#endif

    ctx->pc = 0x333878u;

    // 0x333878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33387c: 0xa202660f  sb          $v0, 0x660F($s0)
    ctx->pc = 0x33387cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26127), (uint8_t)GPR_U32(ctx, 2));
    // 0x333880: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x333880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x333884: 0x13c00012  beqz        $fp, . + 4 + (0x12 << 2)
    ctx->pc = 0x333884u;
    {
        const bool branch_taken_0x333884 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x333884) {
            ctx->pc = 0x3338D0u;
            return;
        }
    }
    ctx->pc = 0x33388Cu;
    // 0x33388c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33388cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x333890: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x333890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x333894: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x333894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x333898: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x333898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33389c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33389Cu;
    {
        const bool branch_taken_0x33389c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33389c) {
            ctx->pc = 0x3338D8u;
            return;
        }
    }
    ctx->pc = 0x3338A4u;
    // 0x3338a4: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x3338a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x3338a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3338a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3338ac: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3338ACu;
    {
        const bool branch_taken_0x3338ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3338ac) {
            ctx->pc = 0x3338D8u;
            return;
        }
    }
    ctx->pc = 0x3338B4u;
    // 0x3338b4: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x3338b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x3338b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3338b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3338bc: 0xae025dc8  sw          $v0, 0x5DC8($s0)
    ctx->pc = 0x3338bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 2));
    // 0x3338c0: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x3338c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    // 0x3338c4: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x3338c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x3338c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3338C8u;
    {
        const bool branch_taken_0x3338c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3338c8) {
            ctx->pc = 0x3338D8u;
            return;
        }
    }
    ctx->pc = 0x3338D0u;
}
