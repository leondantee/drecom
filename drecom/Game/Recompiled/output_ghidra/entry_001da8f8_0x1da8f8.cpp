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

// Function: entry_001da8f8
// Address: 0x1da8f8 - 0x1da948
void entry_001da8f8_0x1da8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da8f8_0x1da8f8");
#endif

    ctx->pc = 0x1da8f8u;

    // 0x1da8f8: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1da8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x1da8fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA8FCu;
    {
        const bool branch_taken_0x1da8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8fc) {
            ctx->pc = 0x1DA950u;
            return;
        }
    }
    ctx->pc = 0x1DA904u;
    // 0x1da904: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1da904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da908: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x1da908u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da90c: 0x2601827  not         $v1, $s3
    ctx->pc = 0x1da90cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 19) | GPR_U64(ctx, 0)));
    // 0x1da910: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1da910u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1da914: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1da914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1da918: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1da918u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1da91c: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1da91cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1da920: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x1da920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x1da924: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1da924u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1da928: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1da928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1da92c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1da92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1da930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA930u;
    {
        const bool branch_taken_0x1da930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da930) {
            ctx->pc = 0x1DA948u;
            return;
        }
    }
    ctx->pc = 0x1DA938u;
    // 0x1da938: 0x2402025c  addiu       $v0, $zero, 0x25C
    ctx->pc = 0x1da938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1da93c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da93cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA940u;
    {
        const bool branch_taken_0x1da940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da940) {
            ctx->pc = 0x1DA950u;
            return;
        }
    }
    ctx->pc = 0x1DA948u;
}
