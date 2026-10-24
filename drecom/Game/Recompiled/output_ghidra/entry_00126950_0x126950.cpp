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

// Function: entry_00126950
// Address: 0x126950 - 0x126958
void entry_00126950_0x126950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126950_0x126950");
#endif

    ctx->pc = 0x126950u;

    // 0x126950: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x126950u;
    {
        const bool branch_taken_0x126950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126950) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126958u;
}
