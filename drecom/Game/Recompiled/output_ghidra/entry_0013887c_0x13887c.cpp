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

// Function: entry_0013887c
// Address: 0x13887c - 0x13889c
void entry_0013887c_0x13887c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013887c_0x13887c");
#endif

    ctx->pc = 0x13887cu;

    // 0x13887c: 0x8664008e  lh          $a0, 0x8E($s3)
    ctx->pc = 0x13887cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x138880: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x138880u;
    {
        const bool branch_taken_0x138880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x138880) {
            ctx->pc = 0x13889Cu;
            return;
        }
    }
    ctx->pc = 0x138888u;
    // 0x138888: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x138888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x13888c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x138890: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x138890u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x138894: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x138894u;
    {
        const bool branch_taken_0x138894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138894) {
            ctx->pc = 0x1389B0u;
            return;
        }
    }
    ctx->pc = 0x13889Cu;
}
