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

// Function: entry_001239b0
// Address: 0x1239b0 - 0x1239c8
void entry_001239b0_0x1239b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001239b0_0x1239b0");
#endif

    ctx->pc = 0x1239b0u;

    // 0x1239b0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1239b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1239b4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1239B4u;
    {
        const bool branch_taken_0x1239b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1239b4) {
            ctx->pc = 0x123920u;
            return;
        }
    }
    ctx->pc = 0x1239BCu;
    // 0x1239bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1239bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1239c0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1239C0u;
    {
        const bool branch_taken_0x1239c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1239c0) {
            ctx->pc = 0x123A58u;
            return;
        }
    }
    ctx->pc = 0x1239C8u;
}
