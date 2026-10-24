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

// Function: entry_00170518
// Address: 0x170518 - 0x170538
void entry_00170518_0x170518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170518_0x170518");
#endif

    ctx->pc = 0x170518u;

    // 0x170518: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x170518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17051c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170520: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x170520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x170524: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x170524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170528: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x170528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17052c: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x17052Cu;
    {
        const bool branch_taken_0x17052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17052c) {
            ctx->pc = 0x170324u;
            return;
        }
    }
    ctx->pc = 0x170534u;
    // 0x170534: 0x0  nop
    ctx->pc = 0x170534u;
    // NOP
    ctx->pc = 0x170538u;
}
