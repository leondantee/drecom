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

// Function: entry_001ac864
// Address: 0x1ac864 - 0x1ac890
void entry_001ac864_0x1ac864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac864_0x1ac864");
#endif

    ctx->pc = 0x1ac864u;

    // 0x1ac864: 0x26321d08  addiu       $s2, $s1, 0x1D08
    ctx->pc = 0x1ac864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 7432));
    // 0x1ac868: 0x26527ff8  addiu       $s2, $s2, 0x7FF8
    ctx->pc = 0x1ac868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32760));
    // 0x1ac86c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ac86cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac870: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac874: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1ac874u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ac878: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ac878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ac87c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ac87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ac880: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1AC880u;
    {
        const bool branch_taken_0x1ac880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac880) {
            ctx->pc = 0x1AC988u;
            return;
        }
    }
    ctx->pc = 0x1AC888u;
    // 0x1ac888: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1AC888u;
    {
        const bool branch_taken_0x1ac888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac888) {
            ctx->pc = 0x1AC908u;
            return;
        }
    }
    ctx->pc = 0x1AC890u;
}
