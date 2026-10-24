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

// Function: entry_00125bfc
// Address: 0x125bfc - 0x125c04
void entry_00125bfc_0x125bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125bfc_0x125bfc");
#endif

    ctx->pc = 0x125bfcu;

    // 0x125bfc: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x125BFCu;
    {
        const bool branch_taken_0x125bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125bfc) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125C04u;
}
