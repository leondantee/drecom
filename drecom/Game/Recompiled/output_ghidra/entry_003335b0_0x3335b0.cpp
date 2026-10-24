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

// Function: entry_003335b0
// Address: 0x3335b0 - 0x3335c0
void entry_003335b0_0x3335b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003335b0_0x3335b0");
#endif

    ctx->pc = 0x3335b0u;

    // 0x3335b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3335b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3335b4: 0xae035dc0  sw          $v1, 0x5DC0($s0)
    ctx->pc = 0x3335b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 3));
    // 0x3335b8: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x3335B8u;
    {
        const bool branch_taken_0x3335b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3335b8) {
            ctx->pc = 0x3339F0u;
            return;
        }
    }
    ctx->pc = 0x3335C0u;
}
