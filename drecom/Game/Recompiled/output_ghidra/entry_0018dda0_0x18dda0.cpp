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

// Function: entry_0018dda0
// Address: 0x18dda0 - 0x18ddb0
void entry_0018dda0_0x18dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dda0_0x18dda0");
#endif

    ctx->pc = 0x18dda0u;

    // 0x18dda0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dda4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x18dda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18dda8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18DDA8u;
    {
        const bool branch_taken_0x18dda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dda8) {
            ctx->pc = 0x18DD7Cu;
            return;
        }
    }
    ctx->pc = 0x18DDB0u;
}
