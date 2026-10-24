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

// Function: entry_00179b38
// Address: 0x179b38 - 0x179b40
void entry_00179b38_0x179b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179b38_0x179b38");
#endif

    ctx->pc = 0x179b38u;

    // 0x179b38: 0x1620ff8b  bnez        $s1, . + 4 + (-0x75 << 2)
    ctx->pc = 0x179B38u;
    {
        const bool branch_taken_0x179b38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x179b38) {
            ctx->pc = 0x179968u;
            return;
        }
    }
    ctx->pc = 0x179B40u;
}
