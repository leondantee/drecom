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

// Function: entry_001547b0
// Address: 0x1547b0 - 0x1547bc
void entry_001547b0_0x1547b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001547b0_0x1547b0");
#endif

    ctx->pc = 0x1547b0u;

    // 0x1547b0: 0xa200157c  sb          $zero, 0x157C($s0)
    ctx->pc = 0x1547b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1547b4: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x1547B4u;
    {
        const bool branch_taken_0x1547b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547b4) {
            ctx->pc = 0x15504Cu;
            return;
        }
    }
    ctx->pc = 0x1547BCu;
}
