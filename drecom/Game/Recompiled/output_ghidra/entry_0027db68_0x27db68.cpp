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

// Function: entry_0027db68
// Address: 0x27db68 - 0x27db80
void entry_0027db68_0x27db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027db68_0x27db68");
#endif

    ctx->pc = 0x27db68u;

    // 0x27db68: 0x2e030013  sltiu       $v1, $s0, 0x13
    ctx->pc = 0x27db68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x27db6c: 0x1460ff1c  bnez        $v1, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x27DB6Cu;
    {
        const bool branch_taken_0x27db6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27db6c) {
            ctx->pc = 0x27D7E0u;
            return;
        }
    }
    ctx->pc = 0x27DB74u;
    // 0x27db74: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27db74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db78: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x27DB78u;
    {
        const bool branch_taken_0x27db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db78) {
            ctx->pc = 0x27DCC0u;
            return;
        }
    }
    ctx->pc = 0x27DB80u;
}
