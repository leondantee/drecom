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

// Function: entry_0027e8f0
// Address: 0x27e8f0 - 0x27e908
void entry_0027e8f0_0x27e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e8f0_0x27e8f0");
#endif

    ctx->pc = 0x27e8f0u;

    // 0x27e8f0: 0x2e02001e  sltiu       $v0, $s0, 0x1E
    ctx->pc = 0x27e8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x27e8f4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27E8F4u;
    {
        const bool branch_taken_0x27e8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e8f4) {
            ctx->pc = 0x27E8A8u;
            return;
        }
    }
    ctx->pc = 0x27E8FCu;
    // 0x27e8fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27e8fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e900: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x27E900u;
    {
        const bool branch_taken_0x27e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e900) {
            ctx->pc = 0x27EC18u;
            return;
        }
    }
    ctx->pc = 0x27E908u;
}
