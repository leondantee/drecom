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

// Function: entry_0010db40
// Address: 0x10db40 - 0x10db5c
void entry_0010db40_0x10db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010db40_0x10db40");
#endif

    ctx->pc = 0x10db40u;

label_10db40:
    // 0x10db40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10db40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10db44: 0x0  nop
    ctx->pc = 0x10db44u;
    // NOP
    // 0x10db48: 0x0  nop
    ctx->pc = 0x10db48u;
    // NOP
    // 0x10db4c: 0x0  nop
    ctx->pc = 0x10db4cu;
    // NOP
    // 0x10db50: 0x0  nop
    ctx->pc = 0x10db50u;
    // NOP
    // 0x10db54: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10DB54u;
    {
        const bool branch_taken_0x10db54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10db54) {
            ctx->pc = 0x10DB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10db40;
        }
    }
    ctx->pc = 0x10DB5Cu;
}
