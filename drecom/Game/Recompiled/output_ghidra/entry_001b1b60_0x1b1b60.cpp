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

// Function: entry_001b1b60
// Address: 0x1b1b60 - 0x1b1b7c
void entry_001b1b60_0x1b1b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1b60_0x1b1b60");
#endif

    ctx->pc = 0x1b1b60u;

    // 0x1b1b60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1b1b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1b1b64: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x1b1b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x1b1b68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1b6c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b1b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1b70: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1B1B70u;
    {
        const bool branch_taken_0x1b1b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b70) {
            ctx->pc = 0x1B1AFCu;
            return;
        }
    }
    ctx->pc = 0x1B1B78u;
    // 0x1b1b78: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1b1b78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b1b7cu;
}
