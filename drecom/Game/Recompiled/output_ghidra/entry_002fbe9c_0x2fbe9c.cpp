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

// Function: entry_002fbe9c
// Address: 0x2fbe9c - 0x2fbeb0
void entry_002fbe9c_0x2fbe9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbe9c_0x2fbe9c");
#endif

    ctx->pc = 0x2fbe9cu;

    // 0x2fbe9c: 0x2fc10009  sltiu       $at, $fp, 0x9
    ctx->pc = 0x2fbe9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2fbea0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBEA0u;
    {
        const bool branch_taken_0x2fbea0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbea0) {
            ctx->pc = 0x2FBEB0u;
            return;
        }
    }
    ctx->pc = 0x2FBEA8u;
    // 0x2fbea8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2fbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fbeac: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2fbeacu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fbeb0u;
}
