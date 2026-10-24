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

// Function: entry_00137e78
// Address: 0x137e78 - 0x137e90
void entry_00137e78_0x137e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e78_0x137e78");
#endif

    ctx->pc = 0x137e78u;

    // 0x137e78: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x137e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x137e7c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x137E7Cu;
    {
        const bool branch_taken_0x137e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137e7c) {
            ctx->pc = 0x137E44u;
            return;
        }
    }
    ctx->pc = 0x137E84u;
    // 0x137e84: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137e84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x137e88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x137E88u;
    {
        const bool branch_taken_0x137e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e88) {
            ctx->pc = 0x137EB8u;
            return;
        }
    }
    ctx->pc = 0x137E90u;
}
