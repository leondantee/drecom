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

// Function: entry_0018e900
// Address: 0x18e900 - 0x18e914
void entry_0018e900_0x18e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e900_0x18e900");
#endif

    ctx->pc = 0x18e900u;

    // 0x18e900: 0x1640ffea  bnez        $s2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18E900u;
    {
        const bool branch_taken_0x18e900 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e900) {
            ctx->pc = 0x18E8ACu;
            return;
        }
    }
    ctx->pc = 0x18E908u;
    // 0x18e908: 0x8e710068  lw          $s1, 0x68($s3)
    ctx->pc = 0x18e908u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x18e90c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18E90Cu;
    {
        const bool branch_taken_0x18e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e90c) {
            ctx->pc = 0x18E9A0u;
            return;
        }
    }
    ctx->pc = 0x18E914u;
}
