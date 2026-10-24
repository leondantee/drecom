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

// Function: entry_00138c08
// Address: 0x138c08 - 0x138c18
void entry_00138c08_0x138c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c08_0x138c08");
#endif

    ctx->pc = 0x138c08u;

    // 0x138c08: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x138c08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x138c0c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x138C0Cu;
    {
        const bool branch_taken_0x138c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138c0c) {
            ctx->pc = 0x138BC0u;
            return;
        }
    }
    ctx->pc = 0x138C14u;
    // 0x138c14: 0x0  nop
    ctx->pc = 0x138c14u;
    // NOP
    ctx->pc = 0x138c18u;
}
