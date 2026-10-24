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

// Function: entry_001b2990
// Address: 0x1b2990 - 0x1b29a8
void entry_001b2990_0x1b2990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2990_0x1b2990");
#endif

    ctx->pc = 0x1b2990u;

    // 0x1b2990: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x1b2990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1b2994: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B2994u;
    {
        const bool branch_taken_0x1b2994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2994) {
            ctx->pc = 0x1B292Cu;
            return;
        }
    }
    ctx->pc = 0x1B299Cu;
    // 0x1b299c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b299cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b29a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b29a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b29a4: 0x0  nop
    ctx->pc = 0x1b29a4u;
    // NOP
    ctx->pc = 0x1b29a8u;
}
