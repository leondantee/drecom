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

// Function: entry_0032fba0
// Address: 0x32fba0 - 0x32fbb4
void entry_0032fba0_0x32fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fba0_0x32fba0");
#endif

    ctx->pc = 0x32fba0u;

    // 0x32fba0: 0x8e635dd0  lw          $v1, 0x5DD0($s3)
    ctx->pc = 0x32fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24016)));
    // 0x32fba4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32FBA4u;
    {
        const bool branch_taken_0x32fba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fba4) {
            ctx->pc = 0x32FBB4u;
            return;
        }
    }
    ctx->pc = 0x32FBACu;
    // 0x32fbac: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x32FBACu;
    {
        const bool branch_taken_0x32fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fbac) {
            ctx->pc = 0x330080u;
            return;
        }
    }
    ctx->pc = 0x32FBB4u;
}
