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

// Function: entry_0027d7c8
// Address: 0x27d7c8 - 0x27d7e0
void entry_0027d7c8_0x27d7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d7c8_0x27d7c8");
#endif

    ctx->pc = 0x27d7c8u;

    // 0x27d7c8: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x27d7c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27d7cc: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x27D7CCu;
    {
        const bool branch_taken_0x27d7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d7cc) {
            ctx->pc = 0x27D6E8u;
            return;
        }
    }
    ctx->pc = 0x27D7D4u;
    // 0x27d7d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d7d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d7d8: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x27D7D8u;
    {
        const bool branch_taken_0x27d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d7d8) {
            ctx->pc = 0x27DB68u;
            return;
        }
    }
    ctx->pc = 0x27D7E0u;
}
