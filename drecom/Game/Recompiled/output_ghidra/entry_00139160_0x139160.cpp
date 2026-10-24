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

// Function: entry_00139160
// Address: 0x139160 - 0x139178
void entry_00139160_0x139160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139160_0x139160");
#endif

    ctx->pc = 0x139160u;

    // 0x139160: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x139160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x139164: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x139164u;
    {
        const bool branch_taken_0x139164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139164) {
            ctx->pc = 0x13912Cu;
            return;
        }
    }
    ctx->pc = 0x13916Cu;
    // 0x13916c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13916cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139170: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x139170u;
    {
        const bool branch_taken_0x139170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139170) {
            ctx->pc = 0x1391B0u;
            return;
        }
    }
    ctx->pc = 0x139178u;
}
