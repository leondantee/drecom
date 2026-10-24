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

// Function: entry_0016a148
// Address: 0x16a148 - 0x16a158
void entry_0016a148_0x16a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a148_0x16a148");
#endif

    ctx->pc = 0x16a148u;

    // 0x16a148: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x16a148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16a14c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16A14Cu;
    {
        const bool branch_taken_0x16a14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a14c) {
            ctx->pc = 0x16A128u;
            return;
        }
    }
    ctx->pc = 0x16A154u;
    // 0x16a154: 0x0  nop
    ctx->pc = 0x16a154u;
    // NOP
    ctx->pc = 0x16a158u;
}
