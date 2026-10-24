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

// Function: entry_0032ac98
// Address: 0x32ac98 - 0x32aca8
void entry_0032ac98_0x32ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ac98_0x32ac98");
#endif

    ctx->pc = 0x32ac98u;

    // 0x32ac98: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x32ac98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32ac9c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x32AC9Cu;
    {
        const bool branch_taken_0x32ac9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ac9c) {
            ctx->pc = 0x32AC48u;
            return;
        }
    }
    ctx->pc = 0x32ACA4u;
    // 0x32aca4: 0x0  nop
    ctx->pc = 0x32aca4u;
    // NOP
    ctx->pc = 0x32aca8u;
}
