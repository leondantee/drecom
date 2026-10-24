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

// Function: entry_001a1340
// Address: 0x1a1340 - 0x1a134c
void entry_001a1340_0x1a1340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1340_0x1a1340");
#endif

    ctx->pc = 0x1a1340u;

    // 0x1a1340: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a1340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a1344: 0x601ff7a  bgez        $s0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x1A1344u;
    {
        const bool branch_taken_0x1a1344 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a1344) {
            ctx->pc = 0x1A1130u;
            return;
        }
    }
    ctx->pc = 0x1A134Cu;
}
