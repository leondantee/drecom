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

// Function: entry_00274150
// Address: 0x274150 - 0x274168
void entry_00274150_0x274150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274150_0x274150");
#endif

    ctx->pc = 0x274150u;

    // 0x274150: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x274150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x274154: 0x1460fe8c  bnez        $v1, . + 4 + (-0x174 << 2)
    ctx->pc = 0x274154u;
    {
        const bool branch_taken_0x274154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274154) {
            ctx->pc = 0x273B88u;
            return;
        }
    }
    ctx->pc = 0x27415Cu;
    // 0x27415c: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x27415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x274160: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x274160u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x274164: 0x0  nop
    ctx->pc = 0x274164u;
    // NOP
    ctx->pc = 0x274168u;
}
