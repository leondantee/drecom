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

// Function: entry_00125868
// Address: 0x125868 - 0x125870
void entry_00125868_0x125868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125868_0x125868");
#endif

    ctx->pc = 0x125868u;

    // 0x125868: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x125868u;
    {
        const bool branch_taken_0x125868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125868) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125870u;
}
