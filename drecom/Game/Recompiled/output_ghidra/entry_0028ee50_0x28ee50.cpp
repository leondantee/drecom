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

// Function: entry_0028ee50
// Address: 0x28ee50 - 0x28ee5c
void entry_0028ee50_0x28ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ee50_0x28ee50");
#endif

    ctx->pc = 0x28ee50u;

    // 0x28ee50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ee54: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x28EE54u;
    {
        const bool branch_taken_0x28ee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee54) {
            ctx->pc = 0x28F040u;
            return;
        }
    }
    ctx->pc = 0x28EE5Cu;
}
