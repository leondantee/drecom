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

// Function: entry_00165814
// Address: 0x165814 - 0x165838
void entry_00165814_0x165814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165814_0x165814");
#endif

    ctx->pc = 0x165814u;

    // 0x165814: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165818: 0x8c235a04  lw          $v1, 0x5A04($at)
    ctx->pc = 0x165818u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5A04u));
    // 0x16581c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165820: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x165820u;
    {
        const bool branch_taken_0x165820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x165820) {
            ctx->pc = 0x16587Cu;
            return;
        }
    }
    ctx->pc = 0x165828u;
    // 0x165828: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165828u;
    {
        const bool branch_taken_0x165828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165828) {
            ctx->pc = 0x165838u;
            return;
        }
    }
    ctx->pc = 0x165830u;
    // 0x165830: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x165830u;
    {
        const bool branch_taken_0x165830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165830) {
            ctx->pc = 0x1658A0u;
            return;
        }
    }
    ctx->pc = 0x165838u;
}
