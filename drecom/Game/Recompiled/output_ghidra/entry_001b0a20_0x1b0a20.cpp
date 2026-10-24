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

// Function: entry_001b0a20
// Address: 0x1b0a20 - 0x1b0a38
void entry_001b0a20_0x1b0a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0a20_0x1b0a20");
#endif

    ctx->pc = 0x1b0a20u;

    // 0x1b0a20: 0x72801e28  paddub      $v1, $s4, $zero
    ctx->pc = 0x1b0a20u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b0a24: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x1b0a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b0a28: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B0A28u;
    {
        const bool branch_taken_0x1b0a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a28) {
            ctx->pc = 0x1B09C8u;
            return;
        }
    }
    ctx->pc = 0x1B0A30u;
    // 0x1b0a30: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b0a30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b0a34: 0x0  nop
    ctx->pc = 0x1b0a34u;
    // NOP
    ctx->pc = 0x1b0a38u;
}
