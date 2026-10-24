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

// Function: entry_002fc9f8
// Address: 0x2fc9f8 - 0x2fca08
void entry_002fc9f8_0x2fc9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc9f8_0x2fc9f8");
#endif

    ctx->pc = 0x2fc9f8u;

    // 0x2fc9f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fc9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc9fc: 0xafa60168  sw          $a2, 0x168($sp)
    ctx->pc = 0x2fc9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 6));
    // 0x2fca00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCA00u;
    {
        const bool branch_taken_0x2fca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca00) {
            ctx->pc = 0x2FCA20u;
            return;
        }
    }
    ctx->pc = 0x2FCA08u;
}
