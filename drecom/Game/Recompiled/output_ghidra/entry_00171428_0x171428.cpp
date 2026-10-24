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

// Function: entry_00171428
// Address: 0x171428 - 0x171448
void entry_00171428_0x171428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171428_0x171428");
#endif

    ctx->pc = 0x171428u;

    // 0x171428: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x171428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17142c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17142cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171430: 0x9424cc8e  lhu         $a0, -0x3372($at)
    ctx->pc = 0x171430u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x171434: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x171434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x171438: 0xa3202a  slt         $a0, $a1, $v1
    ctx->pc = 0x171438u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17143c: 0x1480ff7c  bnez        $a0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x17143Cu;
    {
        const bool branch_taken_0x17143c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17143c) {
            ctx->pc = 0x171230u;
            return;
        }
    }
    ctx->pc = 0x171444u;
    // 0x171444: 0x0  nop
    ctx->pc = 0x171444u;
    // NOP
    ctx->pc = 0x171448u;
}
