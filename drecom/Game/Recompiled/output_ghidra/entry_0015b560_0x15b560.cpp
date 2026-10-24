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

// Function: entry_0015b560
// Address: 0x15b560 - 0x15b57c
void entry_0015b560_0x15b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b560_0x15b560");
#endif

    ctx->pc = 0x15b560u;

    // 0x15b560: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15b560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15b564: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x15b564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x15b568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b56c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15b56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b570: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x15B570u;
    {
        const bool branch_taken_0x15b570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b570) {
            ctx->pc = 0x15B4C8u;
            return;
        }
    }
    ctx->pc = 0x15B578u;
    // 0x15b578: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x15b578u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15b57cu;
}
