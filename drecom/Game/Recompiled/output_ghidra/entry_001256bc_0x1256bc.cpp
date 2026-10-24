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

// Function: entry_001256bc
// Address: 0x1256bc - 0x1256c4
void entry_001256bc_0x1256bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001256bc_0x1256bc");
#endif

    ctx->pc = 0x1256bcu;

    // 0x1256bc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1256BCu;
    {
        const bool branch_taken_0x1256bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1256bc) {
            ctx->pc = 0x1256C4u;
            return;
        }
    }
    ctx->pc = 0x1256C4u;
}
