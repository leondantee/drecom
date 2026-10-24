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

// Function: entry_00176710
// Address: 0x176710 - 0x176730
void entry_00176710_0x176710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176710_0x176710");
#endif

    ctx->pc = 0x176710u;

    // 0x176710: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x176710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176714: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x176714u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x176718: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17671c: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x17671cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x176720: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x176720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x176724: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x176724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x176728: 0x1460ff21  bnez        $v1, . + 4 + (-0xDF << 2)
    ctx->pc = 0x176728u;
    {
        const bool branch_taken_0x176728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176728) {
            ctx->pc = 0x1763B0u;
            return;
        }
    }
    ctx->pc = 0x176730u;
}
