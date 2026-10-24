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

// Function: entry_002966d4
// Address: 0x2966d4 - 0x2966e0
void entry_002966d4_0x2966d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002966d4_0x2966d4");
#endif

    ctx->pc = 0x2966d4u;

    // 0x2966d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2966d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2966d8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2966D8u;
    {
        const bool branch_taken_0x2966d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966d8) {
            ctx->pc = 0x296A38u;
            return;
        }
    }
    ctx->pc = 0x2966E0u;
}
