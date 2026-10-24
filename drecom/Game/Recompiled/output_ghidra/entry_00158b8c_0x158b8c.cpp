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

// Function: entry_00158b8c
// Address: 0x158b8c - 0x158bac
void entry_00158b8c_0x158b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b8c_0x158b8c");
#endif

    ctx->pc = 0x158b8cu;

    // 0x158b8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158b90: 0x8c22f840  lw          $v0, -0x7C0($at)
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF840u));
    // 0x158b94: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x158b94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x158b98: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x158B98u;
    {
        const bool branch_taken_0x158b98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b98) {
            ctx->pc = 0x158BACu;
            return;
        }
    }
    ctx->pc = 0x158BA0u;
    // 0x158ba0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x158ba0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x158ba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158BA4u;
    {
        const bool branch_taken_0x158ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ba4) {
            ctx->pc = 0x158BB8u;
            return;
        }
    }
    ctx->pc = 0x158BACu;
}
