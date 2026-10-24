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

// Function: entry_00164330
// Address: 0x164330 - 0x164348
void entry_00164330_0x164330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164330_0x164330");
#endif

    ctx->pc = 0x164330u;

    // 0x164330: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x164330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x164334: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x164334u;
    {
        const bool branch_taken_0x164334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164334) {
            ctx->pc = 0x164320u;
            return;
        }
    }
    ctx->pc = 0x16433Cu;
    // 0x16433c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x16433cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164340u;
    {
        const bool branch_taken_0x164340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164340) {
            ctx->pc = 0x164358u;
            return;
        }
    }
    ctx->pc = 0x164348u;
}
