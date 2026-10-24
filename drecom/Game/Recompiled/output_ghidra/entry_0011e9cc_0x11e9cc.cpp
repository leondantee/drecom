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

// Function: entry_0011e9cc
// Address: 0x11e9cc - 0x11e9d8
void entry_0011e9cc_0x11e9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e9cc_0x11e9cc");
#endif

    ctx->pc = 0x11e9ccu;

    // 0x11e9cc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11E9CCu;
    {
        const bool branch_taken_0x11e9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e9cc) {
            ctx->pc = 0x11EA20u;
            return;
        }
    }
    ctx->pc = 0x11E9D4u;
    // 0x11e9d4: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x11e9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    ctx->pc = 0x11e9d8u;
}
