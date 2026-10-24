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

// Function: entry_0018a740
// Address: 0x18a740 - 0x18a754
void entry_0018a740_0x18a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a740_0x18a740");
#endif

    ctx->pc = 0x18a740u;

    // 0x18a740: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a744: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x18a744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18a748: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x18A748u;
    {
        const bool branch_taken_0x18a748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a748) {
            ctx->pc = 0x18A6D0u;
            return;
        }
    }
    ctx->pc = 0x18A750u;
    // 0x18a750: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x18a750u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18a754u;
}
