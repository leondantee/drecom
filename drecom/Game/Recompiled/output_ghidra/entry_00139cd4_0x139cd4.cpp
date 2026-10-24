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

// Function: entry_00139cd4
// Address: 0x139cd4 - 0x139cdc
void entry_00139cd4_0x139cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139cd4_0x139cd4");
#endif

    ctx->pc = 0x139cd4u;

    // 0x139cd4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x139CD4u;
    {
        const bool branch_taken_0x139cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cd4) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139CDCu;
}
