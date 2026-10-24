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

// Function: entry_0012a4bc
// Address: 0x12a4bc - 0x12a4c4
void entry_0012a4bc_0x12a4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a4bc_0x12a4bc");
#endif

    ctx->pc = 0x12a4bcu;

    // 0x12a4bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12A4BCu;
    {
        const bool branch_taken_0x12a4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a4bc) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A4C4u;
}
