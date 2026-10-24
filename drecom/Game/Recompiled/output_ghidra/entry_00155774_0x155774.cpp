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

// Function: entry_00155774
// Address: 0x155774 - 0x155794
void entry_00155774_0x155774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155774_0x155774");
#endif

    ctx->pc = 0x155774u;

    // 0x155774: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x155774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x155778: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x155778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15577c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15577cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x155780: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155780u;
    {
        const bool branch_taken_0x155780 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x155780) {
            ctx->pc = 0x155794u;
            return;
        }
    }
    ctx->pc = 0x155788u;
    // 0x155788: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155788u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15578c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15578Cu;
    {
        const bool branch_taken_0x15578c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15578c) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x155794u;
}
