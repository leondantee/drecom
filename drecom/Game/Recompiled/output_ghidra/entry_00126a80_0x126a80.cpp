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

// Function: entry_00126a80
// Address: 0x126a80 - 0x126a88
void entry_00126a80_0x126a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126a80_0x126a80");
#endif

    ctx->pc = 0x126a80u;

    // 0x126a80: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x126A80u;
    {
        const bool branch_taken_0x126a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126a80) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126A88u;
}
