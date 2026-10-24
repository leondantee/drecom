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

// Function: entry_00192870
// Address: 0x192870 - 0x19287c
void entry_00192870_0x192870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192870_0x192870");
#endif

    ctx->pc = 0x192870u;

    // 0x192870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192874: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x192874u;
    {
        const bool branch_taken_0x192874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192874) {
            ctx->pc = 0x19294Cu;
            return;
        }
    }
    ctx->pc = 0x19287Cu;
}
