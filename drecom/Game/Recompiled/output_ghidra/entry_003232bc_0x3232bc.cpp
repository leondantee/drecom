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

// Function: entry_003232bc
// Address: 0x3232bc - 0x3232c4
void entry_003232bc_0x3232bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003232bc_0x3232bc");
#endif

    ctx->pc = 0x3232bcu;

    // 0x3232bc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3232BCu;
    {
        const bool branch_taken_0x3232bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3232bc) {
            ctx->pc = 0x3232C4u;
            return;
        }
    }
    ctx->pc = 0x3232C4u;
}
