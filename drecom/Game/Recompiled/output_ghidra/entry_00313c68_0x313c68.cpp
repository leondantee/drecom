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

// Function: entry_00313c68
// Address: 0x313c68 - 0x313c80
void entry_00313c68_0x313c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313c68_0x313c68");
#endif

    ctx->pc = 0x313c68u;

    // 0x313c68: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x313c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x313c6c: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x313C6Cu;
    {
        const bool branch_taken_0x313c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313c6c) {
            ctx->pc = 0x313B94u;
            return;
        }
    }
    ctx->pc = 0x313C74u;
    // 0x313c74: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x313c74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313c78: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x313C78u;
    {
        const bool branch_taken_0x313c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313c78) {
            ctx->pc = 0x313D98u;
            return;
        }
    }
    ctx->pc = 0x313C80u;
}
