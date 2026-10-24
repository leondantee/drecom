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

// Function: entry_00265638
// Address: 0x265638 - 0x265658
void entry_00265638_0x265638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265638_0x265638");
#endif

    ctx->pc = 0x265638u;

    // 0x265638: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26563c: 0x8c23fca4  lw          $v1, -0x35C($at)
    ctx->pc = 0x26563cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCA4u));
    // 0x265640: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x265640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265644: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x265644u;
    {
        const bool branch_taken_0x265644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265644) {
            ctx->pc = 0x26550Cu;
            return;
        }
    }
    ctx->pc = 0x26564Cu;
    // 0x26564c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x26564cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265650: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x265650u;
    {
        const bool branch_taken_0x265650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265650) {
            ctx->pc = 0x265818u;
            return;
        }
    }
    ctx->pc = 0x265658u;
}
