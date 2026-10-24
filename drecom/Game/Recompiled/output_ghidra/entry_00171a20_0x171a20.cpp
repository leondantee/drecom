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

// Function: entry_00171a20
// Address: 0x171a20 - 0x171a40
void entry_00171a20_0x171a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171a20_0x171a20");
#endif

    ctx->pc = 0x171a20u;

    // 0x171a20: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x171a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171a24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171a28: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x171a28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x171a2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x171a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x171a30: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x171a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171a34: 0x1460ff7c  bnez        $v1, . + 4 + (-0x84 << 2)
    ctx->pc = 0x171A34u;
    {
        const bool branch_taken_0x171a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171a34) {
            ctx->pc = 0x171828u;
            return;
        }
    }
    ctx->pc = 0x171A3Cu;
    // 0x171a3c: 0x0  nop
    ctx->pc = 0x171a3cu;
    // NOP
    ctx->pc = 0x171a40u;
}
