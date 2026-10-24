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

// Function: entry_00138c70
// Address: 0x138c70 - 0x138c88
void entry_00138c70_0x138c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c70_0x138c70");
#endif

    ctx->pc = 0x138c70u;

    // 0x138c70: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138c70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138c74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x138C74u;
    {
        const bool branch_taken_0x138c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138c74) {
            ctx->pc = 0x138C48u;
            return;
        }
    }
    ctx->pc = 0x138C7Cu;
    // 0x138c7c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138c7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138c80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138C80u;
    {
        const bool branch_taken_0x138c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c80) {
            ctx->pc = 0x138CB0u;
            return;
        }
    }
    ctx->pc = 0x138C88u;
}
