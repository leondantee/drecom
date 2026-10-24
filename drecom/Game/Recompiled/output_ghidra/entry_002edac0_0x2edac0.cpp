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

// Function: entry_002edac0
// Address: 0x2edac0 - 0x2edad0
void entry_002edac0_0x2edac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002edac0_0x2edac0");
#endif

    ctx->pc = 0x2edac0u;

    // 0x2edac0: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2edac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2edac4: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x2EDAC4u;
    {
        const bool branch_taken_0x2edac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edac4) {
            ctx->pc = 0x2ED8A8u;
            return;
        }
    }
    ctx->pc = 0x2EDACCu;
    // 0x2edacc: 0x0  nop
    ctx->pc = 0x2edaccu;
    // NOP
    ctx->pc = 0x2edad0u;
}
