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

// Function: entry_0015dc5c
// Address: 0x15dc5c - 0x15dc6c
void entry_0015dc5c_0x15dc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dc5c_0x15dc5c");
#endif

    ctx->pc = 0x15dc5cu;

    // 0x15dc5c: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15dc60: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15DC60u;
    {
        const bool branch_taken_0x15dc60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15dc60) {
            ctx->pc = 0x15DC6Cu;
            return;
        }
    }
    ctx->pc = 0x15DC68u;
    // 0x15dc68: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x15dc68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x15dc6cu;
}
