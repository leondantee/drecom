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

// Function: entry_0032617c
// Address: 0x32617c - 0x32618c
void entry_0032617c_0x32617c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032617c_0x32617c");
#endif

    ctx->pc = 0x32617cu;

    // 0x32617c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x32617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326180: 0xa0400210  sb          $zero, 0x210($v0)
    ctx->pc = 0x326180u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 528), (uint8_t)GPR_U32(ctx, 0));
    // 0x326184: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x326184u;
    {
        const bool branch_taken_0x326184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326184) {
            ctx->pc = 0x3261D8u;
            return;
        }
    }
    ctx->pc = 0x32618Cu;
}
