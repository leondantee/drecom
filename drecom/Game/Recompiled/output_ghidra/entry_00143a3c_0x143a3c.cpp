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

// Function: entry_00143a3c
// Address: 0x143a3c - 0x143a5c
void entry_00143a3c_0x143a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143a3c_0x143a3c");
#endif

    ctx->pc = 0x143a3cu;

    // 0x143a3c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x143a40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x143A40u;
    {
        const bool branch_taken_0x143a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a40) {
            ctx->pc = 0x143A5Cu;
            return;
        }
    }
    ctx->pc = 0x143A48u;
    // 0x143a48: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x143a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x143a4c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x143a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x143a50: 0xae6301ec  sw          $v1, 0x1EC($s3)
    ctx->pc = 0x143a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 3));
    // 0x143a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143A54u;
    {
        const bool branch_taken_0x143a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a54) {
            ctx->pc = 0x143A60u;
            return;
        }
    }
    ctx->pc = 0x143A5Cu;
}
