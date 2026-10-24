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

// Function: entry_0025a450
// Address: 0x25a450 - 0x25a468
void entry_0025a450_0x25a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a450_0x25a450");
#endif

    ctx->pc = 0x25a450u;

    // 0x25a450: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x25a450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x25a454: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x25A454u;
    {
        const bool branch_taken_0x25a454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a454) {
            ctx->pc = 0x25A434u;
            return;
        }
    }
    ctx->pc = 0x25A45Cu;
    // 0x25a45c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a45cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a460: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25A460u;
    {
        const bool branch_taken_0x25a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a460) {
            ctx->pc = 0x25A4C0u;
            return;
        }
    }
    ctx->pc = 0x25A468u;
}
