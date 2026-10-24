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

// Function: entry_0018bd18
// Address: 0x18bd18 - 0x18bd38
void entry_0018bd18_0x18bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bd18_0x18bd18");
#endif

    ctx->pc = 0x18bd18u;

    // 0x18bd18: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x18bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x18bd1c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x18bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x18bd20: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BD20u;
    {
        const bool branch_taken_0x18bd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18bd20) {
            ctx->pc = 0x18BD38u;
            return;
        }
    }
    ctx->pc = 0x18BD28u;
    // 0x18bd28: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x18bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x18bd2c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x18bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x18bd30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18BD30u;
    {
        const bool branch_taken_0x18bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd30) {
            ctx->pc = 0x18BD48u;
            return;
        }
    }
    ctx->pc = 0x18BD38u;
}
