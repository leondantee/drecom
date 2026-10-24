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

// Function: entry_002768a8
// Address: 0x2768a8 - 0x2768c0
void entry_002768a8_0x2768a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002768a8_0x2768a8");
#endif

    ctx->pc = 0x2768a8u;

    // 0x2768a8: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x2768a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2768ac: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2768ACu;
    {
        const bool branch_taken_0x2768ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2768ac) {
            ctx->pc = 0x276730u;
            return;
        }
    }
    ctx->pc = 0x2768B4u;
    // 0x2768b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2768b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2768b8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2768B8u;
    {
        const bool branch_taken_0x2768b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2768b8) {
            ctx->pc = 0x276AF8u;
            return;
        }
    }
    ctx->pc = 0x2768C0u;
}
