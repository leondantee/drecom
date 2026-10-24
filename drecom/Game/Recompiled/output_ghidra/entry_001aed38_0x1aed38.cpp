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

// Function: entry_001aed38
// Address: 0x1aed38 - 0x1aed58
void entry_001aed38_0x1aed38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aed38_0x1aed38");
#endif

    ctx->pc = 0x1aed38u;

    // 0x1aed38: 0x2e0307d0  sltiu       $v1, $s0, 0x7D0
    ctx->pc = 0x1aed38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1aed3c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1AED3Cu;
    {
        const bool branch_taken_0x1aed3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aed3c) {
            ctx->pc = 0x1AEC80u;
            return;
        }
    }
    ctx->pc = 0x1AED44u;
    // 0x1aed44: 0x26511d08  addiu       $s1, $s2, 0x1D08
    ctx->pc = 0x1aed44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 7432));
    // 0x1aed48: 0x26317ff8  addiu       $s1, $s1, 0x7FF8
    ctx->pc = 0x1aed48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32760));
    // 0x1aed4c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1aed4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aed50: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1AED50u;
    {
        const bool branch_taken_0x1aed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aed50) {
            ctx->pc = 0x1AF040u;
            return;
        }
    }
    ctx->pc = 0x1AED58u;
}
