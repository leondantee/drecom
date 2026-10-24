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

// Function: entry_0032af10
// Address: 0x32af10 - 0x32af30
void entry_0032af10_0x32af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032af10_0x32af10");
#endif

    ctx->pc = 0x32af10u;

    // 0x32af10: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32af10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32af14: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32af18: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32af1c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32af20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32af20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32af24: 0xac6428dc  sw          $a0, 0x28DC($v1)
    ctx->pc = 0x32af24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10460), GPR_U32(ctx, 4));
    // 0x32af28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32AF28u;
    {
        const bool branch_taken_0x32af28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32af28) {
            ctx->pc = 0x32AF50u;
            return;
        }
    }
    ctx->pc = 0x32AF30u;
}
