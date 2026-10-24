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

// Function: entry_00110638
// Address: 0x110638 - 0x110654
void entry_00110638_0x110638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110638_0x110638");
#endif

    ctx->pc = 0x110638u;

label_110638:
    // 0x110638: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x110638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11063c: 0x0  nop
    ctx->pc = 0x11063cu;
    // NOP
    // 0x110640: 0x0  nop
    ctx->pc = 0x110640u;
    // NOP
    // 0x110644: 0x0  nop
    ctx->pc = 0x110644u;
    // NOP
    // 0x110648: 0x0  nop
    ctx->pc = 0x110648u;
    // NOP
    // 0x11064c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11064Cu;
    {
        const bool branch_taken_0x11064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11064c) {
            ctx->pc = 0x110638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110638;
        }
    }
    ctx->pc = 0x110654u;
}
