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

// Function: entry_00171a88
// Address: 0x171a88 - 0x171aa8
void entry_00171a88_0x171a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171a88_0x171a88");
#endif

    ctx->pc = 0x171a88u;

    // 0x171a88: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x171a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x171a8c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x171a8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171a90: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x171A90u;
    {
        const bool branch_taken_0x171a90 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x171a90) {
            ctx->pc = 0x171AA8u;
            return;
        }
    }
    ctx->pc = 0x171A98u;
    // 0x171a98: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x171a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171a9c: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x171a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x171aa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171AA0u;
    {
        const bool branch_taken_0x171aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171aa0) {
            ctx->pc = 0x171AB0u;
            return;
        }
    }
    ctx->pc = 0x171AA8u;
}
