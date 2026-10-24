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

// Function: caseD_d
// Address: 0x1e92bc - 0x1e92c4
void caseD_d_0x1e92bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1e92bc");
#endif

    ctx->pc = 0x1e92bcu;

    // 0x1e92bc: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x1E92BCu;
    {
        const bool branch_taken_0x1e92bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e92bc) {
            ctx->pc = 0x1E9C30u;
            return;
        }
    }
    ctx->pc = 0x1E92C4u;
}
