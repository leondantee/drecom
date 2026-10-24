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

// Function: entry_00126aec
// Address: 0x126aec - 0x126af4
void entry_00126aec_0x126aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126aec_0x126aec");
#endif

    ctx->pc = 0x126aecu;

    // 0x126aec: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x126AECu;
    {
        const bool branch_taken_0x126aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126aec) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126AF4u;
}
