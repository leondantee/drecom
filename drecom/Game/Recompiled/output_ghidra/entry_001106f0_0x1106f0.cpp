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

// Function: entry_001106f0
// Address: 0x1106f0 - 0x110704
void entry_001106f0_0x1106f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001106f0_0x1106f0");
#endif

    ctx->pc = 0x1106f0u;

    // 0x1106f0: 0x8c435230  lw          $v1, 0x5230($v0)
    ctx->pc = 0x1106f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21040)));
    // 0x1106f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1106F4u;
    {
        const bool branch_taken_0x1106f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1106f4) {
            ctx->pc = 0x110704u;
            return;
        }
    }
    ctx->pc = 0x1106FCu;
    // 0x1106fc: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x1106fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x110700: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x110700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x110704u;
}
