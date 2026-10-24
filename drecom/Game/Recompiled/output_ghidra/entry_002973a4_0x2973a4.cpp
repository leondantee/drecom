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

// Function: entry_002973a4
// Address: 0x2973a4 - 0x2973b0
void entry_002973a4_0x2973a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002973a4_0x2973a4");
#endif

    ctx->pc = 0x2973a4u;

    // 0x2973a4: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x2973a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2973a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2973A8u;
    {
        const bool branch_taken_0x2973a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973a8) {
            ctx->pc = 0x2973D0u;
            return;
        }
    }
    ctx->pc = 0x2973B0u;
}
