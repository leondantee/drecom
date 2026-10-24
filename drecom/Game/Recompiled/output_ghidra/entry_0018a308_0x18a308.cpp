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

// Function: entry_0018a308
// Address: 0x18a308 - 0x18a320
void entry_0018a308_0x18a308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a308_0x18a308");
#endif

    ctx->pc = 0x18a308u;

    // 0x18a308: 0x2e030200  sltiu       $v1, $s0, 0x200
    ctx->pc = 0x18a308u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x18a30c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A30Cu;
    {
        const bool branch_taken_0x18a30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a30c) {
            ctx->pc = 0x18A2F8u;
            return;
        }
    }
    ctx->pc = 0x18A314u;
    // 0x18a314: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a314u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a318: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A318u;
    {
        const bool branch_taken_0x18a318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a318) {
            ctx->pc = 0x18A330u;
            return;
        }
    }
    ctx->pc = 0x18A320u;
}
