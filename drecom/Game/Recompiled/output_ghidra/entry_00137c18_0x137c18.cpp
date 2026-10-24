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

// Function: entry_00137c18
// Address: 0x137c18 - 0x137c30
void entry_00137c18_0x137c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137c18_0x137c18");
#endif

    ctx->pc = 0x137c18u;

    // 0x137c18: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x137c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x137c1c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x137C1Cu;
    {
        const bool branch_taken_0x137c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137c1c) {
            ctx->pc = 0x137BE4u;
            return;
        }
    }
    ctx->pc = 0x137C24u;
    // 0x137c24: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137c24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x137c28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x137C28u;
    {
        const bool branch_taken_0x137c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137c28) {
            ctx->pc = 0x137C58u;
            return;
        }
    }
    ctx->pc = 0x137C30u;
}
