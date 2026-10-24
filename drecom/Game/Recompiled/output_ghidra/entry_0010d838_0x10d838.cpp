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

// Function: entry_0010d838
// Address: 0x10d838 - 0x10d854
void entry_0010d838_0x10d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d838_0x10d838");
#endif

    ctx->pc = 0x10d838u;

label_10d838:
    // 0x10d838: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d83c: 0x0  nop
    ctx->pc = 0x10d83cu;
    // NOP
    // 0x10d840: 0x0  nop
    ctx->pc = 0x10d840u;
    // NOP
    // 0x10d844: 0x0  nop
    ctx->pc = 0x10d844u;
    // NOP
    // 0x10d848: 0x0  nop
    ctx->pc = 0x10d848u;
    // NOP
    // 0x10d84c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D84Cu;
    {
        const bool branch_taken_0x10d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d84c) {
            ctx->pc = 0x10D838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d838;
        }
    }
    ctx->pc = 0x10D854u;
}
