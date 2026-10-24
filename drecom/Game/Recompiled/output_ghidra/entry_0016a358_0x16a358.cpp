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

// Function: entry_0016a358
// Address: 0x16a358 - 0x16a368
void entry_0016a358_0x16a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a358_0x16a358");
#endif

    ctx->pc = 0x16a358u;

    // 0x16a358: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x16a358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16a35c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16A35Cu;
    {
        const bool branch_taken_0x16a35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a35c) {
            ctx->pc = 0x16A338u;
            return;
        }
    }
    ctx->pc = 0x16A364u;
    // 0x16a364: 0x0  nop
    ctx->pc = 0x16a364u;
    // NOP
    ctx->pc = 0x16a368u;
}
