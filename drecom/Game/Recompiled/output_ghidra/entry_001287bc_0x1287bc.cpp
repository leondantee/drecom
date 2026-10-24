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

// Function: entry_001287bc
// Address: 0x1287bc - 0x1287c4
void entry_001287bc_0x1287bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001287bc_0x1287bc");
#endif

    ctx->pc = 0x1287bcu;

    // 0x1287bc: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x1287BCu;
    {
        const bool branch_taken_0x1287bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287bc) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x1287C4u;
}
