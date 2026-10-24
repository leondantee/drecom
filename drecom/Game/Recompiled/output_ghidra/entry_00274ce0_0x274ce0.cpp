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

// Function: entry_00274ce0
// Address: 0x274ce0 - 0x274cf8
void entry_00274ce0_0x274ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274ce0_0x274ce0");
#endif

    ctx->pc = 0x274ce0u;

    // 0x274ce0: 0x2a040038  slti        $a0, $s0, 0x38
    ctx->pc = 0x274ce0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x274ce4: 0x1480ffb6  bnez        $a0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x274CE4u;
    {
        const bool branch_taken_0x274ce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x274ce4) {
            ctx->pc = 0x274BC0u;
            return;
        }
    }
    ctx->pc = 0x274CECu;
    // 0x274cec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x274cecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274cf0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x274CF0u;
    {
        const bool branch_taken_0x274cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274cf0) {
            ctx->pc = 0x274F40u;
            return;
        }
    }
    ctx->pc = 0x274CF8u;
}
