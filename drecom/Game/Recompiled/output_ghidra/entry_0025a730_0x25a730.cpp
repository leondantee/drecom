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

// Function: entry_0025a730
// Address: 0x25a730 - 0x25a748
void entry_0025a730_0x25a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a730_0x25a730");
#endif

    ctx->pc = 0x25a730u;

    // 0x25a730: 0x2a020050  slti        $v0, $s0, 0x50
    ctx->pc = 0x25a730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x25a734: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x25A734u;
    {
        const bool branch_taken_0x25a734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a734) {
            ctx->pc = 0x25A70Cu;
            return;
        }
    }
    ctx->pc = 0x25A73Cu;
    // 0x25a73c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a73cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a740: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x25A740u;
    {
        const bool branch_taken_0x25a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a740) {
            ctx->pc = 0x25A970u;
            return;
        }
    }
    ctx->pc = 0x25A748u;
}
