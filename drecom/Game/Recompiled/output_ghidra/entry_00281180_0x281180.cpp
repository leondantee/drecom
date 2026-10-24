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

// Function: entry_00281180
// Address: 0x281180 - 0x281198
void entry_00281180_0x281180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281180_0x281180");
#endif

    ctx->pc = 0x281180u;

    // 0x281180: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x281180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x281184: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x281184u;
    {
        const bool branch_taken_0x281184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281184) {
            ctx->pc = 0x281038u;
            return;
        }
    }
    ctx->pc = 0x28118Cu;
    // 0x28118c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x28118cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281190: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x281190u;
    {
        const bool branch_taken_0x281190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281190) {
            ctx->pc = 0x2812E0u;
            return;
        }
    }
    ctx->pc = 0x281198u;
}
