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

// Function: entry_003233b4
// Address: 0x3233b4 - 0x3233cc
void entry_003233b4_0x3233b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003233b4_0x3233b4");
#endif

    ctx->pc = 0x3233b4u;

    // 0x3233b4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3233b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3233b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3233B8u;
    {
        const bool branch_taken_0x3233b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3233b8) {
            ctx->pc = 0x3233CCu;
            return;
        }
    }
    ctx->pc = 0x3233C0u;
    // 0x3233c0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x3233c0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3233c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3233C4u;
    {
        const bool branch_taken_0x3233c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3233c4) {
            ctx->pc = 0x3233E0u;
            return;
        }
    }
    ctx->pc = 0x3233CCu;
}
