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

// Function: entry_002130fc
// Address: 0x2130fc - 0x213100
void entry_002130fc_0x2130fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002130fc_0x2130fc");
#endif

    ctx->pc = 0x2130fcu;

    // 0x2130fc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2130FCu;
    {
        const bool branch_taken_0x2130fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2130fc) {
            ctx->pc = 0x213108u;
            return;
        }
    }
    ctx->pc = 0x213104u;
}
