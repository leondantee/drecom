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

// Function: entry_002972fc
// Address: 0x2972fc - 0x297310
void entry_002972fc_0x2972fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002972fc_0x2972fc");
#endif

    ctx->pc = 0x2972fcu;

    // 0x2972fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2972fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297300: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x297300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x297304: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x297304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x297308: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297308u;
    {
        const bool branch_taken_0x297308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297308) {
            ctx->pc = 0x297328u;
            return;
        }
    }
    ctx->pc = 0x297310u;
}
