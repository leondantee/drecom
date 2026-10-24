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

// Function: entry_0033a648
// Address: 0x33a648 - 0x33a660
void entry_0033a648_0x33a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a648_0x33a648");
#endif

    ctx->pc = 0x33a648u;

    // 0x33a648: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33a64c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x33a64cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a650: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x33a650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33a654: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x33a654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33a658: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33A658u;
    {
        const bool branch_taken_0x33a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a658) {
            ctx->pc = 0x33A698u;
            return;
        }
    }
    ctx->pc = 0x33A660u;
}
