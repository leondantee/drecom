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

// Function: entry_00123908
// Address: 0x123908 - 0x123920
void entry_00123908_0x123908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123908_0x123908");
#endif

    ctx->pc = 0x123908u;

    // 0x123908: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x123908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x12390c: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x12390Cu;
    {
        const bool branch_taken_0x12390c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12390c) {
            ctx->pc = 0x123874u;
            return;
        }
    }
    ctx->pc = 0x123914u;
    // 0x123914: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123914u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123918: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x123918u;
    {
        const bool branch_taken_0x123918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123918) {
            ctx->pc = 0x1239B0u;
            return;
        }
    }
    ctx->pc = 0x123920u;
}
