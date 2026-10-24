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

// Function: entry_0010bd00
// Address: 0x10bd00 - 0x10bd24
void entry_0010bd00_0x10bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bd00_0x10bd00");
#endif

    ctx->pc = 0x10bd00u;

label_10bd00:
    // 0x10bd00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10bd04: 0x0  nop
    ctx->pc = 0x10bd04u;
    // NOP
    // 0x10bd08: 0x0  nop
    ctx->pc = 0x10bd08u;
    // NOP
    // 0x10bd0c: 0x0  nop
    ctx->pc = 0x10bd0cu;
    // NOP
    // 0x10bd10: 0x0  nop
    ctx->pc = 0x10bd10u;
    // NOP
    // 0x10bd14: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BD14u;
    {
        const bool branch_taken_0x10bd14 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bd14) {
            ctx->pc = 0x10BD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bd00;
        }
    }
    ctx->pc = 0x10BD1Cu;
    // 0x10bd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BD24u;
}
