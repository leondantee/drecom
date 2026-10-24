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

// Function: entry_002db524
// Address: 0x2db524 - 0x2db52c
void entry_002db524_0x2db524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db524_0x2db524");
#endif

    ctx->pc = 0x2db524u;

    // 0x2db524: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2DB524u;
    {
        const bool branch_taken_0x2db524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db524) {
            ctx->pc = 0x2DB604u;
            return;
        }
    }
    ctx->pc = 0x2DB52Cu;
}
