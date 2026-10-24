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

// Function: entry_0011f69c
// Address: 0x11f69c - 0x11f6a8
void entry_0011f69c_0x11f69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f69c_0x11f69c");
#endif

    ctx->pc = 0x11f69cu;

    // 0x11f69c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F69Cu;
    {
        const bool branch_taken_0x11f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f69c) {
            ctx->pc = 0x11F6F0u;
            return;
        }
    }
    ctx->pc = 0x11F6A4u;
    // 0x11f6a4: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x11f6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    ctx->pc = 0x11f6a8u;
}
