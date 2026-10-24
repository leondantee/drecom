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

// Function: entry_00174a48
// Address: 0x174a48 - 0x174a5c
void entry_00174a48_0x174a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a48_0x174a48");
#endif

    ctx->pc = 0x174a48u;

    // 0x174a48: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174A48u;
    {
        const bool branch_taken_0x174a48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x174a48) {
            ctx->pc = 0x174A5Cu;
            return;
        }
    }
    ctx->pc = 0x174A50u;
    // 0x174a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174A54u;
    {
        const bool branch_taken_0x174a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a54) {
            ctx->pc = 0x174A60u;
            return;
        }
    }
    ctx->pc = 0x174A5Cu;
}
