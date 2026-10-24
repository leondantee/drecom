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

// Function: entry_00190c18
// Address: 0x190c18 - 0x190c30
void entry_00190c18_0x190c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190c18_0x190c18");
#endif

    ctx->pc = 0x190c18u;

    // 0x190c18: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x190c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x190c1c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x190C1Cu;
    {
        const bool branch_taken_0x190c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190c1c) {
            ctx->pc = 0x190BF0u;
            return;
        }
    }
    ctx->pc = 0x190C24u;
    // 0x190c24: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x190c24u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190c28: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x190C28u;
    {
        const bool branch_taken_0x190c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190c28) {
            ctx->pc = 0x190DD0u;
            return;
        }
    }
    ctx->pc = 0x190C30u;
}
