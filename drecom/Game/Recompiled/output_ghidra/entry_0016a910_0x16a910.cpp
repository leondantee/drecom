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

// Function: entry_0016a910
// Address: 0x16a910 - 0x16a91c
void entry_0016a910_0x16a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a910_0x16a910");
#endif

    ctx->pc = 0x16a910u;

    // 0x16a910: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16a910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a914: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16A914u;
    {
        const bool branch_taken_0x16a914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a914) {
            ctx->pc = 0x16A944u;
            return;
        }
    }
    ctx->pc = 0x16A91Cu;
}
