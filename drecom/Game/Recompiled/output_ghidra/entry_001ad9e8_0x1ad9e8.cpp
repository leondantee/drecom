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

// Function: entry_001ad9e8
// Address: 0x1ad9e8 - 0x1ada04
void entry_001ad9e8_0x1ad9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad9e8_0x1ad9e8");
#endif

    ctx->pc = 0x1ad9e8u;

    // 0x1ad9e8: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1ad9e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ad9ec: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1AD9ECu;
    {
        const bool branch_taken_0x1ad9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9ec) {
            ctx->pc = 0x1AD87Cu;
            return;
        }
    }
    ctx->pc = 0x1AD9F4u;
    // 0x1ad9f4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1ad9f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad9f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ad9f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad9fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ad9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ada00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ada00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1ada04u;
}
