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

// Function: entry_002598f0
// Address: 0x2598f0 - 0x259908
void entry_002598f0_0x2598f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002598f0_0x2598f0");
#endif

    ctx->pc = 0x2598f0u;

    // 0x2598f0: 0x2a020050  slti        $v0, $s0, 0x50
    ctx->pc = 0x2598f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2598f4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2598F4u;
    {
        const bool branch_taken_0x2598f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2598f4) {
            ctx->pc = 0x2598C8u;
            return;
        }
    }
    ctx->pc = 0x2598FCu;
    // 0x2598fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2598fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x259900: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x259900u;
    {
        const bool branch_taken_0x259900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259900) {
            ctx->pc = 0x259B30u;
            return;
        }
    }
    ctx->pc = 0x259908u;
}
