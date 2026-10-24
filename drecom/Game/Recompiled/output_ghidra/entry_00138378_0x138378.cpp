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

// Function: entry_00138378
// Address: 0x138378 - 0x138388
void entry_00138378_0x138378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138378_0x138378");
#endif

    ctx->pc = 0x138378u;

    // 0x138378: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x138378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x13837c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13837Cu;
    {
        const bool branch_taken_0x13837c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13837c) {
            ctx->pc = 0x138330u;
            return;
        }
    }
    ctx->pc = 0x138384u;
    // 0x138384: 0x0  nop
    ctx->pc = 0x138384u;
    // NOP
    ctx->pc = 0x138388u;
}
