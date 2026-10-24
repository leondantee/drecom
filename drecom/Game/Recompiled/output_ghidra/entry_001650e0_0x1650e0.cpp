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

// Function: entry_001650e0
// Address: 0x1650e0 - 0x1650f0
void entry_001650e0_0x1650e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001650e0_0x1650e0");
#endif

    ctx->pc = 0x1650e0u;

    // 0x1650e0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1650e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1650e4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1650e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1650e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1650E8u;
    {
        const bool branch_taken_0x1650e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650e8) {
            ctx->pc = 0x165104u;
            return;
        }
    }
    ctx->pc = 0x1650F0u;
}
