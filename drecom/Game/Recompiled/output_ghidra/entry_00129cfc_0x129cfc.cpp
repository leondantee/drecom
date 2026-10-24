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

// Function: entry_00129cfc
// Address: 0x129cfc - 0x129d04
void entry_00129cfc_0x129cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129cfc_0x129cfc");
#endif

    ctx->pc = 0x129cfcu;

    // 0x129cfc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x129CFCu;
    {
        const bool branch_taken_0x129cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129cfc) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x129D04u;
}
