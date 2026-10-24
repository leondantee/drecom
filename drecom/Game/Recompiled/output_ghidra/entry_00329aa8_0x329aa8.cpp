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

// Function: entry_00329aa8
// Address: 0x329aa8 - 0x329ab4
void entry_00329aa8_0x329aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329aa8_0x329aa8");
#endif

    ctx->pc = 0x329aa8u;

    // 0x329aa8: 0xae002828  sw          $zero, 0x2828($s0)
    ctx->pc = 0x329aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10280), GPR_U32(ctx, 0));
    // 0x329aac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x329AACu;
    {
        const bool branch_taken_0x329aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329aac) {
            ctx->pc = 0x329AD0u;
            return;
        }
    }
    ctx->pc = 0x329AB4u;
}
