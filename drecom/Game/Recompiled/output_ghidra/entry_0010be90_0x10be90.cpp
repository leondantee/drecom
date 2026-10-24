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

// Function: entry_0010be90
// Address: 0x10be90 - 0x10beac
void entry_0010be90_0x10be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be90_0x10be90");
#endif

    ctx->pc = 0x10be90u;

label_10be90:
    // 0x10be90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10be94: 0x0  nop
    ctx->pc = 0x10be94u;
    // NOP
    // 0x10be98: 0x0  nop
    ctx->pc = 0x10be98u;
    // NOP
    // 0x10be9c: 0x0  nop
    ctx->pc = 0x10be9cu;
    // NOP
    // 0x10bea0: 0x0  nop
    ctx->pc = 0x10bea0u;
    // NOP
    // 0x10bea4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BEA4u;
    {
        const bool branch_taken_0x10bea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10bea4) {
            ctx->pc = 0x10BE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10be90;
        }
    }
    ctx->pc = 0x10BEACu;
}
