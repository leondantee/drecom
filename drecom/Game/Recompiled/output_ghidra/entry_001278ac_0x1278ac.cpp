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

// Function: entry_001278ac
// Address: 0x1278ac - 0x1278b4
void entry_001278ac_0x1278ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001278ac_0x1278ac");
#endif

    ctx->pc = 0x1278acu;

    // 0x1278ac: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1278ACu;
    {
        const bool branch_taken_0x1278ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1278ac) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x1278B4u;
}
