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

// Function: entry_0018a358
// Address: 0x18a358 - 0x18a370
void entry_0018a358_0x18a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a358_0x18a358");
#endif

    ctx->pc = 0x18a358u;

    // 0x18a358: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x18a358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x18a35c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A35Cu;
    {
        const bool branch_taken_0x18a35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a35c) {
            ctx->pc = 0x18A348u;
            return;
        }
    }
    ctx->pc = 0x18A364u;
    // 0x18a364: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a364u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a368: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A368u;
    {
        const bool branch_taken_0x18a368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a368) {
            ctx->pc = 0x18A380u;
            return;
        }
    }
    ctx->pc = 0x18A370u;
}
