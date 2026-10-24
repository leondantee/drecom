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

// Function: entry_0025780c
// Address: 0x25780c - 0x257824
void entry_0025780c_0x25780c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025780c_0x25780c");
#endif

    ctx->pc = 0x25780cu;

    // 0x25780c: 0x2a21fff7  slti        $at, $s1, -0x9
    ctx->pc = 0x25780cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x257810: 0x1420009c  bnez        $at, . + 4 + (0x9C << 2)
    ctx->pc = 0x257810u;
    {
        const bool branch_taken_0x257810 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x257810) {
            ctx->pc = 0x257A84u;
            return;
        }
    }
    ctx->pc = 0x257818u;
    // 0x257818: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x257818u;
    {
        const bool branch_taken_0x257818 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x257818) {
            ctx->pc = 0x257824u;
            return;
        }
    }
    ctx->pc = 0x257820u;
    // 0x257820: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257820u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x257824u;
}
