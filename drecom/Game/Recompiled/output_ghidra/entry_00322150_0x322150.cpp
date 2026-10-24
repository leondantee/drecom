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

// Function: entry_00322150
// Address: 0x322150 - 0x322168
void entry_00322150_0x322150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322150_0x322150");
#endif

    ctx->pc = 0x322150u;

    // 0x322150: 0x2e220013  sltiu       $v0, $s1, 0x13
    ctx->pc = 0x322150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x322154: 0x1440fe90  bnez        $v0, . + 4 + (-0x170 << 2)
    ctx->pc = 0x322154u;
    {
        const bool branch_taken_0x322154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322154) {
            ctx->pc = 0x321B98u;
            return;
        }
    }
    ctx->pc = 0x32215Cu;
    // 0x32215c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x32215cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322160: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x322160u;
    {
        const bool branch_taken_0x322160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322160) {
            ctx->pc = 0x3221D0u;
            return;
        }
    }
    ctx->pc = 0x322168u;
}
