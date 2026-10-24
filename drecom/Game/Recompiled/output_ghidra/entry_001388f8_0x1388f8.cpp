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

// Function: entry_001388f8
// Address: 0x1388f8 - 0x138910
void entry_001388f8_0x1388f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388f8_0x1388f8");
#endif

    ctx->pc = 0x1388f8u;

    // 0x1388f8: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x1388f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1388fc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1388FCu;
    {
        const bool branch_taken_0x1388fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1388fc) {
            ctx->pc = 0x1388BCu;
            return;
        }
    }
    ctx->pc = 0x138904u;
    // 0x138904: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138904u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138908: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138908u;
    {
        const bool branch_taken_0x138908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138908) {
            ctx->pc = 0x138948u;
            return;
        }
    }
    ctx->pc = 0x138910u;
}
