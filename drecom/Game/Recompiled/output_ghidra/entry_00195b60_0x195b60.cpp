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

// Function: entry_00195b60
// Address: 0x195b60 - 0x195b78
void entry_00195b60_0x195b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195b60_0x195b60");
#endif

    ctx->pc = 0x195b60u;

    // 0x195b60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195b64: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195b64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195b68: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x195b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x195b6c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x195b6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x195b70: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x195B70u;
    {
        const bool branch_taken_0x195b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b70) {
            ctx->pc = 0x195B2Cu;
            return;
        }
    }
    ctx->pc = 0x195B78u;
}
