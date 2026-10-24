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

// Function: entry_00274ba8
// Address: 0x274ba8 - 0x274bc0
void entry_00274ba8_0x274ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274ba8_0x274ba8");
#endif

    ctx->pc = 0x274ba8u;

    // 0x274ba8: 0x2a030038  slti        $v1, $s0, 0x38
    ctx->pc = 0x274ba8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x274bac: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x274BACu;
    {
        const bool branch_taken_0x274bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274bac) {
            ctx->pc = 0x274A88u;
            return;
        }
    }
    ctx->pc = 0x274BB4u;
    // 0x274bb4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x274bb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274bb8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x274BB8u;
    {
        const bool branch_taken_0x274bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274bb8) {
            ctx->pc = 0x274CE0u;
            return;
        }
    }
    ctx->pc = 0x274BC0u;
}
