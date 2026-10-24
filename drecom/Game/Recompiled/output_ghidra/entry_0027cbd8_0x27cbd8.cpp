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

// Function: entry_0027cbd8
// Address: 0x27cbd8 - 0x27cbe4
void entry_0027cbd8_0x27cbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027cbd8_0x27cbd8");
#endif

    ctx->pc = 0x27cbd8u;

    // 0x27cbd8: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x27cbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27cbdc: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x27CBDCu;
    {
        const bool branch_taken_0x27cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cbdc) {
            ctx->pc = 0x27CE40u;
            return;
        }
    }
    ctx->pc = 0x27CBE4u;
}
