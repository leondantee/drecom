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

// Function: entry_0018e780
// Address: 0x18e780 - 0x18e788
void entry_0018e780_0x18e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e780_0x18e780");
#endif

    ctx->pc = 0x18e780u;

    // 0x18e780: 0x1600ffb2  bnez        $s0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x18E780u;
    {
        const bool branch_taken_0x18e780 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e780) {
            ctx->pc = 0x18E64Cu;
            return;
        }
    }
    ctx->pc = 0x18E788u;
}
