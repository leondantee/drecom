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

// Function: entry_0018bc88
// Address: 0x18bc88 - 0x18bca8
void entry_0018bc88_0x18bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bc88_0x18bc88");
#endif

    ctx->pc = 0x18bc88u;

    // 0x18bc88: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x18bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x18bc8c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x18bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x18bc90: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BC90u;
    {
        const bool branch_taken_0x18bc90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18bc90) {
            ctx->pc = 0x18BCA8u;
            return;
        }
    }
    ctx->pc = 0x18BC98u;
    // 0x18bc98: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x18bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x18bc9c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x18bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x18bca0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18BCA0u;
    {
        const bool branch_taken_0x18bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bca0) {
            ctx->pc = 0x18BCB8u;
            return;
        }
    }
    ctx->pc = 0x18BCA8u;
}
