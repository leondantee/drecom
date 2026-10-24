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

// Function: entry_0016dea8
// Address: 0x16dea8 - 0x16deb8
void entry_0016dea8_0x16dea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dea8_0x16dea8");
#endif

    ctx->pc = 0x16dea8u;

    // 0x16dea8: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x16dea8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16deac: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16DEACu;
    {
        const bool branch_taken_0x16deac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16deac) {
            ctx->pc = 0x16DE88u;
            return;
        }
    }
    ctx->pc = 0x16DEB4u;
    // 0x16deb4: 0x0  nop
    ctx->pc = 0x16deb4u;
    // NOP
    ctx->pc = 0x16deb8u;
}
