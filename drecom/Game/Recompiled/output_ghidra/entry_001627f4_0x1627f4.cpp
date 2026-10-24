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

// Function: entry_001627f4
// Address: 0x1627f4 - 0x162800
void entry_001627f4_0x1627f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001627f4_0x1627f4");
#endif

    ctx->pc = 0x1627f4u;

    // 0x1627f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1627f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1627f8: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1627F8u;
    {
        const bool branch_taken_0x1627f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627f8) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x162800u;
}
