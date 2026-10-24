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

// Function: entry_00165504
// Address: 0x165504 - 0x165544
void entry_00165504_0x165504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165504_0x165504");
#endif

    ctx->pc = 0x165504u;

    // 0x165504: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165508: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x165508u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x16550c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16550cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x165510: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165514: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x165514u;
    {
        const bool branch_taken_0x165514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165514) {
            ctx->pc = 0x1655C8u;
            return;
        }
    }
    ctx->pc = 0x16551Cu;
    // 0x16551c: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x16551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x165520: 0xae030248  sw          $v1, 0x248($s0)
    ctx->pc = 0x165520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 3));
    // 0x165524: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x165524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x165528: 0xae030254  sw          $v1, 0x254($s0)
    ctx->pc = 0x165528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
    // 0x16552c: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x16552cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x165530: 0x8e03024c  lw          $v1, 0x24C($s0)
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x165534: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165538: 0xae03024c  sw          $v1, 0x24C($s0)
    ctx->pc = 0x165538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 3));
    // 0x16553c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16553Cu;
    {
        const bool branch_taken_0x16553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16553c) {
            ctx->pc = 0x1655C8u;
            return;
        }
    }
    ctx->pc = 0x165544u;
}
