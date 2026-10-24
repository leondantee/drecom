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

// Function: entry_001556b8
// Address: 0x1556b8 - 0x1556d8
void entry_001556b8_0x1556b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001556b8_0x1556b8");
#endif

    ctx->pc = 0x1556b8u;

    // 0x1556b8: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1556bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1556bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1556c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1556c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1556c4: 0x4410033  bgez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1556C4u;
    {
        const bool branch_taken_0x1556c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1556c4) {
            ctx->pc = 0x155794u;
            return;
        }
    }
    ctx->pc = 0x1556CCu;
    // 0x1556cc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1556ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1556d0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1556D0u;
    {
        const bool branch_taken_0x1556d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556d0) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x1556D8u;
}
