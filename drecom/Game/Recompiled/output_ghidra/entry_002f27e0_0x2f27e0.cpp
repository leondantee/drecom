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

// Function: entry_002f27e0
// Address: 0x2f27e0 - 0x2f27f0
void entry_002f27e0_0x2f27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f27e0_0x2f27e0");
#endif

    ctx->pc = 0x2f27e0u;

    // 0x2f27e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f27e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f27e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f27e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f27e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F27E8u;
    {
        const bool branch_taken_0x2f27e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f27e8) {
            ctx->pc = 0x2F2814u;
            return;
        }
    }
    ctx->pc = 0x2F27F0u;
}
