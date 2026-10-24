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

// Function: entry_00138cb0
// Address: 0x138cb0 - 0x138cc8
void entry_00138cb0_0x138cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138cb0_0x138cb0");
#endif

    ctx->pc = 0x138cb0u;

    // 0x138cb0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138cb4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x138CB4u;
    {
        const bool branch_taken_0x138cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138cb4) {
            ctx->pc = 0x138C88u;
            return;
        }
    }
    ctx->pc = 0x138CBCu;
    // 0x138cbc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138cbcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138cc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138CC0u;
    {
        const bool branch_taken_0x138cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138cc0) {
            ctx->pc = 0x138CF0u;
            return;
        }
    }
    ctx->pc = 0x138CC8u;
}
